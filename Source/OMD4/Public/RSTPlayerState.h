#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/OnlineReplStructs.h"
#include "AbilitySystemInterface.h"
#include "ActiveGameplayEffectHandle.h"
#include "GameplayTagContainer.h"
#include "GameplayTagAssetInterface.h"
#include "GameplayTagContainer.h"
#include "ModularPlayerState.h"
#include "ROnlinePlayerInterface.h"
#include "ERSTCoinGrantReason.h"
#include "OnClientInitializedDelegate.h"
#include "OnOwnerChangedDelegate.h"
#include "OnPlayerCoinChangedDelegate.h"
#include "OnPlayerCoinGrantedDelegate.h"
#include "OnPlayerNameChangedDelegate.h"
#include "OnPostInitializeComponentsDelegate.h"
#include "RSTAbilitySet_GrantedHandles.h"
#include "RSTAbilityUIDataContainer.h"
#include "RSTDamageModifiable.h"
#include "RSTHotbarInterface.h"
#include "RSTInheritableGameplayTagPropertyMap.h"
#include "RSTLooseTagHandle.h"
#include "RSTPlayerIdInterface.h"
#include "RSTPropertyModifiable.h"
#include "RSTReplicatedStatList.h"
#include "RSTSelectedSkinRepl.h"
#include "RSTTagIdentifierInterface.h"
#include "RSTTeamAgentInterface.h"
#include "RSTVoiceChatGenericMessageData.h"
#include "Templates/SubclassOf.h"
#include "RSTPlayerState.generated.h"

class AActor;
class APlayerController;
class ARSTPlayerState;
class UGameplayAbility;
class UGameplayEffect;
class URSTAbilitySystemComponent;
class URSTAbilityUIData;
class URSTCommunicationDefinition;
class URSTDamageModifierComponent;
class URSTHotbarComponent;
class URSTInventoryManagerComponent;
class URSTMetaThreadDefinition;
class URSTPawnDefinition;
class URSTPlayerModifierComponent;
class URSTPlayerStateMiscModsComponent;
class URSTPlayerStatePRSComponent;
class URSTPlayerStatusEffectComponent;
class URSTPotionDefinition;
class URSTSkinDefinition;
class URSTUpgradeDefinition;

UCLASS(Blueprintable)
class OMD4_API ARSTPlayerState : public AModularPlayerState/*, public IAbilitySystemInterface, public IRSTPropertyModifiable, public IGameplayTagAssetInterface, public IRSTHotbarInterface, public IRSTTagIdentifierInterface, public IRSTTeamAgentInterface, public IRSTPlayerIdInterface, public IRSTDamageModifiable, public IROnlinePlayerInterface*/ {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FRSTUniqueIdSet);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRSTSupplementalTrapPlacementLimitsChanged, ARSTPlayerState*, PlayerState);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FRSTPlayerVoiceEnabledUpdateDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRSTPlayerIndexSet, ARSTPlayerState*, RSTPlayerState);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRSTPawnDefinitionChanged, ARSTPlayerState*, PlayerState);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FRSTIsDisconnectedChangedDelegate);
    DECLARE_DYNAMIC_DELEGATE_ThreeParams(FRSTAbilityUIDataDelegate, FGameplayTag, Tag, TSoftObjectPtr<URSTAbilityUIData>, OldData, TSoftObjectPtr<URSTAbilityUIData>, Data);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnRSTSeamlessTravelStateChanged);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTIsDisconnectedChangedDelegate OnIsDisconnectedChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bIsHost: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsDisconnected, meta=(AllowPrivateAccess=true))
    uint8 bIsDisconnected: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PlayerIndex, meta=(AllowPrivateAccess=true))
    int32 PlayerIndex;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTUniqueIdSet OnUniqueNetIdWasSet;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTPlayerIndexSet OnPlayerIndexSet;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FString PlatformOSS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FString CrossplayPlatform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RawUniqueNetIdStr, meta=(AllowPrivateAccess=true))
    FString RawUniqueNetIdStr;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTAbilitySystemComponent* AbilitySystemComponent;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTPawnDefinitionChanged OnPawnDefinitionChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTPawnDefinitionChanged OnSkinDefinitionChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PawnDefinition, meta=(AllowPrivateAccess=true))
    URSTPawnDefinition* PawnDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SkinDefinition, meta=(AllowPrivateAccess=true))
    URSTSkinDefinition* SkinDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FRSTAbilitySet_GrantedHandles> GrantedAbilityHandles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FRSTLooseTagHandle> GrantedTagHandles;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTInventoryManagerComponent* InventoryManagerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTHotbarComponent* HotbarComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExtraHotbarSlotCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTPlayerStatusEffectComponent* StatusEffectComponent;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerNameChanged OnPlayerNameChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnClientInitialized OnClientInitialized;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOwnerChanged OnOwnerChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPostInitializeComponents OnPostInitializeComponents;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasPostInitializedComponents;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTPlayerStatePRSComponent* PlayerStatePRSComponent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerCoinChanged OnPlayerCoinChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerCoinGranted OnPlayerCoinGranted;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Coin, meta=(AllowPrivateAccess=true))
    int32 Coin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GoBreakCoinBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAwardComboAlways;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EnvironmentKillComboPointChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SelectedThreads, meta=(AllowPrivateAccess=true))
    TArray<URSTMetaThreadDefinition*> SelectedThreads;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SelectedUpgrades, meta=(AllowPrivateAccess=true))
    TArray<URSTUpgradeDefinition*> SelectedUpgrades;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SelectedPotion, meta=(AllowPrivateAccess=true))
    URSTPotionDefinition* SelectedPotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTPlayerModifierComponent* ModifierComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTPlayerStateMiscModsComponent* MiscModsComponent;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTSupplementalTrapPlacementLimitsChanged OnSupplementalTrapPlacementLimitsChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, int32> SupplementalTrapPlacementLimits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTInheritableGameplayTagPropertyMap PropertyMappings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LoadoutThreadCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GeneralThreadCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> AbilityUITags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FRSTAbilityUIDataContainer> AbilityUIData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, TSoftObjectPtr<URSTAbilityUIData>> CurrentlyShownUIData;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bUseSeamlessTravelPlayerStart;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FRSTReplicatedStatList MissionStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FRSTReplicatedStatList RunStats;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGameplayEffect>> GoBreakEffects;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCarryOverCoin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CoinCarryOverPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CoinCarryOverMax;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTPlayerVoiceEnabledUpdateDelegate OnVoiceEnabledUpdated;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_VoiceEnabled, meta=(AllowPrivateAccess=true))
    bool bVoiceEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer UnlockedHeroes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FRSTSelectedSkinRepl> SelectedSkins;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> PlayerReadyGameplayEffectClass;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FActiveGameplayEffectHandle> PRSReadyEffectHandles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bAllowUltimateChargeWhileActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTDamageModifierComponent* DamageModifierComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RerollsUsed, meta=(AllowPrivateAccess=true))
    int32 RerollsUsed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 ThreadsSkippedCount;
    
public:
    ARSTPlayerState(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool SpendCoin(int32 amount);
    
    UFUNCTION(BlueprintCallable)
    void ShowProfileUI(APlayerController* RequestingPlayer);
    
    UFUNCTION(BlueprintCallable)
    void SetThreadsSkippedCount(int32 InThreadsSkippedCount);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SpendCoin(int32 amount);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetVoiceEnabled(bool bInVoiceEnabled);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetThreadsSkippedCount(int32 InThreadsSkippedCount);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetRerollsUsed(int32 InRerollsUsed);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void Server_RemovePing(int32 PingTrackerId);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void Server_AddPing(URSTCommunicationDefinition* CommunicationOption, AActor* AttachedActor, const FVector& PingPosition, int32 PingTrackerId, ARSTPlayerState* ResponseInstigator, int32 ResponsePingId);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAbilityUIDataUpdatedCallback(FGameplayTag Tag, const ARSTPlayerState::FRSTAbilityUIDataDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    void ProcessComboPoints(int32 ComboPoints);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnVoiceChatSettingsUpdated(FGameplayTag TagIdentifier, const FRSTVoiceChatGenericMessageData& Payload);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_VoiceEnabled();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SkinDefinition();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SelectedUpgrades();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SelectedThreads();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SelectedPotion();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_RerollsUsed();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_RawUniqueNetIdStr();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PlayerIndex();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PawnDefinition();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_IsDisconnected();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_Coin(int32 PreviousCoin);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerReadyStateInterruptOrComplete(FGameplayTag PRSTag);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerReadyStateChanged(FGameplayTag PRSTag, FUniqueNetIdRepl PlayerNetID, bool bIsReady);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnAbilityUITagChanged(const FGameplayTag InTag, int32 NewCount, FGameplayTag AbilityTag);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnAbilityCommit(UGameplayAbility* Ability);
    
public:
    UFUNCTION(BlueprintCallable)
    void NotifyOwnedTrapSold();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void NetMulticast_RemovePing(int32 PingTrackerId);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void NetMulticast_AddPing(URSTCommunicationDefinition* CommunicationOption, AActor* AttachedActor, const FVector& PingPosition, int32 PingTrackerId, ARSTPlayerState* ResponseInstigator, int32 ResponsePingId);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnPropertyPreModify(const FGameplayTag& Tag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnPropertyModified(const FGameplayTag& Tag);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVoiceEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHost() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDisconnected() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    int32 GrantCoin(int32 amount, ERSTCoinGrantReason GrantReason);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTagContainer GetUnlockedHeroes() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetThreadsSkippedCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetTagIdentifier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStatValue(FGameplayTag InStatTag, FGameplayTag InSubStatTag, bool bRunStats) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void GetSelectedSkins(TMap<FGameplayTag, FGameplayTag>& OutSkins) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetSelectedSkin(const FGameplayTag& HeroTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URSTAbilitySystemComponent* GetRSTAbilitySystemComponent() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetRerollsUsed();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPlayerTrapPlacementLimit(FGameplayTag PlacementLimitGroup, int32& OutPlacementLimit) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URSTPlayerStatusEffectComponent* GetPlayerStatusEffectComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLoadoutThreadCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetGeneralThreadCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetCrossplayPlatform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<URSTAbilityUIData> GetAbilityUIData(FGameplayTag Tag);
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SpendCoin(int32 amount);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_NotifyOwnedTrapSold();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_NotifyOwnedTrapPlaced();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_NotifyOwnedTrapDestroyed();
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_AddCoin(int32 amount, ERSTCoinGrantReason GrantReason);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanShowProfileUI(APlayerController* RequestingPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanAddUltimateCharge() const;
    
    UFUNCTION(BlueprintCallable)
    void CallAndRegister_OnAbilityUIDataUpdated(FGameplayTag Tag, const ARSTPlayerState::FRSTAbilityUIDataDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    void AddUltimateChargePercentage(float AmountPercentage);
    
    UFUNCTION(BlueprintCallable)
    void AddUltimateCharge(float amount);
    

    // Fix for true pure virtual functions not being implemented
    /*UFUNCTION(BlueprintCallable)
    bool HasMatchingGameplayTag(FGameplayTag tagToCheck) const override PURE_VIRTUAL(HasMatchingGameplayTag, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAnyMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAnyMatchingGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAllMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAllMatchingGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(GetOwnedGameplayTags,);
    */
};


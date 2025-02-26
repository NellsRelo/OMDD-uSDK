#pragma once
#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "CommonPlayerController.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineBaseTypes.h"
#include "AbilitySystemInterface.h"
#include "GameplayTagContainer.h"
#include "GameplayTagAssetInterface.h"
#include "GameplayTagContainer.h"
#include "OnPlayerControllerPlayerStateChangedDelegate.h"
#include "OnPlayerControllerPostInitializeComponentsDelegate.h"
#include "OnPlayerHeroSelectedDelegate.h"
#include "OnRSTTeamIndexChangedDelegateDelegate.h"
#include "OnTrapEventDelegate.h"
#include "RSTCameraAssistInterface.h"
#include "RSTHotbarInterface.h"
#include "RSTInventoryItemRequest.h"
#include "RSTLooseTagHandle.h"
#include "RSTReplicatedStatList.h"
#include "RSTSelectedSkinRepl.h"
#include "RSTTeamAgentInterface.h"
#include "RSTPlayerController.generated.h"

class AActor;
class ARSTPlayerState;
class URNetworkProxyOwnerComponent;
class URSTAbilitySystemComponent;
class URSTFlyoffComponent;
class URSTInventoryItemDefinition;
class URSTMetaThreadDefinition;
class URSTPotionDefinition;
class URSTUpgradeDefinition;

UCLASS(Blueprintable)
class OMD4_API ARSTPlayerController : public ACommonPlayerController/*, public IRSTCameraAssistInterface, public IRSTTeamAgentInterface, public IRSTHotbarInterface, public IGameplayTagAssetInterface, public IAbilitySystemInterface*/ {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGenericTeamId MyTeamID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRSTTeamIndexChangedDelegate OnTeamChangedDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTag CachedPawnDefinitionTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTag CachedSkinDefinitionTag;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerControllerPostInitializeComponents OnPostInitializeComponents;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerControllerPlayerStateChanged OnPlayerStateChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URNetworkProxyOwnerComponent* NetworkProxyOwnerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTFlyoffComponent* FlyoffComponent;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTrapEvent OnOwnedTrapSold;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTrapEvent OnOwnedTrapPlaced;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTrapEvent OnOwnedTrapDestroyed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRSTLooseTagHandle HideHUDHandle;
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerHeroSelected OnPlayerHeroSelected;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer CachedKeyGrants;
    
    ARSTPlayerController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Exec)
    void UnloadStreamLevel(FName LevelName);
    
    UFUNCTION(BlueprintCallable)
    void SkinDefinitionLoaded(FPrimaryAssetId DefinitionId);
    
    UFUNCTION(BlueprintCallable)
    void SetIsAutoRunning(const bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetHasViewedIntro();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCheatAll(const FString& Msg);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCheat(const FString& Msg);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetUnlockedHeroes(FGameplayTagContainer UnlockedHeroes);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetSelectedUpgrades(const TArray<URSTUpgradeDefinition*>& Upgrades);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetSelectedSkins(const TArray<FRSTSelectedSkinRepl>& SelectedSkins);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetHotbarItems(const TArray<URSTInventoryItemDefinition*>& HotbarItems);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetGrantedKeys(const TArray<FGameplayTag>& KeyGrants);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SelectHero(FGameplayTag SelectedHeroTag);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_RequestSetSkinDefinition(FGameplayTag SkinTag);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_RequestSetPawnDefinition(FGameplayTag PawnTag);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_LockInHero();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_HasViewedIntro();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_HandleNPCInteraction(bool bIsInteracting, AActor* InteractingNPC);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_ChooseUpgrade(const URSTUpgradeDefinition* UpgradeDefinition);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_ChooseThread(const URSTMetaThreadDefinition* ThreadDefinition);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_ChoosePotion(const URSTPotionDefinition* PotionDefinition);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_ChooseMissionByIndex(int32 SelectedMissionIndex);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_AddInventoryItems(const TArray<FRSTInventoryItemRequest>& InventoryItems);
    
public:
    UFUNCTION(BlueprintCallable)
    void SendInputKey(FName KeyName, TEnumAsByte<EInputEvent> inputEventType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SelectRandomThread();
    
    UFUNCTION(BlueprintCallable)
    void SelectHero(FGameplayTag SelectedHeroTag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RunPerfCommands();
    
    UFUNCTION(BlueprintCallable)
    void RerollThreadSelection();
    
    UFUNCTION(BlueprintCallable)
    bool RequestSetSkinDefinition(const FGameplayTag& SkinTag);
    
    UFUNCTION(BlueprintCallable)
    bool RequestSetPawnDefinition(const FGameplayTag& PawnTag);
    
    UFUNCTION(BlueprintCallable)
    void RefreshHotbarSlotCount();
    
    UFUNCTION(BlueprintCallable)
    void PawnDefinitionLoaded(FPrimaryAssetId DefinitionId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnToggleTabWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnThreadSelectionRerolledValidated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnThreadSelectionRerolledBegin();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSkinSelectionUpdated();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRemoveThreadSelection(bool shouldForceSelect);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnHideHUDChanged(const FGameplayTag InTag, int32 NewCount);
    
    UFUNCTION(BlueprintCallable)
    void OnHeroUnlocksUpdated();
    
    UFUNCTION(BlueprintCallable)
    void OnHeroDraftSelectedHeroes(const TArray<FGameplayTag>& SelectedHeroes);
    
    UFUNCTION(BlueprintCallable)
    void OnHeroDraftDesiredHeroes(const TArray<FGameplayTag>& DesiredHeroes);
    
    UFUNCTION(BlueprintCallable)
    void OnGrantedKeysChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndGame();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDisplayThreadSelection();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDisplayHeroDraftSelectedHeroes(const TArray<FGameplayTag>& SelectedHeroes);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDisplayHeroDraftDesiredHeroes(const TArray<FGameplayTag>& DesiredHeroes);
    
public:
    UFUNCTION(BlueprintCallable)
    void LockInHero();
    
    UFUNCTION(BlueprintCallable, Exec)
    void LoadStreamLevel(FName LevelName);
    
    UFUNCTION(BlueprintCallable)
    void KickPlayer(ARSTPlayerState* PlayerToKick);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnStartAutoRun();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnEndAutoRun();
    
public:
    UFUNCTION(BlueprintCallable)
    void GrantSkulls(int32 SkullCount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ARSTPlayerState* GetRSTPlayerState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URSTAbilitySystemComponent* GetRSTAbilitySystemComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsAutoRunning() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetCachedSkinDefinitionTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetCachedPawnDefinitionTag() const;
    
    UFUNCTION(BlueprintCallable)
    void DoNPCInteraction(bool bIsInteracting, AActor* InteractingNPC);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientWasBanned(const FText& BanReason);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_RemoveThreadSelection(bool shouldForceSelect);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_OnRerollsReplicated();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_NotifyHubStarted();
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_NotifyHeroSelected(const FGameplayTag& HeroTag);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_GrantTags(FGameplayTagContainer TagContainer, bool bRecordAnalytics);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_GrantSkulls(int32 SkullCount);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_FlushGameStats(FRSTReplicatedStatList FlushStats);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_EndGame(bool bDidWin, FRSTReplicatedStatList PostGameStats);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_DisplayThreadSelection(int32 threadIndex);
    
    UFUNCTION(BlueprintCallable)
    void BanPlayer(ARSTPlayerState* PlayerToBan);
    
protected:
    UFUNCTION(BlueprintCallable)
    void AutoManageActiveCameraTarget(AActor* SuggestedTarget);
    

    // Fix for true pure virtual functions not being implemented
public:
    //UFUNCTION(BlueprintCallable)
    //bool HasMatchingGameplayTag(FGameplayTag tagToCheck) const override PURE_VIRTUAL(HasMatchingGameplayTag, return false;);
    //
    //UFUNCTION(BlueprintCallable)
    //bool HasAnyMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAnyMatchingGameplayTags, return false;);
    //
    //UFUNCTION(BlueprintCallable)
    //bool HasAllMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAllMatchingGameplayTags, return false;);
    //
    //UFUNCTION(BlueprintCallable)
    //void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(GetOwnedGameplayTags,);
    //
};


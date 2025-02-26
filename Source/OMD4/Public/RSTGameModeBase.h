#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "ModularGameModeBase.h"
#include "ModularGameMode.h"
#include "ERSTCoinGrantReason.h"
#include "RSTInheritableGameplayTagPropertyMap.h"
#include "RSTPickupParameterMods.h"
#include "RSTPropertyModifiable.h"
#include "Templates/SubclassOf.h"
#include "RSTGameModeBase.generated.h"

class APlayerState;
class ARSTCharacter;
class UGameplayEffect;
class URSTModifierComponent;

UCLASS(Blueprintable, NonTransient)
class OMD4_API ARSTGameModeBase : public AModularGameModeBase, public IRSTPropertyModifiable {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FRSTHotbarSlotCountChanged);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTInheritableGameplayTagPropertyMap PropertyMappings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGameplayEffect>> GoBreakEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGameplayEffect>> PostGameEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GoBreakCoinBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldAdvertise;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowJoinInProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTModifierComponent* ModifierComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString HubMapName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer HostKeyFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bProcessAddModifiers;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTHotbarSlotCountChanged OnHotbarSlotCountChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APlayerState*> InactivePlayerArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InactivePlayerStateLifeSpan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxInactivePlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumTravellingPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHealOnGoBreak;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GoBreakRevivePercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CriticalHitDamageScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeashTimeout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IgnoreTargetTimeout;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AdditionalChestCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverrideChestChanceOfNone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverrideCorruptedTrapGridChanceOfNone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowCorruptedTrapGridFirstMission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPreventUnstableRiftDistortion;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRandomizeHotbar: 1;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRSTPickupParameterMods> PickupWeightModifiers;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, int32> BonusSharedTrapPlacementLimits;
    
public:
    ARSTGameModeBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldProcessModifiers() const;
    
    UFUNCTION(BlueprintCallable)
    void ReturnToHubPostGame();
    
    UFUNCTION(BlueprintCallable)
    void ReturnToHub();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPRSComplete(FGameplayTag PRSTag);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerDowned(ARSTCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerDeath(ARSTCharacter* Character);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnGamePhasePostGame();
    
    UFUNCTION(BlueprintCallable)
    void GrantCoinToPlayers(int32 AmountToShare, ERSTCoinGrantReason GrantReason);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLeashTimeout() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetIgnoreTargetTimeout() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void FinishGoBreakTransition(const FGameplayTag& TransitionTag, bool bCancelled, const FGameplayTagContainer& AdditionalTags, FGameplayTag BreakTag);
    
public:
    UFUNCTION(BlueprintCallable)
    void CommitGamble();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnPropertyPreModify(const FGameplayTag& Tag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnPropertyModified(const FGameplayTag& Tag);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BP_AddWinGameScore();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BP_AddDefaultGameScore();
    

    // Fix for true pure virtual functions not being implemented
};


#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/HitResult.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "RSTAdditionalGameplayEffectData.h"
#include "RSTExternalInputAbility.h"
#include "RSTGameplayAbility_CombatBase.h"
#include "RSTRange.h"
#include "Templates/SubclassOf.h"
#include "RSTGameplayAbility_MeleeWeapon.generated.h"

class AActor;
class UAbilityTask_ApplyRootMotion_Base;
class UAbilityTask_PlayMontageAndWait;
class UGameplayEffect;
class URSTAbilityTask_TurnToRotation;
class URSTAdvanceData;
class URSTCombatComponent;
class URSTMeleeWeaponSwingData;

UCLASS(Blueprintable)
class OMD4_API URSTGameplayAbility_MeleeWeapon : public URSTGameplayAbility_CombatBase, public IRSTExternalInputAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTRange AbilityRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<URSTMeleeWeaponSwingData*> SwingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<URSTMeleeWeaponSwingData*> ConditionalFirstSwingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BasePlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CameraShakeCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRSTAdditionalGameplayEffectData> LastHitAdditionalEffectData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastHitDamageFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAbilityTask_PlayMontageAndWait* SwingMontageTaskHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentSwingIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bComboEnding;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AdvancingBlockedTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGetAdvanceTargetOnSwingStart;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAbilityTask_ApplyRootMotion_Base* AdvanceTaskHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AdvanceDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AdvanceStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> CachedAdvanceTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URSTAbilityTask_TurnToRotation* TargetRotationTaskHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinControlRotationThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator TurnToTargetRotationRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRestrictPlayerAutoSwing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLimitSingleComboAutoSwing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowAerialCombat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> AerialGameplayEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> AerialRemovalEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPerformAirborneRecovery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AirborneRecoveryTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> AerialHitGameplayEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AerialHitSuspendDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AerialHitSuspendGravityScale;
    
public:
    URSTGameplayAbility_MeleeWeapon();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 SwingIndexToConditionalIndex(int32 InIndex) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSwingInterrupted();
    
    UFUNCTION(BlueprintCallable)
    void OnSwingCompleted();
    
    UFUNCTION(BlueprintCallable)
    void OnSwingCancelled();
    
    UFUNCTION(BlueprintCallable)
    void OnSwingBlendOut();
    
    UFUNCTION(BlueprintCallable)
    void OnDesiredRotationReached(float Duration);
    
    UFUNCTION(BlueprintCallable)
    void OnDesiredRotationFailed();
    
    UFUNCTION(BlueprintCallable)
    void OnAutoSwingTimer();
    
    UFUNCTION(BlueprintCallable)
    void OnAdvanceFinished_Force();
    
    UFUNCTION(BlueprintCallable)
    void OnAdvanceFinished_Actor(bool bDestinationReached, bool bTimedOut, FVector FinalTargetLocation);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFinalSwing(int32 SwingIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAirborne() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSwingIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URSTMeleeWeaponSwingData* GetSwingData(int32 SwingIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxComboSwings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetHitGameplayCue(int32 SwingIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentSwingPlayRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URSTAdvanceData* GetCurrentAdvanceData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URSTCombatComponent* GetCombatComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 ConditionalIndexToSwingIndex(int32 InIndex) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SwingTriggering();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool BP_ShouldAllowAutoSwing(int32 CurrentSwing, int32 MaxSwings);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnSuccessfulHit(int32 SwingIndex, const FHitResult& HitResult);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnAdvanceStopped();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnAdvanceStarted(float Duration, FVector Forward);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnAdvanceFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool BP_IsAdvanceAllowed(AActor* DynamicTarget) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_CleanUpPreviousSwing();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AllowAerialCombat() const;
    

    // Fix for true pure virtual functions not being implemented
};


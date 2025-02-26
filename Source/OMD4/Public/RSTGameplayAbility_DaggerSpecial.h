#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/CollisionProfile.h"
#include "ActiveGameplayEffectHandle.h"
#include "Abilities/GameplayAbilityTargetTypes.h"
#include "GameplayPrediction.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "RSTGameplayAbility_CombatBase.h"
#include "Templates/SubclassOf.h"
#include "RSTGameplayAbility_DaggerSpecial.generated.h"

class AActor;
class UAbilityTask_PlayMontageAndWait;
class UAbilityTask_WaitAbilityCommit;
class UAbilityTask_WaitDelay;
class UAnimMontage;
class UGameplayAbility;
class UGameplayEffect;
class URSTAbilityTask_TrackMovePoints;

UCLASS(Blueprintable)
class OMD4_API URSTGameplayAbility_DaggerSpecial : public URSTGameplayAbility_CombatBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CueDataTag;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Montage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAbilityTask_PlayMontageAndWait* MontageTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCollisionProfileName DamageProfileName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ForbiddenTargetTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExplosionDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDelayExplosionExpiration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDelayExplosionTriggered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAbilityTask_WaitDelay* ExplosionDelayTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> DashSpeedEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DashSpeedScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCollisionProfileName InvisibleRootCollisionProfileOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCollisionProfileName InvisibleMeshCollisionProfileOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer DashActiveTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActiveGameplayEffectHandle AppliedDashSpeedHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag DashActiveCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag DashActiveCueLifetimeParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag DashActiveCueLifetimeWithDelayParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag DashTrailCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag DashExpiredCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag DashManuallyFinishedCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag DashExplosionCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RadiusCueTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DashDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAbilityTask_WaitDelay* DashTimerTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery TriggeringAbilitiesQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAbilityTask_WaitAbilityCommit* TriggeringAbilitiesTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PathGatheringRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PathGatheringMoveThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PathGatheringLocationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URSTAbilityTask_TrackMovePoints* PathGatheringTask;
    
public:
    URSTGameplayAbility_DaggerSpecial();

protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_OnTargetDataSet(FGameplayAbilityTargetDataHandle TargetHandle, const TArray<FVector>& BreakableLocations, bool bExpired, FPredictionKey Key);
    
    UFUNCTION(BlueprintCallable)
    void OnTriggeringAbilityActivated(UGameplayAbility* Ability);
    
    UFUNCTION(BlueprintCallable)
    void OnMontageFinishedNormally();
    
    UFUNCTION(BlueprintCallable)
    void OnMontageFinishedAbnormally();
    
    UFUNCTION(BlueprintCallable)
    void OnExplosionDelayFinished_Triggered();
    
    UFUNCTION(BlueprintCallable)
    void OnExplosionDelayFinished_Expired();
    
    UFUNCTION(BlueprintCallable)
    void OnDashTimerExpired();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_StartDash();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_PerformPreMontageEffects();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_PerformPostMontageEffects();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool BP_IsValidTarget(AActor* Actor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_FinishDash(bool bExpired);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_CleanUpDash();
    
};


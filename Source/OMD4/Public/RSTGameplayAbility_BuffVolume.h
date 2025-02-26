#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/CollisionProfile.h"
#include "AttributeSet.h"
#include "GameplayEffectTypes.h"
#include "GameplayTagContainer.h"
#include "RSTBuffVolumeData.h"
#include "RSTGameplayAbility_CombatBase.h"
#include "RSTGameplayAbility_BuffVolume.generated.h"

class AActor;
class UAbilityTask_WaitDelay;
class URSTAbilityTask_SphereOverlap;
class URSTAbilityTask_TraceLineOfSight;

UCLASS(Blueprintable)
class OMD4_API URSTGameplayAbility_BuffVolume : public URSTGameplayAbility_CombatBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugDraw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseRadiusAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttribute BuffRadiusAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseRadiusFunction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BuffRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCapsuleMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRestrictCapsuleDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CapsuleDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMovingVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCollisionProfileName CollisionProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FRSTBuffVolumeData> BuffEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEndAbilityAfterLifetime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreAvatar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRunInitialTraceInstantly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverlapTickRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequireLineOfSight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCollisionProfileName LineOfSightProfileName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LineOfSightCheckFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LineOfSightMoveRecheckThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LineOfSightHitTolerance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LineOfSightOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClientAuthoritativeVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAbilityTask_WaitDelay* LifetimeTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URSTAbilityTask_SphereOverlap* TraceOverlapsTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URSTAbilityTask_TraceLineOfSight* LineOfSightTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RecurringEventRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAbilityTask_WaitDelay* RecurringEventTask;
    
public:
    URSTGameplayAbility_BuffVolume();

    UFUNCTION(BlueprintCallable)
    void StopBuffVolume();
    
    UFUNCTION(BlueprintCallable)
    void StartBuffVolume();
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_OnActorsLeft(const TArray<AActor*>& Actors);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_OnActorsEntered(const TArray<AActor*>& Actors);
    
    UFUNCTION(BlueprintCallable)
    void OnRecurringEventTimerFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnLifetimeElapsed();
    
    UFUNCTION(BlueprintCallable)
    void OnLeftLineOfSight(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void OnEnteredLineOfSight(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void OnActorsLeft(const TArray<AActor*>& Actors);
    
    UFUNCTION(BlueprintCallable)
    void OnActorsEntered(const TArray<AActor*>& Actors);
    
    UFUNCTION(BlueprintCallable)
    FTransform GetStartTransform();
    
    UFUNCTION(BlueprintCallable)
    float GetRadius();
    
    UFUNCTION(BlueprintCallable)
    FTransform GetLineOfSightTransform();
    
    UFUNCTION(BlueprintCallable)
    TArray<AActor*> GetLineOfSightActors();
    
    UFUNCTION(BlueprintCallable)
    FTransform GetEndTransform();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCurrentTargets(TArray<AActor*>& OutTargets);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FGameplayEffectSpecHandle BP_RunCustomEffectSpecLogic(const AActor* TargetedActor, const FGameplayEffectSpecHandle& InSpecHandle, const FGameplayTag& CustomLogicTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ProcessActorRecurringEvent(AActor* Actor, FGameplayTag TypeTag, FGameplayTag AdditionalData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ProcessActorLeft(AActor* Actor, FGameplayTag TypeTag, FGameplayTag AdditionalData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ProcessActorEntered(AActor* Actor, FGameplayTag TypeTag, FGameplayTag AdditionalData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_LifetimeElapsed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FTransform BP_GetStartTransform();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float BP_GetRadius();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<AActor*> BP_GetIgnoreActors(const TArray<AActor*>& InActors) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FTransform BP_GetEndTransform();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float BP_GetDuration() const;
    
};


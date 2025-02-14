#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/CollisionProfile.h"
#include "GameplayTagContainer.h"
#include "RSTGameplayAbility.h"
#include "Templates/SubclassOf.h"
#include "RSTGameplayAbility_GatherTargets.generated.h"

class AActor;
class URSTAbilityTask_SphereOverlap;
class URSTAbilityTask_TraceLineOfSight;

UCLASS(Abstract, Blueprintable)
class OMD4_API URSTGameplayAbility_GatherTargets : public URSTGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTargetIncludeAnyFilterTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TargetIncludeFilterTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TargetIgnoreFilterTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AActor>> TargetFilterClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreSelf;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultTargetRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCollisionProfileName SphereOverlapProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SphereOverlapTickRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URSTAbilityTask_SphereOverlap* SphereOverlapTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> CurrentTargetList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCollisionProfileName LineOfSightProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LineOfSightMoveRecheckThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LineOfSightMinConsiderRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LineOfSightHitTolerance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LineOfSightTickRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URSTAbilityTask_TraceLineOfSight* LineOfSightTask;
    
public:
    URSTGameplayAbility_GatherTargets();

    UFUNCTION(BlueprintCallable)
    void StopGatheringTargets();
    
    UFUNCTION(BlueprintCallable)
    void StartGatheringTargets();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnOverlapsLeft(const TArray<AActor*>& Actors);
    
    UFUNCTION(BlueprintCallable)
    void OnOverlapsEntered(const TArray<AActor*>& Actors);
    
    UFUNCTION(BlueprintCallable)
    void OnLineOfSightUpdated();
    
    UFUNCTION(BlueprintCallable)
    float GetTargetRadius();
    
    UFUNCTION(BlueprintCallable)
    FTransform GetSphereSourceTransform();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetLineOfSightSourceTransformConst() const;
    
    UFUNCTION(BlueprintCallable)
    FTransform GetLineOfSightSourceTransform();
    
    UFUNCTION(BlueprintCallable)
    TArray<AActor*> GetCurrentTargets();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_TargetGatheringStopped();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_TargetGatheringStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ProcessTargetFound(AActor* NewTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ProcessAllLineOfSightTargets(const TArray<AActor*>& PotentialTargets);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BP_IsValidTarget(AActor* Actor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BP_IsBetterTarget(AActor* Actor, AActor* CurrentTarget, float CurrentValue, float& OutEvalValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FTransform BP_GetSphereSourceTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    AActor* BP_GetOptimalTarget(const TArray<AActor*>& PotentialTargets) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FTransform BP_GetLineOfSightSourceTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<AActor*> BP_GetIgnoreActorsList() const;
    
};


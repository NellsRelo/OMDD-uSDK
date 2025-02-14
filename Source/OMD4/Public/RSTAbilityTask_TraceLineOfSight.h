#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/CollisionProfile.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "RSTTraceLineOfSightActorsDelegateDelegate.h"
#include "RSTTraceLineOfSightAnyChangeDelegate.h"
#include "RSTTraceLineOfSightLineOfSightChangedDelegate.h"
#include "RSTTraceLineOfSightTransformDelegateDelegate.h"
#include "RSTAbilityTask_TraceLineOfSight.generated.h"

class AActor;
class UGameplayAbility;
class URSTAbilityTask_TraceLineOfSight;

UCLASS(Blueprintable)
class OMD4_API URSTAbilityTask_TraceLineOfSight : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTTraceLineOfSightLineOfSightChanged OnEnteredLineOfSight;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTTraceLineOfSightLineOfSightChanged OnLeftLineOfSight;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTTraceLineOfSightAnyChange OnLineOfSightUpdated;
    
    URSTAbilityTask_TraceLineOfSight();

    UFUNCTION(BlueprintCallable)
    static URSTAbilityTask_TraceLineOfSight* TraceLineOfSight_Dynamic(UGameplayAbility* OwningAbility, FRSTTraceLineOfSightActorsDelegate ActorsDelegate, FRSTTraceLineOfSightTransformDelegate TransformDelegate, FCollisionProfileName TraceProfile, bool bIgnoreSelf, const TArray<AActor*>& IgnoreActors, float MoveRecheckThreshold, float MinConsiderRadius, float HitTolerance, bool bRunTraceInstantly, float ScanRate, bool bShowDebug);
    
    UFUNCTION(BlueprintCallable)
    static URSTAbilityTask_TraceLineOfSight* TraceLineOfSight(UGameplayAbility* OwningAbility, FRSTTraceLineOfSightActorsDelegate ActorsDelegate, FTransform Transform, FCollisionProfileName TraceProfile, bool bIgnoreSelf, const TArray<AActor*>& IgnoreActors, float MoveRecheckThreshold, float MinConsiderRadius, float HitTolerance, bool bRunTraceInstantly, float ScanRate, bool bShowDebug);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AActor*> GetCurrentLineOfSightActors() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void CheckLineOfSight();
    
};


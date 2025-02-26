#pragma once
#include "CoreMinimal.h"
#include "RSTAbilityTask_TrackVelocity.h"
#include "RSTAbilityTask_TrackMoveAngle.generated.h"

class UGameplayAbility;
class URSTAbilityTask_TrackMoveAngle;

UCLASS(Blueprintable)
class OMD4_API URSTAbilityTask_TrackMoveAngle : public URSTAbilityTask_TrackVelocity {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FRSTMoveAngleTask);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTMoveAngleTask OnWithinThreshold;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTMoveAngleTask OnOutsideThreshold;
    
    URSTAbilityTask_TrackMoveAngle();

    UFUNCTION(BlueprintCallable)
    static URSTAbilityTask_TrackMoveAngle* TrackMoveAngle(UGameplayAbility* OwningAbility, float ForwardAngleThresholdDegrees, bool bTriggerOnInitialVelocity);
    
};


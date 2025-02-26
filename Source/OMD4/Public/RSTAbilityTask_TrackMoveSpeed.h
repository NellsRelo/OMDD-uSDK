#pragma once
#include "CoreMinimal.h"
#include "RSTAbilityTask_TrackVelocity.h"
#include "RSTAbilityTask_TrackMoveSpeed.generated.h"

class UGameplayAbility;
class URSTAbilityTask_TrackMoveSpeed;

UCLASS(Blueprintable)
class OMD4_API URSTAbilityTask_TrackMoveSpeed : public URSTAbilityTask_TrackVelocity {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRSTMoveSpeedTask, float, MoveSpeed);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTMoveSpeedTask OnBelowThreshold;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTMoveSpeedTask OnAboveThreshold;
    
    URSTAbilityTask_TrackMoveSpeed();

    UFUNCTION(BlueprintCallable)
    static URSTAbilityTask_TrackMoveSpeed* TrackMoveSpeed(UGameplayAbility* OwningAbility, float MagnitudeThreshold, bool bTriggerOnInitialVelocity);
    
};


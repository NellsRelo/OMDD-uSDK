#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "RSTTurnToRotationDelegateDelegate.h"
#include "RSTTurnToRotationFailureDelegateDelegate.h"
#include "RSTAbilityTask_TurnToRotation.generated.h"

class UGameplayAbility;
class URSTAbilityTask_TurnToRotation;

UCLASS(Blueprintable)
class OMD4_API URSTAbilityTask_TurnToRotation : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTTurnToRotationDelegate OnTargetReached;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTTurnToRotationFailureDelegate OnTaskFailed;
    
    URSTAbilityTask_TurnToRotation();

    UFUNCTION(BlueprintCallable)
    static URSTAbilityTask_TurnToRotation* TurnToRotation(UGameplayAbility* OwningAbility, FRotator TargetRotation, bool bRelativeRotation, bool bUseCharacterTurnRate, FRotator TurnRate, bool bRotateYaw, bool bRotatePitch, bool bRotateRoll, float Tolerance);
    
};


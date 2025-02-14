#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RSTAbilityTask_TurnToRotation.h"
#include "RSTAbilityTask_TurnToControlRotation.generated.h"

class UGameplayAbility;
class URSTAbilityTask_TurnToControlRotation;

UCLASS(Blueprintable)
class OMD4_API URSTAbilityTask_TurnToControlRotation : public URSTAbilityTask_TurnToRotation {
    GENERATED_BODY()
public:
    URSTAbilityTask_TurnToControlRotation();

    UFUNCTION(BlueprintCallable)
    static URSTAbilityTask_TurnToControlRotation* TurnToControlRotation(UGameplayAbility* OwningAbility, bool bUseCharacterTurnRate, FRotator TurnRate, bool bRotateYaw, bool bRotatePitch, bool bRotateRoll, float Tolerance);
    
};


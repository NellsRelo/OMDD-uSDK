#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RSTAbilityTask_TurnToRotation.h"
#include "RSTAbilityTask_TurnToFaceActor.generated.h"

class AActor;
class UGameplayAbility;
class URSTAbilityTask_TurnToFaceActor;

UCLASS(Blueprintable)
class OMD4_API URSTAbilityTask_TurnToFaceActor : public URSTAbilityTask_TurnToRotation {
    GENERATED_BODY()
public:
    URSTAbilityTask_TurnToFaceActor();

    UFUNCTION(BlueprintCallable)
    static URSTAbilityTask_TurnToFaceActor* TurnToFaceActor(UGameplayAbility* OwningAbility, AActor* TargetActor, bool bUseCharacterTurnRate, FRotator TurnRate, bool bRotateYaw, bool bRotatePitch, bool bRotateRoll, float Tolerance);
    
};


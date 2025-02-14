#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "ERSTCharacterWeightClass.h"
#include "RSTAbilityTask_LaunchCharacter.generated.h"

class ARSTCharacter;
class UGameplayAbility;
class URSTAbilityTask_LaunchCharacter;

UCLASS(Blueprintable)
class OMD4_API URSTAbilityTask_LaunchCharacter : public UAbilityTask {
    GENERATED_BODY()
public:
    URSTAbilityTask_LaunchCharacter();

private:
    UFUNCTION(BlueprintCallable)
    static URSTAbilityTask_LaunchCharacter* LaunchCharacter(UGameplayAbility* OwningAbility, ARSTCharacter* InToLaunchCharacter, const FVector& InLaunchVelocity, ERSTCharacterWeightClass InMaxWeightClass, bool bInRagdoll);
    
};


#pragma once
#include "CoreMinimal.h"
#include "ERSTAbilityActivationPolicy.generated.h"

UENUM(BlueprintType)
enum class ERSTAbilityActivationPolicy : uint8 {
    OnInputTriggered,
    WhileInputActive,
    OnSpawn,
};


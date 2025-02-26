#pragma once
#include "CoreMinimal.h"
#include "ERSTAbilityActivationGroup.generated.h"

UENUM(BlueprintType)
enum class ERSTAbilityActivationGroup : uint8 {
    Independent,
    Exclusive_Replaceable,
    Exclusive_Blocking,
    MAX,
};


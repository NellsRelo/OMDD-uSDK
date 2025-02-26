#pragma once
#include "CoreMinimal.h"
#include "ERSTSellTrapAbilityResult.generated.h"

UENUM(BlueprintType)
enum class ERSTSellTrapAbilityResult : uint8 {
    Error_Invalid,
    Error_NotSold,
    Error_AlreadySold,
    Error_TrapNotFound,
    Success,
};


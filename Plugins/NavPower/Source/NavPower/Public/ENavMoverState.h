#pragma once
#include "CoreMinimal.h"
#include "ENavMoverState.generated.h"

UENUM(BlueprintType)
enum class ENavMoverState : uint8 {
    Invalid,
    Active,
    Paused,
};


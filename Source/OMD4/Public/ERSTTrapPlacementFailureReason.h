#pragma once
#include "CoreMinimal.h"
#include "ERSTTrapPlacementFailureReason.generated.h"

UENUM(BlueprintType)
enum class ERSTTrapPlacementFailureReason : uint8 {
    Unknown,
    NoTrapGrid,
    InvalidPlacement,
    WrongPlacementType,
    TrapLimitReached,
    NotEnoughCoin,
    Encroaching,
};


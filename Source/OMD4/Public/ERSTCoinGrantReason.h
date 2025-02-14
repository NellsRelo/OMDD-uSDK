#pragma once
#include "CoreMinimal.h"
#include "ERSTCoinGrantReason.generated.h"

UENUM(BlueprintType)
enum class ERSTCoinGrantReason : uint8 {
    None,
    Initial,
    Kill,
    Thread,
    TrapSale,
    TrapPlacementFail,
    Pickup,
    GoBreak,
    Cheat,
    Onslaught,
};


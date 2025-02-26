#pragma once
#include "CoreMinimal.h"
#include "ERSTTrapPlacementFlags.generated.h"

UENUM(BlueprintType)
enum class ERSTTrapPlacementFlags : uint8 {
    None,
    Floor,
    Wall,
    Ceiling = 4,
};


#pragma once
#include "CoreMinimal.h"
#include "ERSTInventoryItemFilter.generated.h"

UENUM(BlueprintType)
enum class ERSTInventoryItemFilter : uint8 {
    None,
    AllTraps,
    CeilingTraps,
    WallTraps,
    FloorTraps,
};


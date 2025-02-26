#pragma once
#include "CoreMinimal.h"
#include "ERSTInventoryItemPropertyDisplayFormat.generated.h"

UENUM(BlueprintType)
enum class ERSTInventoryItemPropertyDisplayFormat : uint8 {
    Basic,
    Percentage,
    InvertedPercentage,
    CriticalHitPercentage,
    Time,
};


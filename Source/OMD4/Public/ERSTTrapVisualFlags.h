#pragma once
#include "CoreMinimal.h"
#include "ERSTTrapVisualFlags.generated.h"

UENUM(BlueprintType)
enum class ERSTTrapVisualFlags : uint8 {
    None,
    Sell,
    BuffPreview,
    Buff = 4,
    Disabled = 8,
};


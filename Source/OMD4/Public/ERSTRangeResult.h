#pragma once
#include "CoreMinimal.h"
#include "ERSTRangeResult.generated.h"

UENUM(BlueprintType)
enum class ERSTRangeResult : uint8 {
    InvalidCheck,
    InsideMin,
    OutsideMax,
    InRange,
};


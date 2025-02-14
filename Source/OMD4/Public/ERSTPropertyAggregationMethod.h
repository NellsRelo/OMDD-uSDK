#pragma once
#include "CoreMinimal.h"
#include "ERSTPropertyAggregationMethod.generated.h"

UENUM(BlueprintType)
enum class ERSTPropertyAggregationMethod : uint8 {
    Set,
    Array_Add,
    Math_Add,
    Math_Multiply,
    Math_PostMultiplyAdd,
    Custom,
};


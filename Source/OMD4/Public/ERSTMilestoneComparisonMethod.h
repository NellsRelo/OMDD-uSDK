#pragma once
#include "CoreMinimal.h"
#include "ERSTMilestoneComparisonMethod.generated.h"

UENUM()
enum class ERSTMilestoneComparisonMethod : int32 {
    GreaterThanEqual,
    GreaterThan,
    Equals,
    LessThanEqual,
    LessThan,
};


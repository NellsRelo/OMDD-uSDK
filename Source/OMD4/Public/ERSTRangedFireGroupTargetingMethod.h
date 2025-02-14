#pragma once
#include "CoreMinimal.h"
#include "ERSTRangedFireGroupTargetingMethod.generated.h"

UENUM(BlueprintType)
enum class ERSTRangedFireGroupTargetingMethod : uint8 {
    IndependentTargeting,
    Primary_Target,
    Primary_Offset,
};


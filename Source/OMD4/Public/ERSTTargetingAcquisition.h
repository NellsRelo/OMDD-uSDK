#pragma once
#include "CoreMinimal.h"
#include "ERSTTargetingAcquisition.generated.h"

UENUM(BlueprintType)
enum class ERSTTargetingAcquisition : uint8 {
    NotSet,
    Perception,
    AlwaysAware,
};


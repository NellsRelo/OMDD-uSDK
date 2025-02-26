#pragma once
#include "CoreMinimal.h"
#include "ERSTPathPointType.generated.h"

UENUM(BlueprintType)
enum class ERSTPathPointType : uint8 {
    Pathing,
    Roaming,
    Both,
};


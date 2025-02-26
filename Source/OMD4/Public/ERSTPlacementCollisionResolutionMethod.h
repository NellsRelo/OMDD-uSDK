#pragma once
#include "CoreMinimal.h"
#include "ERSTPlacementCollisionResolutionMethod.generated.h"

UENUM(BlueprintType)
enum class ERSTPlacementCollisionResolutionMethod : uint8 {
    FailOnCollision,
    LinearShortening,
};


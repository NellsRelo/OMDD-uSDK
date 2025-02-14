#pragma once
#include "CoreMinimal.h"
#include "ENavMoveResult.generated.h"

UENUM(BlueprintType)
enum class ENavMoveResult : uint8 {
    Success,
    Partial,
    Canceled,
    Failed,
};


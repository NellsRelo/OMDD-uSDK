#pragma once
#include "CoreMinimal.h"
#include "ENavPowerMoveToTaskState.generated.h"

UENUM(BlueprintType)
enum class ENavPowerMoveToTaskState : uint8 {
    NotSet,
    Requested,
    Failed,
    Aborted,
    InProgress,
    Partial,
    Complete,
};


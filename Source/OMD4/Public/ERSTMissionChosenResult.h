#pragma once
#include "CoreMinimal.h"
#include "ERSTMissionChosenResult.generated.h"

UENUM(BlueprintType)
enum class ERSTMissionChosenResult : uint8 {
    Success,
    MissionAlreadyCommitted,
    UnknownError,
};


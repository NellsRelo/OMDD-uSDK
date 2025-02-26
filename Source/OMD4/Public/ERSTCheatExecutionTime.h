#pragma once
#include "CoreMinimal.h"
#include "ERSTCheatExecutionTime.generated.h"

UENUM()
enum class ERSTCheatExecutionTime : int32 {
    OnCheatManagerCreated,
    OnPlayerPawnPossession,
};


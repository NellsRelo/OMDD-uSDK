#pragma once
#include "CoreMinimal.h"
#include "ERSTFireHookshotClawState.generated.h"

UENUM(BlueprintType)
enum class ERSTFireHookshotClawState : uint8 {
    None,
    Extending,
    Grappling,
    Retracting,
    Done,
};


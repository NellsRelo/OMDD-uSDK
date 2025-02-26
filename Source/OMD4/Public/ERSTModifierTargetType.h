#pragma once
#include "CoreMinimal.h"
#include "ERSTModifierTargetType.generated.h"

UENUM()
enum class ERSTModifierTargetType : int32 {
    None,
    Global,
    Player,
    Rift,
    Trap,
    AI,
    OnslaughtCoordinator,
};


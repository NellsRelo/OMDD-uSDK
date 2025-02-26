#pragma once
#include "CoreMinimal.h"
#include "ERSTModifierTargetMethod.generated.h"

UENUM(BlueprintType)
enum class ERSTModifierTargetMethod : uint8 {
    None,
    Global,
    Player,
    OtherPlayers,
    AllPlayers,
    Rift,
    PlayerTraps,
    AllTraps,
    AI,
    OnslaughtCoordinator,
};


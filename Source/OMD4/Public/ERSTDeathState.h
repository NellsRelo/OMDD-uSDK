#pragma once
#include "CoreMinimal.h"
#include "ERSTDeathState.generated.h"

UENUM(BlueprintType)
enum class ERSTDeathState : uint8 {
    NotDead,
    Downed,
    DeathStarted,
    DeathFinished,
};


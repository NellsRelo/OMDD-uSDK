#pragma once
#include "CoreMinimal.h"
#include "ERSTRiftPointLossReason.generated.h"

UENUM(BlueprintType)
enum class ERSTRiftPointLossReason : uint8 {
    None,
    MinionEntered,
    PlayerDeath,
    Cheat,
    Damage,
    Chest,
    MAX,
};


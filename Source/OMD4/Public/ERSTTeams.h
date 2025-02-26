#pragma once
#include "CoreMinimal.h"
#include "ERSTTeams.generated.h"

UENUM(BlueprintType)
enum class ERSTTeams : uint8 {
    Players,
    NPC,
    Enemies,
    PlayerDamagableTraps,
};


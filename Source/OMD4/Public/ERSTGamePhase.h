#pragma once
#include "CoreMinimal.h"
#include "ERSTGamePhase.generated.h"

UENUM(BlueprintType)
enum class ERSTGamePhase : uint8 {
    None,
    PreStart,
    InProgress,
    Ending,
    PostGame,
};


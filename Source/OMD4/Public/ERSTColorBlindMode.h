#pragma once
#include "CoreMinimal.h"
#include "ERSTColorBlindMode.generated.h"

UENUM(BlueprintType)
enum class ERSTColorBlindMode : uint8 {
    Off,
    Deuteranope,
    Protanope,
    Tritanope,
};


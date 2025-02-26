#pragma once
#include "CoreMinimal.h"
#include "ERSTGamepadSensitivity.generated.h"

UENUM(BlueprintType)
enum class ERSTGamepadSensitivity : uint8 {
    Invalid,
    Slow,
    SlowPlus,
    SlowPlusPlus,
    Normal,
    NormalPlus,
    NormalPlusPlus,
    Fast,
    FastPlus,
    FastPlusPlus,
    Insane,
    MAX,
};


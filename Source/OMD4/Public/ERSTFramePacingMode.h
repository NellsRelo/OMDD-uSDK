#pragma once
#include "CoreMinimal.h"
#include "ERSTFramePacingMode.generated.h"

UENUM(BlueprintType)
enum class ERSTFramePacingMode : uint8 {
    DesktopStyle,
    ConsoleStyle,
    MobileStyle,
};


#pragma once
#include "CoreMinimal.h"
#include "ERSTRangedAimMode.generated.h"

UENUM(BlueprintType)
enum class ERSTRangedAimMode : uint8 {
    Linear,
    Arced_FixedSpeed,
    Arced_FixedHeight,
    Firepoint,
};


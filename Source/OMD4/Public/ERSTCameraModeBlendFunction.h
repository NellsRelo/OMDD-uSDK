#pragma once
#include "CoreMinimal.h"
#include "ERSTCameraModeBlendFunction.generated.h"

UENUM(BlueprintType)
enum class ERSTCameraModeBlendFunction : uint8 {
    Linear,
    EaseIn,
    EaseOut,
    EaseInOut,
    COUNT,
};


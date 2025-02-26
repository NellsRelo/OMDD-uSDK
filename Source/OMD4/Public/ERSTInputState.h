#pragma once
#include "CoreMinimal.h"
#include "ERSTInputState.generated.h"

UENUM(BlueprintType)
enum class ERSTInputState : uint8 {
    None,
    Pressed,
    Held,
    HeldAndReleased,
};


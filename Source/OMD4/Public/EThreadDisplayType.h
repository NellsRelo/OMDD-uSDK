#pragma once
#include "CoreMinimal.h"
#include "EThreadDisplayType.generated.h"

UENUM(BlueprintType)
enum class EThreadDisplayType : uint8 {
    Curse,
    Generic,
    Hero,
    Trap,
    MAX,
};


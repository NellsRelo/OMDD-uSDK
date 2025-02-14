#pragma once
#include "CoreMinimal.h"
#include "ERSTStatType.generated.h"

UENUM(BlueprintType)
enum class ERSTStatType : uint8 {
    Persistent,
    Run,
    Mission,
};


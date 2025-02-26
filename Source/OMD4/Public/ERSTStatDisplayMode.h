#pragma once
#include "CoreMinimal.h"
#include "ERSTStatDisplayMode.generated.h"

UENUM(BlueprintType)
enum class ERSTStatDisplayMode : uint8 {
    Hidden,
    TextOnly,
    GraphOnly,
    TextAndGraph,
};


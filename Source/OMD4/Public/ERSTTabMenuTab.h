#pragma once
#include "CoreMinimal.h"
#include "ERSTTabMenuTab.generated.h"

UENUM(BlueprintType)
enum class ERSTTabMenuTab : uint8 {
    Status,
    Thread,
    Hero,
    Map,
    Traps,
    Count,
};


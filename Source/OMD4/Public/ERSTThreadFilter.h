#pragma once
#include "CoreMinimal.h"
#include "ERSTThreadFilter.generated.h"

UENUM(BlueprintType)
enum class ERSTThreadFilter : uint8 {
    AllThreads,
    Purchaseable,
    Unlockable,
    CanBeUnlocked,
    Owned,
    Unowned,
};


#pragma once
#include "CoreMinimal.h"
#include "ERSTEnemyTimer.generated.h"

UENUM(BlueprintType)
enum class ERSTEnemyTimer : uint8 {
    NotSet,
    Leash,
    IgnoreTarget,
};


#pragma once
#include "CoreMinimal.h"
#include "ERSTTargetingQualifier.generated.h"

UENUM(BlueprintType)
enum class ERSTTargetingQualifier : uint8 {
    NotSet,
    TargetAlways,
    TargetOnlyIfBlocked,
    TargetOnlyIfDamaged,
};


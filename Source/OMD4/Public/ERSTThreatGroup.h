#pragma once
#include "CoreMinimal.h"
#include "ERSTThreatGroup.generated.h"

UENUM(BlueprintType)
enum class ERSTThreatGroup : uint8 {
    Unassigned,
    Default,
    Large,
    Ranged,
    Hunters,
    Boss,
};


#pragma once
#include "CoreMinimal.h"
#include "ERSTAttackLocConfiguration.generated.h"

UENUM(BlueprintType)
enum class ERSTAttackLocConfiguration : uint8 {
    BoxExtents,
    Linear,
    SingleLoc,
};


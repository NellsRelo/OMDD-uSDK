#pragma once
#include "CoreMinimal.h"
#include "ETargetingTraceType.generated.h"

UENUM(BlueprintType)
enum class ETargetingTraceType : uint8 {
    Line,
    Sweep,
};


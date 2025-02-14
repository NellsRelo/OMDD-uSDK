#pragma once
#include "CoreMinimal.h"
#include "ETargetingAOEShape.generated.h"

UENUM(BlueprintType)
enum class ETargetingAOEShape : uint8 {
    Box,
    Cylinder,
    Sphere,
    Capsule,
    SourceComponent,
};


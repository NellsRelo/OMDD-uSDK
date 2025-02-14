#pragma once
#include "CoreMinimal.h"
#include "ERSTAbilityCollisionMagnitudeCalculation.generated.h"

UENUM(BlueprintType)
enum class ERSTAbilityCollisionMagnitudeCalculation : uint8 {
    ScalableFloat,
    AttributeBased,
    SetByCaller,
};


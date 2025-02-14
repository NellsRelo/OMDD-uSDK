#pragma once
#include "CoreMinimal.h"
#include "ERSTCharacterWeightClass.generated.h"

UENUM(BlueprintType)
enum class ERSTCharacterWeightClass : uint8 {
    Light,
    Heavy,
    VeryHeavy,
    Immovable,
    Max,
};


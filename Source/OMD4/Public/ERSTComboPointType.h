#pragma once
#include "CoreMinimal.h"
#include "ERSTComboPointType.generated.h"

UENUM(BlueprintType)
enum class ERSTComboPointType : uint8 {
    Damage,
    StatusEffect,
    Launched,
    Thread,
};


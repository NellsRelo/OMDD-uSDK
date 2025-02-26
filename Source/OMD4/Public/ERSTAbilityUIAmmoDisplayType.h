#pragma once
#include "CoreMinimal.h"
#include "ERSTAbilityUIAmmoDisplayType.generated.h"

UENUM(BlueprintType)
enum class ERSTAbilityUIAmmoDisplayType : uint8 {
    None,
    Ammo_Count,
    Ammo_Percent,
    Charges,
};


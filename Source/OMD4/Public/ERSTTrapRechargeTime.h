#pragma once
#include "CoreMinimal.h"
#include "ERSTTrapRechargeTime.generated.h"

UENUM(BlueprintType)
enum class ERSTTrapRechargeTime : uint8 {
    OnApplication,
    OnRemoval,
};


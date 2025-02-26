#pragma once
#include "CoreMinimal.h"
#include "ERSTTrapRechargeAmount.generated.h"

UENUM(BlueprintType)
enum class ERSTTrapRechargeAmount : uint8 {
    RechargeNone,
    RechargeAll,
    RechargeSingle,
};


#pragma once
#include "CoreMinimal.h"
#include "EKnockbackType.generated.h"

UENUM(BlueprintType)
enum class EKnockbackType : uint8 {
    None,
    Blocked,
    BlockBreak,
    Standard,
    Ragdoll,
    Parry,
};


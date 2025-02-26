#pragma once
#include "CoreMinimal.h"
#include "ERSTPlayerAttachmentEventType.generated.h"

UENUM(BlueprintType)
enum class ERSTPlayerAttachmentEventType : uint8 {
    None,
    Equipped,
    Unequipped,
    PrimaryFired,
    SecondaryFired,
    SpecialFired,
    UltimateFired,
    ChargeStarted,
    ChargeLevelIncreased,
    ChargeEnded,
    Deactivated,
    Cancelled,
    Reload,
    AmmoCountChanged,
};


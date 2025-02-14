#pragma once
#include "CoreMinimal.h"
#include "ENotifyEventType.generated.h"

UENUM(BlueprintType)
enum ENotifyEventType {
    NotifyTick,
    NotifyOnce,
    NotifyCustom,
};


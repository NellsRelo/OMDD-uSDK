#pragma once
#include "CoreMinimal.h"
#include "ERSTPlayerReadySyncBeginType.generated.h"

UENUM()
enum class ERSTPlayerReadySyncBeginType : int32 {
    Instant,
    First,
    Majority,
    All,
    Host,
};


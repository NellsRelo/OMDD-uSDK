#pragma once
#include "CoreMinimal.h"
#include "ERSTTeamThreadState.generated.h"

UENUM(BlueprintType)
enum class ERSTTeamThreadState : uint8 {
    None,
    Pending,
    Active,
    ExpirationPending,
    Expired,
};


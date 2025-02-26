#pragma once
#include "CoreMinimal.h"
#include "ERSTTransitionActionState.generated.h"

UENUM(BlueprintType)
enum class ERSTTransitionActionState : uint8 {
    None,
    PreparingResources,
    Ready,
    Active,
    PendingCleanup,
    CleaningUp,
    Done,
};


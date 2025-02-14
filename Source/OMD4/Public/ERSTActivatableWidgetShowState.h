#pragma once
#include "CoreMinimal.h"
#include "ERSTActivatableWidgetShowState.generated.h"

UENUM(BlueprintType)
enum class ERSTActivatableWidgetShowState : uint8 {
    None,
    Showing,
    Shown,
    Hiding,
    Hidden,
};


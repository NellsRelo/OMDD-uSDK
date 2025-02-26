#pragma once
#include "CoreMinimal.h"
#include "ERSTWidgetInputMode.generated.h"

UENUM(BlueprintType)
enum class ERSTWidgetInputMode : uint8 {
    GameAndMenu,
    Game,
    Menu,
    UseCurrent,
};


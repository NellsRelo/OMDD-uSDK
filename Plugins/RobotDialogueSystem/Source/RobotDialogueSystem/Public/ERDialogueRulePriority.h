#pragma once
#include "CoreMinimal.h"
#include "ERDialogueRulePriority.generated.h"

UENUM(BlueprintType)
enum class ERDialogueRulePriority : uint8 {
    Invalid,
    Low,
    Medium,
    High,
};


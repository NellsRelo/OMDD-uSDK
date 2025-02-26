#pragma once
#include "CoreMinimal.h"
#include "ERDialogueRuleAudience.generated.h"

UENUM(BlueprintType)
enum class ERDialogueRuleAudience : uint8 {
    Invalid,
    SelfOnly,
    Everyone,
};


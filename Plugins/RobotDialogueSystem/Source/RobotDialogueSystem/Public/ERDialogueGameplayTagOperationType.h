#pragma once
#include "CoreMinimal.h"
#include "ERDialogueGameplayTagOperationType.generated.h"

UENUM(BlueprintType)
enum class ERDialogueGameplayTagOperationType : uint8 {
    None,
    Add,
    Remove,
};


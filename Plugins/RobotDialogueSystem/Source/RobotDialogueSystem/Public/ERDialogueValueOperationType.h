#pragma once
#include "CoreMinimal.h"
#include "ERDialogueValueOperationType.generated.h"

UENUM(BlueprintType)
enum class ERDialogueValueOperationType : uint8 {
    None,
    Set,
    Add,
    Subtract,
};


#pragma once
#include "CoreMinimal.h"
#include "EREditorDialogueScope.generated.h"

UENUM(BlueprintType)
enum class EREditorDialogueScope : uint8 {
    None,
    Concept,
    Global,
    Local,
    Inherited,
};


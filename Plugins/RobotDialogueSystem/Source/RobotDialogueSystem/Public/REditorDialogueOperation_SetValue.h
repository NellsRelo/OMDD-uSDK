#pragma once
#include "CoreMinimal.h"
#include "REditorDialogueOperation.h"
#include "REditorDialogueOperation_SetValue.generated.h"

UCLASS(Abstract, Blueprintable)
class ROBOTDIALOGUESYSTEM_API UREditorDialogueOperation_SetValue : public UREditorDialogueOperation {
    GENERATED_BODY()
public:
    UREditorDialogueOperation_SetValue();

};


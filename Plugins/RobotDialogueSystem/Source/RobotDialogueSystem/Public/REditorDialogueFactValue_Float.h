#pragma once
#include "CoreMinimal.h"
#include "REditorDialogueFactValue_Simple.h"
#include "REditorDialogueFactValue_Float.generated.h"

UCLASS(Blueprintable)
class ROBOTDIALOGUESYSTEM_API UREditorDialogueFactValue_Float : public UREditorDialogueFactValue_Simple {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double FloatValue;
    
    UREditorDialogueFactValue_Float();

};


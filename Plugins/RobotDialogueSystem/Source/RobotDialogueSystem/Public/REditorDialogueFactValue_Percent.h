#pragma once
#include "CoreMinimal.h"
#include "REditorDialogueFactValue_Simple.h"
#include "REditorDialogueFactValue_Percent.generated.h"

UCLASS(Blueprintable)
class ROBOTDIALOGUESYSTEM_API UREditorDialogueFactValue_Percent : public UREditorDialogueFactValue_Simple {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double PercentValue;
    
    UREditorDialogueFactValue_Percent();

};


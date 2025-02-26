#pragma once
#include "CoreMinimal.h"
#include "REditorDialogueFactValue_Simple.h"
#include "REditorDialogueFactValue_Boolean.generated.h"

UCLASS(Blueprintable)
class ROBOTDIALOGUESYSTEM_API UREditorDialogueFactValue_Boolean : public UREditorDialogueFactValue_Simple {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool BooleanValue;
    
    UREditorDialogueFactValue_Boolean();

};


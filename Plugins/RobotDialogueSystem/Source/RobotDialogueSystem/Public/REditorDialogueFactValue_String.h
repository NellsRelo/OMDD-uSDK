#pragma once
#include "CoreMinimal.h"
#include "REditorDialogueFactValue_Simple.h"
#include "REditorDialogueFactValue_String.generated.h"

UCLASS(Blueprintable)
class ROBOTDIALOGUESYSTEM_API UREditorDialogueFactValue_String : public UREditorDialogueFactValue_Simple {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StringValue;
    
    UREditorDialogueFactValue_String();

};


#pragma once
#include "CoreMinimal.h"
#include "REditorDialogueFactValue_Simple.h"
#include "REditorDialogueFactValue_Integer.generated.h"

UCLASS(Blueprintable)
class ROBOTDIALOGUESYSTEM_API UREditorDialogueFactValue_Integer : public UREditorDialogueFactValue_Simple {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 IntegerValue;
    
    UREditorDialogueFactValue_Integer();

};


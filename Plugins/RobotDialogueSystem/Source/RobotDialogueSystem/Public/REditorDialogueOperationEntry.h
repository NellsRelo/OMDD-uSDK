#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Templates/SubclassOf.h"
#include "REditorDialogueOperationEntry.generated.h"

class UREditorDialogueFactValue;
class UREditorDialogueOperation;

UCLASS(Blueprintable)
class ROBOTDIALOGUESYSTEM_API UREditorDialogueOperationEntry : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FactName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UREditorDialogueOperation> OperationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UREditorDialogueFactValue* FactValue;
    
    UREditorDialogueOperationEntry();

};


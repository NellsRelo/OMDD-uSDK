#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Templates/SubclassOf.h"
#include "REditorDialogueCriterionEntry.generated.h"

class UREditorDialogueFactValue;
class UREditorDialogueOperator;

UCLASS(Blueprintable)
class ROBOTDIALOGUESYSTEM_API UREditorDialogueCriterionEntry : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FactName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UREditorDialogueOperator> OperatorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UREditorDialogueFactValue* Operand;
    
    UREditorDialogueCriterionEntry();

};


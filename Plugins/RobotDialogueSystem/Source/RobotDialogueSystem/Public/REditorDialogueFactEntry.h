#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "REditorDialogueFactEntry.generated.h"

class UREditorDialogueFactValue;

UCLASS(Blueprintable)
class ROBOTDIALOGUESYSTEM_API UREditorDialogueFactEntry : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FactName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UREditorDialogueFactValue* FactValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Comment;
    
    UREditorDialogueFactEntry();

};


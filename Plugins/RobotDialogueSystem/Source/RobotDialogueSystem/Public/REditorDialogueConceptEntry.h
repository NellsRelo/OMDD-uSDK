#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UREditorDialogueConceptSource.h"
#include "REditorDialogueConceptEntry.generated.h"

class UREditorDialogueFactEntry;

UCLASS(Blueprintable)
class ROBOTDIALOGUESYSTEM_API UREditorDialogueConceptEntry : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ConceptName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UREditorDialogueFactEntry*> Facts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Comment;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UREditorDialogueConceptSource Source;
    
    UREditorDialogueConceptEntry();

};


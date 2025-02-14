#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EditorDialogueFollowUpDefinition.generated.h"

UCLASS(Blueprintable)
class ROBOTDIALOGUESYSTEM_API UEditorDialogueFollowUpDefinition : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ConceptName;
    
    UEditorDialogueFollowUpDefinition();

};


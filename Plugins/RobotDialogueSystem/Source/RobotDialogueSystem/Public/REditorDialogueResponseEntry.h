#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "REditorDialogueResponseEntry.generated.h"

class UEditorDialogueFollowUpDefinition;
class USoundBase;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ROBOTDIALOGUESYSTEM_API UREditorDialogueResponseEntry : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* SoundToPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEditorDialogueFollowUpDefinition* FollowUp;
    
    UREditorDialogueResponseEntry();

};


#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "REditorDialogueFactValue.h"
#include "REditorDialogueFactValue_GameplayTag.generated.h"

UCLASS(Blueprintable)
class ROBOTDIALOGUESYSTEM_API UREditorDialogueFactValue_GameplayTag : public UREditorDialogueFactValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer GameplayTagsValue;
    
    UREditorDialogueFactValue_GameplayTag();

};


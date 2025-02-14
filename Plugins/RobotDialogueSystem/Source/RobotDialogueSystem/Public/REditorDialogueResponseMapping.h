#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "REditorDialogueResponseMapping.generated.h"

class UREditorDialogueResponseEntry;

UCLASS(Blueprintable)
class ROBOTDIALOGUESYSTEM_API UREditorDialogueResponseMapping : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid RuleId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UREditorDialogueResponseEntry*> Responses;
    
    UREditorDialogueResponseMapping();

};


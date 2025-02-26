#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "RDialogueRuleProperties.h"
#include "REditorDialogueRuleEntry.generated.h"

class UREditorDialogueCriterionEntry;
class UREditorDialogueOperationEntry;

UCLASS(Blueprintable)
class ROBOTDIALOGUESYSTEM_API UREditorDialogueRuleEntry : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid RuleId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RuleName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ConceptName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UREditorDialogueCriterionEntry*> Criteria;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UREditorDialogueOperationEntry*> Operations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRDialogueRuleProperties Properties;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Chance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnce;
    
    UREditorDialogueRuleEntry();

};


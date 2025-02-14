#pragma once
#include "CoreMinimal.h"
#include "RDialogueRule.h"
#include "RDialogueRuleList.generated.h"

USTRUCT(BlueprintType)
struct FRDialogueRuleList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRDialogueRule> Rules;
    
    ROBOTDIALOGUESYSTEM_API FRDialogueRuleList();
};


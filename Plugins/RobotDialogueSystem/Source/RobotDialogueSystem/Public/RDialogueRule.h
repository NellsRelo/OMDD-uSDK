#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "RDialogueCriterion.h"
#include "RDialogueGameplayTagOperation.h"
#include "RDialogueResponse.h"
#include "RDialogueRuleProperties.h"
#include "RDialogueValueOperation.h"
#include "RDialogueRule.generated.h"

USTRUCT(BlueprintType)
struct ROBOTDIALOGUESYSTEM_API FRDialogueRule {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid RuleId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RuleName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FRDialogueCriterion> Criteria;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FGameplayTagQuery> GameplayTagQueries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRDialogueResponse> Responses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRDialogueValueOperation> ValueOperations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRDialogueGameplayTagOperation> GameplayTagOperations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRDialogueRuleProperties Properties;
    
public:
    FRDialogueRule();
};


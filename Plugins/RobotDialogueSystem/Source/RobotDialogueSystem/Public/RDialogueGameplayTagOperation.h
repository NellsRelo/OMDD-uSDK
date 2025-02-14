#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ERDialogueGameplayTagOperationType.h"
#include "RDialogueGameplayTagOperation.generated.h"

USTRUCT(BlueprintType)
struct ROBOTDIALOGUESYSTEM_API FRDialogueGameplayTagOperation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FactName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERDialogueGameplayTagOperationType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer GameplayTags;
    
    FRDialogueGameplayTagOperation();
};


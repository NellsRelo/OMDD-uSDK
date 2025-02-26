#pragma once
#include "CoreMinimal.h"
#include "ERDialogueValueOperationType.h"
#include "RDialogueFactValue.h"
#include "RDialogueValueOperation.generated.h"

USTRUCT(BlueprintType)
struct ROBOTDIALOGUESYSTEM_API FRDialogueValueOperation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FactName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERDialogueValueOperationType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRDialogueFactValue Value;
    
    FRDialogueValueOperation();
};


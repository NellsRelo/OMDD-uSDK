#pragma once
#include "CoreMinimal.h"
#include "RDialogueFactValue.h"
#include "RDialogueCriterion.generated.h"

USTRUCT(BlueprintType)
struct ROBOTDIALOGUESYSTEM_API FRDialogueCriterion {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRDialogueFactValue Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRDialogueFactValue Max;
    
public:
    FRDialogueCriterion();
};


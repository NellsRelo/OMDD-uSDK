#pragma once
#include "CoreMinimal.h"
#include "RSTMilestoneOperationBase.h"
#include "RSTMilestoneOperationNested.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class OMD4_API URSTMilestoneOperationNested : public URSTMilestoneOperationBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<URSTMilestoneOperationBase*> Operations;
    
    URSTMilestoneOperationNested();

};


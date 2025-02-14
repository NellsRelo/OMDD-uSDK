#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RSTMilestoneOperationBase.generated.h"

class URSTPlayerProfile;

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class OMD4_API URSTMilestoneOperationBase : public UObject {
    GENERATED_BODY()
public:
    URSTMilestoneOperationBase();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTarget(const URSTPlayerProfile* Profile) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetProgress(const URSTPlayerProfile* Profile) const;
    
};


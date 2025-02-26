#pragma once
#include "CoreMinimal.h"
#include "RSTMilestoneOperationBase.h"
#include "RSTMilestoneOperationCustom.generated.h"

class URSTPlayerProfile;

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class OMD4_API URSTMilestoneOperationCustom : public URSTMilestoneOperationBase {
    GENERATED_BODY()
public:
    URSTMilestoneOperationCustom();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BP_ShouldDisplayProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 BP_GetTarget(const URSTPlayerProfile* Profile) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 BP_GetProgress(const URSTPlayerProfile* Profile) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BP_EvaluateMilestone(const URSTPlayerProfile* Profile) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 BP_DebugCompleteProgress(URSTPlayerProfile* Profile) const;
    
};


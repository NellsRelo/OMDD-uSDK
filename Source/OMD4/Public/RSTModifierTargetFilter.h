#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RSTModifierSpec.h"
#include "RSTModifierTargetFilter.generated.h"

class URSTModifierComponent;

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class URSTModifierTargetFilter : public UObject {
    GENERATED_BODY()
public:
    URSTModifierTargetFilter();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BP_ShouldApplyModifier(const URSTModifierComponent* OwningComponent, FRSTModifierSpec Spec) const;
    
};


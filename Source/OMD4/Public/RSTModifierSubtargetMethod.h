#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RSTModifierSubtargetMethod.generated.h"

class URSTModifierComponent;

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class URSTModifierSubtargetMethod : public UObject {
    GENERATED_BODY()
public:
    URSTModifierSubtargetMethod();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BP_ShouldTarget(const UObject* PotentialTarget) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<UObject*> BP_GetTargets(const URSTModifierComponent* OwningComponent, const TArray<UObject*>& TargetObjects) const;
    
};


#pragma once
#include "CoreMinimal.h"
#include "RSTPropertyModifierCustomValueGetter.h"
#include "RSTPropertyModifierCustomValue_Float.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class URSTPropertyModifierCustomValue_Float : public URSTPropertyModifierCustomValueGetter {
    GENERATED_BODY()
public:
    URSTPropertyModifierCustomValue_Float();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool K2_CalculateValue(float& OutVal) const;
    
};


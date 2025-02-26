#pragma once
#include "CoreMinimal.h"
#include "RSTPropertyModifierCustomValueGetter.h"
#include "RSTTrapDiscount.h"
#include "RSTPropertyModifierCustomValue_TrapDiscount.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class URSTPropertyModifierCustomValue_TrapDiscount : public URSTPropertyModifierCustomValueGetter {
    GENERATED_BODY()
public:
    URSTPropertyModifierCustomValue_TrapDiscount();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool K2_CalculateValue(FRSTTrapDiscount& OutVal) const;
    
};


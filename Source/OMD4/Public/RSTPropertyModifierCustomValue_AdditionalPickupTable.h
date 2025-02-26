#pragma once
#include "CoreMinimal.h"
#include "RSTAdditionalPickupTable.h"
#include "RSTPropertyModifierCustomValueGetter.h"
#include "RSTPropertyModifierCustomValue_AdditionalPickupTable.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class URSTPropertyModifierCustomValue_AdditionalPickupTable : public URSTPropertyModifierCustomValueGetter {
    GENERATED_BODY()
public:
    URSTPropertyModifierCustomValue_AdditionalPickupTable();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool K2_CalculateValue(FRSTAdditionalPickupTable& OutVal) const;
    
};


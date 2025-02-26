#pragma once
#include "CoreMinimal.h"
#include "RSTEnumField.h"
#include "RSTPropertyModifierCustomValueGetter.h"
#include "RSTPropertyModifierCustomValue_EnumField.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class URSTPropertyModifierCustomValue_EnumField : public URSTPropertyModifierCustomValueGetter {
    GENERATED_BODY()
public:
    URSTPropertyModifierCustomValue_EnumField();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool K2_CalculateValue(FRSTEnumField& OutVal) const;
    
};


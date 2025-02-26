#pragma once
#include "CoreMinimal.h"
#include "RSTActiveSubobjectAbility.h"
#include "RSTPropertyModifierCustomValueGetter.h"
#include "RSTPropertyModifierCustomValue_ActiveSubobjectAbility.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class URSTPropertyModifierCustomValue_ActiveSubobjectAbility : public URSTPropertyModifierCustomValueGetter {
    GENERATED_BODY()
public:
    URSTPropertyModifierCustomValue_ActiveSubobjectAbility();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool K2_CalculateValue(FRSTActiveSubobjectAbility& OutVal) const;
    
};


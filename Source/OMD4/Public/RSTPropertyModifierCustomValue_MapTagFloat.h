#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RSTPropertyModifierCustomValueGetter.h"
#include "RSTPropertyModifierCustomValue_MapTagFloat.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class URSTPropertyModifierCustomValue_MapTagFloat : public URSTPropertyModifierCustomValueGetter {
    GENERATED_BODY()
public:
    URSTPropertyModifierCustomValue_MapTagFloat();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool K2_CalculateValue(TMap<FGameplayTag, float>& OutVal) const;
    
};


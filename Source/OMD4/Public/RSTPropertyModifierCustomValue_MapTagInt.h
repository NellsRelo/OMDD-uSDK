#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RSTPropertyModifierCustomValueGetter.h"
#include "RSTPropertyModifierCustomValue_MapTagInt.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class URSTPropertyModifierCustomValue_MapTagInt : public URSTPropertyModifierCustomValueGetter {
    GENERATED_BODY()
public:
    URSTPropertyModifierCustomValue_MapTagInt();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool K2_CalculateValue(TMap<FGameplayTag, int32>& OutVal) const;
    
};


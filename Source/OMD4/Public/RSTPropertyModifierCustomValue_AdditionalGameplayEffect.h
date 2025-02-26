#pragma once
#include "CoreMinimal.h"
#include "RSTAdditionalGameplayEffectData.h"
#include "RSTPropertyModifierCustomValueGetter.h"
#include "RSTPropertyModifierCustomValue_AdditionalGameplayEffect.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class URSTPropertyModifierCustomValue_AdditionalGameplayEffect : public URSTPropertyModifierCustomValueGetter {
    GENERATED_BODY()
public:
    URSTPropertyModifierCustomValue_AdditionalGameplayEffect();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool K2_CalculateValue(FRSTAdditionalGameplayEffectData& OutVal) const;
    
};


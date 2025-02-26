#pragma once
#include "CoreMinimal.h"
#include "RSTPropertyModifierCustomValueGetter.h"
#include "Templates/SubclassOf.h"
#include "RSTPropertyModifierCustomValue_GameplayEffect.generated.h"

class UGameplayEffect;

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class URSTPropertyModifierCustomValue_GameplayEffect : public URSTPropertyModifierCustomValueGetter {
    GENERATED_BODY()
public:
    URSTPropertyModifierCustomValue_GameplayEffect();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool K2_CalculateValue(TSubclassOf<UGameplayEffect>& OutVal) const;
    
};


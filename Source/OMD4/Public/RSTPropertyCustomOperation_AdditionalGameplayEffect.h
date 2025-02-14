#pragma once
#include "CoreMinimal.h"
#include "RSTAdditionalGameplayEffectData.h"
#include "RSTPropertyCustomOperation.h"
#include "RSTPropertyCustomOperation_AdditionalGameplayEffect.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class URSTPropertyCustomOperation_AdditionalGameplayEffect : public URSTPropertyCustomOperation {
    GENERATED_BODY()
public:
    URSTPropertyCustomOperation_AdditionalGameplayEffect();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FRSTAdditionalGameplayEffectData K2_GetCustomValue(const FRSTAdditionalGameplayEffectData& Val) const;
    
};


#pragma once
#include "CoreMinimal.h"
#include "RSTAdditionalGameplayEffectData.h"
#include "RSTPropertyCustomOperation.h"
#include "RSTPropertyCustomOperation_AdditionalGameplayEffectArray.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class URSTPropertyCustomOperation_AdditionalGameplayEffectArray : public URSTPropertyCustomOperation {
    GENERATED_BODY()
public:
    URSTPropertyCustomOperation_AdditionalGameplayEffectArray();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FRSTAdditionalGameplayEffectData> K2_GetCustomValue(const TArray<FRSTAdditionalGameplayEffectData>& InVal) const;
    
};


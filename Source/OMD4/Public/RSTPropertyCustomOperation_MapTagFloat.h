#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RSTPropertyCustomOperation.h"
#include "RSTPropertyCustomOperation_MapTagFloat.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class URSTPropertyCustomOperation_MapTagFloat : public URSTPropertyCustomOperation {
    GENERATED_BODY()
public:
    URSTPropertyCustomOperation_MapTagFloat();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TMap<FGameplayTag, float> K2_GetCustomValue(const TMap<FGameplayTag, float>& Val) const;
    
};


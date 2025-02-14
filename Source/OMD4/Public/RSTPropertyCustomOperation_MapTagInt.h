#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RSTPropertyCustomOperation.h"
#include "RSTPropertyCustomOperation_MapTagInt.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class URSTPropertyCustomOperation_MapTagInt : public URSTPropertyCustomOperation {
    GENERATED_BODY()
public:
    URSTPropertyCustomOperation_MapTagInt();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TMap<FGameplayTag, int32> K2_GetCustomValue(const TMap<FGameplayTag, int32>& Val) const;
    
};


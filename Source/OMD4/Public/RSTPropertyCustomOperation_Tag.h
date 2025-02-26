#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RSTPropertyCustomOperation.h"
#include "RSTPropertyCustomOperation_Tag.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class URSTPropertyCustomOperation_Tag : public URSTPropertyCustomOperation {
    GENERATED_BODY()
public:
    URSTPropertyCustomOperation_Tag();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FGameplayTag K2_GetCustomValue(const FGameplayTag& Val) const;
    
};


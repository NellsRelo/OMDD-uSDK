#pragma once
#include "CoreMinimal.h"
#include "RSTPropertyCustomOperation.h"
#include "RSTPropertyCustomOperation_Float.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class URSTPropertyCustomOperation_Float : public URSTPropertyCustomOperation {
    GENERATED_BODY()
public:
    URSTPropertyCustomOperation_Float();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float K2_GetCustomValue(const float& Val) const;
    
};


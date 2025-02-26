#pragma once
#include "CoreMinimal.h"
#include "RSTFloatRange.h"
#include "RSTPropertyCustomOperation.h"
#include "RSTPropertyCustomOperation_FloatRange.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class URSTPropertyCustomOperation_FloatRange : public URSTPropertyCustomOperation {
    GENERATED_BODY()
public:
    URSTPropertyCustomOperation_FloatRange();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FRSTFloatRange K2_GetCustomValue(const FRSTFloatRange& Val) const;
    
};


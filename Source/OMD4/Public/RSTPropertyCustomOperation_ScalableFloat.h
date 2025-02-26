#pragma once
#include "CoreMinimal.h"
#include "ScalableFloat.h"
#include "RSTPropertyCustomOperation.h"
#include "RSTPropertyCustomOperation_ScalableFloat.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class URSTPropertyCustomOperation_ScalableFloat : public URSTPropertyCustomOperation {
    GENERATED_BODY()
public:
    URSTPropertyCustomOperation_ScalableFloat();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FScalableFloat K2_GetCustomValue(const FScalableFloat& Val) const;
    
};


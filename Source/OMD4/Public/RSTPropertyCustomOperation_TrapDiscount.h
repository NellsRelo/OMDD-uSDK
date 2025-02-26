#pragma once
#include "CoreMinimal.h"
#include "RSTPropertyCustomOperation.h"
#include "RSTTrapDiscount.h"
#include "RSTPropertyCustomOperation_TrapDiscount.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class URSTPropertyCustomOperation_TrapDiscount : public URSTPropertyCustomOperation {
    GENERATED_BODY()
public:
    URSTPropertyCustomOperation_TrapDiscount();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FRSTTrapDiscount K2_GetCustomValue(const FRSTTrapDiscount& Val) const;
    
};


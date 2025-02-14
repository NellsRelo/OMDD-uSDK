#pragma once
#include "CoreMinimal.h"
#include "RSTPropertyCustomOperation.h"
#include "RSTPropertyCustomOperation_Bool.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class URSTPropertyCustomOperation_Bool : public URSTPropertyCustomOperation {
    GENERATED_BODY()
public:
    URSTPropertyCustomOperation_Bool();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool K2_GetCustomValue(bool Val) const;
    
};


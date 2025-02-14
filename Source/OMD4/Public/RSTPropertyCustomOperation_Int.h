#pragma once
#include "CoreMinimal.h"
#include "RSTPropertyCustomOperation.h"
#include "RSTPropertyCustomOperation_Int.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class URSTPropertyCustomOperation_Int : public URSTPropertyCustomOperation {
    GENERATED_BODY()
public:
    URSTPropertyCustomOperation_Int();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 K2_GetCustomValue(int32 Val) const;
    
};


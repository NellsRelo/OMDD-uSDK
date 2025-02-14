#pragma once
#include "CoreMinimal.h"
#include "RSTAdditionalPickupTable.h"
#include "RSTPropertyCustomOperation.h"
#include "RSTPropertyCustomOperation_AdditionalPickupTable.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class URSTPropertyCustomOperation_AdditionalPickupTable : public URSTPropertyCustomOperation {
    GENERATED_BODY()
public:
    URSTPropertyCustomOperation_AdditionalPickupTable();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FRSTAdditionalPickupTable K2_GetCustomValue(const FRSTAdditionalPickupTable& Val) const;
    
};


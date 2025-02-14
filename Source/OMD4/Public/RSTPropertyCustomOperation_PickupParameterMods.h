#pragma once
#include "CoreMinimal.h"
#include "RSTPickupParameterMods.h"
#include "RSTPropertyCustomOperation.h"
#include "RSTPropertyCustomOperation_PickupParameterMods.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class URSTPropertyCustomOperation_PickupParameterMods : public URSTPropertyCustomOperation {
    GENERATED_BODY()
public:
    URSTPropertyCustomOperation_PickupParameterMods();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FRSTPickupParameterMods K2_GetCustomValue(const FRSTPickupParameterMods& Val) const;
    
};


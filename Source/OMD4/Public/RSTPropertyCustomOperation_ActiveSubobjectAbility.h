#pragma once
#include "CoreMinimal.h"
#include "RSTActiveSubobjectAbility.h"
#include "RSTPropertyCustomOperation.h"
#include "RSTPropertyCustomOperation_ActiveSubobjectAbility.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class URSTPropertyCustomOperation_ActiveSubobjectAbility : public URSTPropertyCustomOperation {
    GENERATED_BODY()
public:
    URSTPropertyCustomOperation_ActiveSubobjectAbility();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FRSTActiveSubobjectAbility K2_GetCustomValue(const FRSTActiveSubobjectAbility& Val) const;
    
};


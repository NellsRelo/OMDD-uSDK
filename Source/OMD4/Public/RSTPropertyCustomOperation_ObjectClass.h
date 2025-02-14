#pragma once
#include "CoreMinimal.h"
#include "RSTPropertyCustomOperation.h"
#include "RSTPropertyCustomOperation_ObjectClass.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class URSTPropertyCustomOperation_ObjectClass : public URSTPropertyCustomOperation {
    GENERATED_BODY()
public:
    URSTPropertyCustomOperation_ObjectClass();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UClass* K2_GetCustomValue(UClass* InVal) const;
    
};


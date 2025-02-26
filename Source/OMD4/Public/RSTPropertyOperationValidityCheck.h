#pragma once
#include "CoreMinimal.h"
#include "RSTPropertyModifierCustomLogicBase.h"
#include "RSTPropertyOperationValidityCheck.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class URSTPropertyOperationValidityCheck : public URSTPropertyModifierCustomLogicBase {
    GENERATED_BODY()
public:
    URSTPropertyOperationValidityCheck();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool K2_IsModifierValid() const;
    
};


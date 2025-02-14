#pragma once
#include "CoreMinimal.h"
#include "RSTPropertyModifierCustomLogicBase.h"
#include "RSTPropertyCustomOperation.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class URSTPropertyCustomOperation : public URSTPropertyModifierCustomLogicBase {
    GENERATED_BODY()
public:
    URSTPropertyCustomOperation();

};


#pragma once
#include "CoreMinimal.h"
#include "RSTPropertyModifierCustomLogicBase.h"
#include "RSTPropertyModifierCustomValueGetter.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class URSTPropertyModifierCustomValueGetter : public URSTPropertyModifierCustomLogicBase {
    GENERATED_BODY()
public:
    URSTPropertyModifierCustomValueGetter();

};


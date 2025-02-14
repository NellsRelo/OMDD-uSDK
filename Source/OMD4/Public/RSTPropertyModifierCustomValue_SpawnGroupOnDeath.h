#pragma once
#include "CoreMinimal.h"
#include "RSTPropertyModifierCustomValueGetter.h"
#include "RSTSpawnGroupOnDeathParameters.h"
#include "RSTPropertyModifierCustomValue_SpawnGroupOnDeath.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class URSTPropertyModifierCustomValue_SpawnGroupOnDeath : public URSTPropertyModifierCustomValueGetter {
    GENERATED_BODY()
public:
    URSTPropertyModifierCustomValue_SpawnGroupOnDeath();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool K2_CalculateValue(FRSTSpawnGroupOnDeathParameters& OutVal) const;
    
};


#pragma once
#include "CoreMinimal.h"
#include "RSTPropertyModifierCustomValueGetter.h"
#include "Templates/SubclassOf.h"
#include "RSTPropertyModifierCustomValue_ProjectileClass.generated.h"

class ARSTProjectile;

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class URSTPropertyModifierCustomValue_ProjectileClass : public URSTPropertyModifierCustomValueGetter {
    GENERATED_BODY()
public:
    URSTPropertyModifierCustomValue_ProjectileClass();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool K2_CalculateValue(TSubclassOf<ARSTProjectile>& OutVal) const;
    
};


#pragma once
#include "CoreMinimal.h"
#include "RSTPropertyCustomOperation.h"
#include "Templates/SubclassOf.h"
#include "RSTPropertyCustomOperation_ProjectileClass.generated.h"

class ARSTProjectile;

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class URSTPropertyCustomOperation_ProjectileClass : public URSTPropertyCustomOperation {
    GENERATED_BODY()
public:
    URSTPropertyCustomOperation_ProjectileClass();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TSubclassOf<ARSTProjectile> K2_GetCustomValue(TSubclassOf<ARSTProjectile> Val) const;
    
};


#pragma once
#include "CoreMinimal.h"
#include "RSTPropertyCustomOperation.h"
#include "RSTSpawnGroupOnDeathParameters.h"
#include "RSTPropertyCustomOperation_SpawnGroupOnDeath.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class URSTPropertyCustomOperation_SpawnGroupOnDeath : public URSTPropertyCustomOperation {
    GENERATED_BODY()
public:
    URSTPropertyCustomOperation_SpawnGroupOnDeath();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FRSTSpawnGroupOnDeathParameters K2_GetCustomValue(const FRSTSpawnGroupOnDeathParameters& Val) const;
    
};


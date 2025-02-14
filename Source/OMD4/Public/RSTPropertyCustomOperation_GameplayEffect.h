#pragma once
#include "CoreMinimal.h"
#include "RSTPropertyCustomOperation.h"
#include "Templates/SubclassOf.h"
#include "RSTPropertyCustomOperation_GameplayEffect.generated.h"

class UGameplayEffect;

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class URSTPropertyCustomOperation_GameplayEffect : public URSTPropertyCustomOperation {
    GENERATED_BODY()
public:
    URSTPropertyCustomOperation_GameplayEffect();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TSubclassOf<UGameplayEffect> K2_GetCustomValue(TSubclassOf<UGameplayEffect> Val) const;
    
};


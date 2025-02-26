#pragma once
#include "CoreMinimal.h"
#include "RSTGameplayAbility_CombatBase.h"
#include "RSTGameplayAbility_AICollection.generated.h"

UCLASS(Blueprintable)
class OMD4_API URSTGameplayAbility_AICollection : public URSTGameplayAbility_CombatBase {
    GENERATED_BODY()
public:
    URSTGameplayAbility_AICollection();

    UFUNCTION(BlueprintCallable)
    void StopAICollection();
    
    UFUNCTION(BlueprintCallable)
    void StartAICollection();
    
};


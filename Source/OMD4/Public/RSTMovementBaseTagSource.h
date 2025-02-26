#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GameplayTagContainer.h"
#include "RSTMovementBaseTagSource.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class URSTMovementBaseTagSource : public UInterface {
    GENERATED_BODY()
};

class IRSTMovementBaseTagSource : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FGameplayTag GetMovementBaseTag() const;
    
};


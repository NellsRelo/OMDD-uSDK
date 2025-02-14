#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "RSTExternalInputAbility.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class URSTExternalInputAbility : public UInterface {
    GENERATED_BODY()
};

class IRSTExternalInputAbility : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInputUp();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInputDown();
    
};


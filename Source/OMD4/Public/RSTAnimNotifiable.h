#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GameplayTagContainer.h"
#include "RSTAnimNotifiable.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class URSTAnimNotifiable : public UInterface {
    GENERATED_BODY()
};

class IRSTAnimNotifiable : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ProcessNotify(const FGameplayTag& Tag);
    
};


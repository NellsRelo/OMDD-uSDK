#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "RSTPingableInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class URSTPingableInterface : public UInterface {
    GENERATED_BODY()
};

class IRSTPingableInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FText GetPingDisplayName() const;
    
};


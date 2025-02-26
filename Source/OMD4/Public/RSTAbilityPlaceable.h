#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "RSTAbilityPlaceable.generated.h"

class UPrimitiveComponent;

UINTERFACE(Blueprintable, MinimalAPI)
class URSTAbilityPlaceable : public UInterface {
    GENERATED_BODY()
};

class IRSTAbilityPlaceable : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UPrimitiveComponent* GetCollisionComponent() const;
    
};


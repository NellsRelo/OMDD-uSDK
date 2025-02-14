#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "RSTDamageModifiable.generated.h"

class URSTDamageModifierComponent;

UINTERFACE(Blueprintable, MinimalAPI)
class URSTDamageModifiable : public UInterface {
    GENERATED_BODY()
};

class IRSTDamageModifiable : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    URSTDamageModifierComponent* GetDamageModifierComponent() const;
    
};


#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GameplayTagContainer.h"
#include "RSTTrapCooldownModifierInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class URSTTrapCooldownModifierInterface : public UInterface {
    GENERATED_BODY()
};

class IRSTTrapCooldownModifierInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsCooldownModifierActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float HandleCooldownModification(float InBaseDuration);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FGameplayTag GetCooldownModifierIdentifier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanCooldownModifierStack() const;
    
};


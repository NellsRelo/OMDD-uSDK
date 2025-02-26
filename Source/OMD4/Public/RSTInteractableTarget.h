#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "RSTInteractableTarget.generated.h"

class AActor;

UINTERFACE(BlueprintType, MinimalAPI, meta=(CannotImplementInterfaceInBlueprint))
class URSTInteractableTarget : public UInterface {
    GENERATED_BODY()
};

class IRSTInteractableTarget : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual void StopInteraction(AActor* InteractingActor) PURE_VIRTUAL(StopInteraction,);
    
};


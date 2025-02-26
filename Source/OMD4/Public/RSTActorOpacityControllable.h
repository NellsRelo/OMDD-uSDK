#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "RSTActorOpacityControllable.generated.h"

class UFXSystemComponent;
class UMeshComponent;
class URSTActorOpacityComponent;

UINTERFACE(Blueprintable, MinimalAPI)
class URSTActorOpacityControllable : public UInterface {
    GENERATED_BODY()
};

class IRSTActorOpacityControllable : public IInterface {
    GENERATED_BODY()
public:
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TriggerMeshesChangedCallback();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetOpacityControlledMeshes(TArray<UMeshComponent*>& OutObscureMeshes) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetOpacityControlledFXSystems(TArray<UFXSystemComponent*>& OutObscureFXSystems) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    URSTActorOpacityComponent* GetActorOpacityComponent() const;
    
};


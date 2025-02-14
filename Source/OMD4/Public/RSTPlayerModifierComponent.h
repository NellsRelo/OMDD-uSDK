#pragma once
#include "CoreMinimal.h"
#include "RSTModifierComponent.h"
#include "RSTPlayerModifierComponent.generated.h"

class APawn;
class APlayerState;
class ARSTPlayerState;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OMD4_API URSTPlayerModifierComponent : public URSTModifierComponent {
    GENERATED_BODY()
public:
    URSTPlayerModifierComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnUniqueNetIdSet();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnSeamlessTravelHandled();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPawnSet(APlayerState* PlayerState, APawn* NewPawn, APawn* OldPawn);
    
    UFUNCTION(BlueprintCallable)
    void OnPawnDefinitionChanged(ARSTPlayerState* RSTPlayerState);
    
};


#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RSTPlacementPreview.generated.h"

UCLASS(Abstract, Blueprintable)
class OMD4_API ARSTPlacementPreview : public AActor {
    GENERATED_BODY()
public:
    ARSTPlacementPreview(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetValidPlacement(bool bIsValid);
    
};


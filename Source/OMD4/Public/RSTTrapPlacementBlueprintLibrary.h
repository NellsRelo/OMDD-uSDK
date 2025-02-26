#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RSTTrapPlacementBlueprintLibrary.generated.h"

class APawn;
class URSTTrapPlacementComponent;

UCLASS(Blueprintable)
class OMD4_API URSTTrapPlacementBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URSTTrapPlacementBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static URSTTrapPlacementComponent* GetTrapPlacementComponent(APawn* Pawn);
    
};


#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RSTHotbarBlueprintLibrary.generated.h"

class AActor;
class URSTHotbarComponent;

UCLASS(Blueprintable)
class OMD4_API URSTHotbarBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URSTHotbarBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static URSTHotbarComponent* GetHotbarComponent(AActor* Actor);
    
};


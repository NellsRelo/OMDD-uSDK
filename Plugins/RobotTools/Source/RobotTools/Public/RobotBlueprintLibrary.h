#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "RobotBlueprintLibrary.generated.h"

UCLASS(Blueprintable)
class ROBOTTOOLS_API URobotBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URobotBlueprintLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool DoesNotHaveAll_TagContainerTagContainer(FGameplayTagContainer A, FGameplayTagContainer B);
    
};


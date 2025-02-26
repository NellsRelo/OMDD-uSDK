#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "RSTHubSpawnerCoordinator.generated.h"

class APawn;

UCLASS(Blueprintable)
class OMD4_API ARSTHubSpawnerCoordinator : public AActor {
    GENERATED_BODY()
public:
    ARSTHubSpawnerCoordinator(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<APawn*> GetAllPawnsWithTags(const FGameplayTagContainer& TargetIncludeFilterTags, bool bTargetIncludeAnyFilterTags, const FGameplayTagContainer& TargetIgnoreFilterTags);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<APawn*> BP_GetConsiderPawns() const;
    
};


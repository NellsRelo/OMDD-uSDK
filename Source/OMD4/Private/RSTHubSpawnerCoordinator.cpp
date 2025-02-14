#include "RSTHubSpawnerCoordinator.h"

ARSTHubSpawnerCoordinator::ARSTHubSpawnerCoordinator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

TArray<APawn*> ARSTHubSpawnerCoordinator::GetAllPawnsWithTags(const FGameplayTagContainer& TargetIncludeFilterTags, bool bTargetIncludeAnyFilterTags, const FGameplayTagContainer& TargetIgnoreFilterTags) {
    return TArray<APawn*>();
}




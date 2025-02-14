#include "AsyncAction_PerformTargeting.h"

UAsyncAction_PerformTargeting::UAsyncAction_PerformTargeting() {
    this->TargetingPreset = NULL;
    this->bUseAsyncTargeting = false;
}

UAsyncAction_PerformTargeting* UAsyncAction_PerformTargeting::PerformTargetingRequest(AActor* SourceActor, UTargetingPreset* NewTargetingPreset, bool NewBUseAsyncTargeting) {
    return NULL;
}

UAsyncAction_PerformTargeting* UAsyncAction_PerformTargeting::PerformFilteringRequest(AActor* SourceActor, UTargetingPreset* NewTargetingPreset, bool NewBUseAsyncTargeting, const TArray<AActor*> InTargets) {
    return NULL;
}

FTargetingRequestHandle UAsyncAction_PerformTargeting::GetTargetingHandle() const {
    return FTargetingRequestHandle{};
}



#include "TargetingSubsystem.h"

UTargetingSubsystem::UTargetingSubsystem() {
}

FTargetingRequestHandle UTargetingSubsystem::StartAsyncTargetingRequest(const UTargetingPreset* TargetingPreset, const FTargetingSourceContext& InSourceContext, FTargetingRequestDynamicDelegate CompletionDynamicDelegate) {
    return FTargetingRequestHandle{};
}

void UTargetingSubsystem::RemoveAsyncTargetingRequestWithHandle(FTargetingRequestHandle& TargetingHandle) {
}

void UTargetingSubsystem::OverrideCollisionQueryTaskData(FTargetingRequestHandle TargetingHandle, const FCollisionQueryTaskData& CollisionQueryDataOverride) {
}

FTargetingSourceContext UTargetingSubsystem::GetTargetingSourceContext(FTargetingRequestHandle TargetingHandle) const {
    return FTargetingSourceContext{};
}

void UTargetingSubsystem::GetTargetingResultsActors(FTargetingRequestHandle TargetingHandle, TArray<AActor*>& Targets) const {
}

void UTargetingSubsystem::GetTargetingResults(FTargetingRequestHandle TargetingHandle, TArray<FHitResult>& OutTargets) const {
}

void UTargetingSubsystem::ExecuteTargetingRequest(const UTargetingPreset* TargetingPreset, const FTargetingSourceContext& InSourceContext, FTargetingRequestDynamicDelegate CompletionDynamicDelegate) {
}



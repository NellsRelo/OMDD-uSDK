#include "TargetingSelectionTask_Trace.h"

UTargetingSelectionTask_Trace::UTargetingSelectionTask_Trace() {
    this->TraceType = ETargetingTraceType::Line;
    this->TraceChannel = TraceTypeQuery1;
    this->bComplexTrace = false;
    this->bIgnoreSourceActor = false;
    this->bIgnoreInstigatorActor = false;
}

float UTargetingSelectionTask_Trace::GetTraceLength_Implementation(const FTargetingRequestHandle& TargetingHandle) const {
    return 0.0f;
}

FVector UTargetingSelectionTask_Trace::GetTraceDirection_Implementation(const FTargetingRequestHandle& TargetingHandle) const {
    return FVector{};
}

float UTargetingSelectionTask_Trace::GetSweptTraceRadius_Implementation(const FTargetingRequestHandle& TargetingHandle) const {
    return 0.0f;
}

FVector UTargetingSelectionTask_Trace::GetSourceOffset_Implementation(const FTargetingRequestHandle& TargetingHandle) const {
    return FVector{};
}

FVector UTargetingSelectionTask_Trace::GetSourceLocation_Implementation(const FTargetingRequestHandle& TargetingHandle) const {
    return FVector{};
}

void UTargetingSelectionTask_Trace::GetAdditionalActorsToIgnore_Implementation(const FTargetingRequestHandle& TargetingHandle, TArray<AActor*>& OutAdditionalActorsToIgnore) const {
}



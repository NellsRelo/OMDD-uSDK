#include "RSTGameplayAbility_GatherTargets.h"

URSTGameplayAbility_GatherTargets::URSTGameplayAbility_GatherTargets() {
    this->bTargetIncludeAnyFilterTags = false;
    this->bIgnoreSelf = false;
    this->DefaultTargetRadius = 0.00f;
    this->SphereOverlapTickRate = 0.10f;
    this->SphereOverlapTask = NULL;
    this->LineOfSightMoveRecheckThreshold = 0.00f;
    this->LineOfSightMinConsiderRadius = 0.00f;
    this->LineOfSightHitTolerance = 25.00f;
    this->LineOfSightTickRate = 0.10f;
    this->LineOfSightTask = NULL;
}

void URSTGameplayAbility_GatherTargets::StopGatheringTargets() {
}

void URSTGameplayAbility_GatherTargets::StartGatheringTargets() {
}

void URSTGameplayAbility_GatherTargets::OnOverlapsLeft(const TArray<AActor*>& Actors) {
}

void URSTGameplayAbility_GatherTargets::OnOverlapsEntered(const TArray<AActor*>& Actors) {
}

void URSTGameplayAbility_GatherTargets::OnLineOfSightUpdated() {
}

float URSTGameplayAbility_GatherTargets::GetTargetRadius() {
    return 0.0f;
}

FTransform URSTGameplayAbility_GatherTargets::GetSphereSourceTransform() {
    return FTransform{};
}

FTransform URSTGameplayAbility_GatherTargets::GetLineOfSightSourceTransformConst() const {
    return FTransform{};
}

FTransform URSTGameplayAbility_GatherTargets::GetLineOfSightSourceTransform() {
    return FTransform{};
}

TArray<AActor*> URSTGameplayAbility_GatherTargets::GetCurrentTargets() {
    return TArray<AActor*>();
}













#include "TargetingSelectionTask_AOE.h"

UTargetingSelectionTask_AOE::UTargetingSelectionTask_AOE() {
    this->ShapeType = ETargetingAOEShape::Box;
    this->CollisionChannel = ECC_PhysicsBody;
    this->bUseRelativeOffset = false;
    this->bIgnoreSourceActor = false;
    this->bIgnoreInstigatorActor = false;
}

FQuat UTargetingSelectionTask_AOE::GetSourceRotation_Implementation(const FTargetingRequestHandle& TargetingHandle) const {
    return FQuat{};
}

FVector UTargetingSelectionTask_AOE::GetSourceOffset_Implementation(const FTargetingRequestHandle& TargetingHandle) const {
    return FVector{};
}

FVector UTargetingSelectionTask_AOE::GetSourceLocation_Implementation(const FTargetingRequestHandle& TargetingHandle) const {
    return FVector{};
}



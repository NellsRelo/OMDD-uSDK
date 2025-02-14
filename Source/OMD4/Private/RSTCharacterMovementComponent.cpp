#include "RSTCharacterMovementComponent.h"

URSTCharacterMovementComponent::URSTCharacterMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bRequestedMoveUseAcceleration = false;
    this->bHasReplicatedAcceleration = false;
    this->bShouldBounce = false;
    this->Bounciness = 0.00f;
    this->Friction = 0.00f;
    this->bBounceAngleAffectsFriction = false;
    this->bIsSliding = false;
    this->BounceVelocityStopSimulatingThreshold = 0.00f;
    this->MinFrictionFraction = 0.00f;
    this->MaxBounces = 20;
    this->bSuspendedInAir = false;
}

bool URSTCharacterMovementComponent::IsBounceVelocityUnderSimulationThreshold(const FVector& BounceVelocity) const {
    return false;
}

FRSTCharacterGroundInfo URSTCharacterMovementComponent::GetGroundInfo() {
    return FRSTCharacterGroundInfo{};
}



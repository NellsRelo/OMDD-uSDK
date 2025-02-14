#include "RSTAnimInstanceCharacter.h"

URSTAnimInstanceCharacter::URSTAnimInstanceCharacter() {
    this->bNormalizeSpeed = false;
    this->MaxSpeed = 0.00f;
    this->ForwardLocomotionValue = 0.00f;
    this->RightLocomotionValue = 0.00f;
    this->Speed = 0.00f;
    this->NormalizedSpeed = 0.00f;
    this->bInAir = false;
    this->PelvisTwist = 0.00f;
    this->bWasRotationLocked = false;
    this->AimPitch = 0.00f;
    this->AimYaw = 0.00f;
    this->RootYawOffset = 0.00f;
}

bool URSTAnimInstanceCharacter::ShouldNormalizeSpeed() const {
    return false;
}

bool URSTAnimInstanceCharacter::IsInAir() const {
    return false;
}

float URSTAnimInstanceCharacter::GetSpeed() const {
    return 0.0f;
}

float URSTAnimInstanceCharacter::GetRightLocomotionValue() const {
    return 0.0f;
}

float URSTAnimInstanceCharacter::GetNormalizedSpeed() const {
    return 0.0f;
}

float URSTAnimInstanceCharacter::GetMaxSpeed() const {
    return 0.0f;
}

float URSTAnimInstanceCharacter::GetForwardLocomotionValue() const {
    return 0.0f;
}

FVector URSTAnimInstanceCharacter::GetDirection() const {
    return FVector{};
}



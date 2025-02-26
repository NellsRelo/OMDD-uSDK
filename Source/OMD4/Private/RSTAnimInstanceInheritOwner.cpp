#include "RSTAnimInstanceInheritOwner.h"

URSTAnimInstanceInheritOwner::URSTAnimInstanceInheritOwner() {
    this->bNormalizeSpeed = false;
    this->MaxSpeed = 0.00f;
    this->ForwardLocomotionValue = 0.00f;
    this->RightLocomotionValue = 0.00f;
    this->Speed = 0.00f;
    this->NormalizedSpeed = 0.00f;
    this->bInAir = false;
}

ACharacter* URSTAnimInstanceInheritOwner::GetOwningCharacter() const {
    return NULL;
}

URSTAnimInstanceCharacter* URSTAnimInstanceInheritOwner::GetOwningAnimInstance() const {
    return NULL;
}



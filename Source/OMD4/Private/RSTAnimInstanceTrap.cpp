#include "RSTAnimInstanceTrap.h"

URSTAnimInstanceTrap::URSTAnimInstanceTrap() {
    this->bIsAbilityActive = false;
    this->bIsCooldownActive = false;
    this->bIsBeingPlaced = false;
    this->bIsPlacementValid = true;
    this->bIsDisabled = false;
    this->CooldownProgression = 0.00f;
}

ARSTTrap* URSTAnimInstanceTrap::GetTrap() const {
    return NULL;
}



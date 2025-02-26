#include "RSTGameplayAbility_Sprint.h"

URSTGameplayAbility_Sprint::URSTGameplayAbility_Sprint() {
    this->SprintEffect = NULL;
    this->SpeedMultiplier = 1.50f;
    this->SprintingForwardAngle = 50.00f;
    this->MinRequiredSpeedThreshold = 10.00f;
    this->bIsSprintToggle = false;
    this->MoveForwardTask = NULL;
    this->SpeedThresholdTask = NULL;
    this->PressTask = NULL;
    this->ReleaseTask = NULL;
}

bool URSTGameplayAbility_Sprint::ShouldHoldToSprint() const {
    return false;
}

void URSTGameplayAbility_Sprint::OnWithinForwardThreshold() {
}

void URSTGameplayAbility_Sprint::OnOutsideForwardThreshold() {
}

void URSTGameplayAbility_Sprint::OnInputReleased(float Duration) {
}

void URSTGameplayAbility_Sprint::OnInputPressed(float Duration) {
}

void URSTGameplayAbility_Sprint::OnBelowSpeedThreshold(float Speed) {
}



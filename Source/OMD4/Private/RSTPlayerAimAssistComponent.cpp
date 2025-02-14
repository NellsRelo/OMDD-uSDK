#include "RSTPlayerAimAssistComponent.h"

URSTPlayerAimAssistComponent::URSTPlayerAimAssistComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FrictionTargetingPreset = NULL;
    this->Friction = 0.50f;
    this->FrictionDeadZone = 0.20f;
    this->MagnetismTargetingPreset = NULL;
    this->MagnetismTargetUpdateFrequency = 0.20f;
    this->MagnetismDeadZone = 0.20f;
    this->MagnetismTolerance = 0.50f;
    this->MagnetismStrength = 10.00f;
}



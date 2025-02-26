#include "RSTHeroComponent.h"

URSTHeroComponent::URSTHeroComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AbilityCameraMode = NULL;
    this->OverrideCameraMode = NULL;
    this->ControllerLookYawRate = 300.00f;
    this->ControllerLookPitchRate = 165.00f;
    this->LookYawScale = 1.00f;
    this->LookPitchScale = 1.00f;
}

void URSTHeroComponent::SetLookScale(float YawScale, float PitchScale) {
}

URSTHeroComponent* URSTHeroComponent::FindHeroComponent(const AActor* Actor) {
    return NULL;
}



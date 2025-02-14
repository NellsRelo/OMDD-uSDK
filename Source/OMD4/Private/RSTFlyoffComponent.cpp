#include "RSTFlyoffComponent.h"

URSTFlyoffComponent::URSTFlyoffComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DamageFlyoffClass = NULL;
    this->HealingFlyoffClass = NULL;
}

void URSTFlyoffComponent::RequestHealingFlyoff(const FRSTHealingFlyoffRequest& NewRequest) {
}

void URSTFlyoffComponent::RequestDamageFlyoff(const FRSTDamageFlyoffRequest& NewRequest) {
}



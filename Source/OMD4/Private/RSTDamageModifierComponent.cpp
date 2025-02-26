#include "RSTDamageModifierComponent.h"

URSTDamageModifierComponent::URSTDamageModifierComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bPreferInstigator = false;
    this->bLimitDamageOnShieldBreak = false;
}

URSTDamageModifierComponent* URSTDamageModifierComponent::FindDamageModifierComponent(const AActor* Actor) {
    return NULL;
}



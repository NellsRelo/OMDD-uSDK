#include "RSTChargeComponent.h"

URSTChargeComponent::URSTChargeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AbilitySystemComponent = NULL;
}

void URSTChargeComponent::UninitializeFromAbilitySystem() {
}

bool URSTChargeComponent::IsInitialized() const {
    return false;
}

void URSTChargeComponent::InitializeWithAbilitySystem(URSTAbilitySystemComponent* InASC) {
}

URSTAbilitySystemComponent* URSTChargeComponent::GetOwningAbilitySystemComponent() const {
    return NULL;
}

bool URSTChargeComponent::GetMaxCharges(FGameplayTag Tag, int32& OutMaxCharges, bool bIncludeBonus) const {
    return false;
}

bool URSTChargeComponent::GetCurrentCharges(FGameplayTag Tag, int32& OutVal) const {
    return false;
}

URSTChargeComponent* URSTChargeComponent::FindChargeComponent(const AActor* Actor) {
    return NULL;
}



#include "RSTModifierComponent.h"
#include "Net/UnrealNetwork.h"

URSTModifierComponent::URSTModifierComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TargetType = ERSTModifierTargetType::None;
}

void URSTModifierComponent::OnRep_ModifierInstances() {
}

void URSTModifierComponent::OnPreviewModifierRemoved(FRSTModifierSpec Spec) {
}

void URSTModifierComponent::OnPreviewModifierAdded(FRSTModifierSpec Spec) {
}

void URSTModifierComponent::OnModifierRemoved(FRSTModifierSpec Spec) {
}

void URSTModifierComponent::OnModifierExecuted(FRSTModifierSpec Spec) {
}

void URSTModifierComponent::OnModifierAdded(FRSTModifierSpec Spec) {
}

void URSTModifierComponent::OnAbilityRemoved(UGameplayAbility* Ability) {
}

void URSTModifierComponent::OnAbilityInstanceRemoved(UGameplayAbility* Ability) {
}

void URSTModifierComponent::OnAbilityInstanceAdded(UGameplayAbility* Ability) {
}

void URSTModifierComponent::OnAbilityAdded(UGameplayAbility* Ability) {
}

void URSTModifierComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(URSTModifierComponent, ModifierInstances);
}



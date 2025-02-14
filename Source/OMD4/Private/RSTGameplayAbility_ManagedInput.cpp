#include "RSTGameplayAbility_ManagedInput.h"

URSTGameplayAbility_ManagedInput::URSTGameplayAbility_ManagedInput() {
    this->bNotifyAbilitiesOfCancellation = true;
    this->InputPressTask = NULL;
    this->InputReleaseTask = NULL;
}

void URSTGameplayAbility_ManagedInput::OnInputReleased(float Duration) {
}

void URSTGameplayAbility_ManagedInput::OnInputPressed(float Duration) {
}

void URSTGameplayAbility_ManagedInput::OnAbilityEndedCallback(const FAbilityEndedData& AbilityData) {
}





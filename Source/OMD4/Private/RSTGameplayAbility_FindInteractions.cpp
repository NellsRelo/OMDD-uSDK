#include "RSTGameplayAbility_FindInteractions.h"
#include "ERSTAbilityActivationPolicy.h"

URSTGameplayAbility_FindInteractions::URSTGameplayAbility_FindInteractions() {
    this->ActivationPolicy = ERSTAbilityActivationPolicy::OnSpawn;
    this->InteractionScanRate = 0.10f;
    this->InteractionScanRange = 500.00f;
}

void URSTGameplayAbility_FindInteractions::UpdateInteractions(const TArray<FRSTInteractionOption>& InteractiveOptions) {
}

void URSTGameplayAbility_FindInteractions::TriggerInteractionStart(float TimeWaited) {
}

void URSTGameplayAbility_FindInteractions::TriggerInteractionEnd(float TimeElapsed) {
}



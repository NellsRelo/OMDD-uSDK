#include "RSTGameplayAbility_SellTrap.h"
#include "ERSTAbilityActivationPolicy.h"

URSTGameplayAbility_SellTrap::URSTGameplayAbility_SellTrap() {
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->ActivationPolicy = ERSTAbilityActivationPolicy::OnSpawn;
    this->InputPressTaskHandle = NULL;
    this->InputReleaseTaskHandle = NULL;
}

void URSTGameplayAbility_SellTrap::Server_SellTrap_Implementation(uint8 RequestID, ARSTTrap* TrapToSell, FPredictionKey PredictionKey) {
}

void URSTGameplayAbility_SellTrap::OnInputReleased(float Duration) {
}

void URSTGameplayAbility_SellTrap::OnInputPressed(float Duration) {
}

void URSTGameplayAbility_SellTrap::Client_ConfirmTrapSold_Implementation(uint8 RequestID, ERSTSellTrapAbilityResult Status) {
}



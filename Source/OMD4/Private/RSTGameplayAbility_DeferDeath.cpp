#include "RSTGameplayAbility_DeferDeath.h"

URSTGameplayAbility_DeferDeath::URSTGameplayAbility_DeferDeath() {
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerOnly;
    this->AbilityTriggers.AddDefaulted(1);
}



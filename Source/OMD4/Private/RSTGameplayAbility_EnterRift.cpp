#include "RSTGameplayAbility_EnterRift.h"

URSTGameplayAbility_EnterRift::URSTGameplayAbility_EnterRift() {
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerInitiated;
    this->AbilityTriggers.AddDefaulted(1);
    this->InstigatorRift = NULL;
}



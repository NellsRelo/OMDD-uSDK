#include "RSTTrapChargeGameplayEffectComponent.h"

URSTTrapChargeGameplayEffectComponent::URSTTrapChargeGameplayEffectComponent() {
    this->RechargeAmount = ERSTTrapRechargeAmount::RechargeNone;
    this->RechargeTime = ERSTTrapRechargeTime::OnApplication;
}



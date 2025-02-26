#include "RSTModifier_ApplyGameplayEffect.h"
#include "ERSTModifierTargetMethod.h"

URSTModifier_ApplyGameplayEffect::URSTModifier_ApplyGameplayEffect() {
    this->TargetMethod = ERSTModifierTargetMethod::Player;
    this->GameplayEffect = NULL;
    this->Level = 1.00f;
}



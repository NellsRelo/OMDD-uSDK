#include "RSTPawnDefinitionHero.h"

URSTPawnDefinitionHero::URSTPawnDefinitionHero() {
    this->RiftPointCost = 5;
    this->MaxUltimateCharge = 0.00f;
    this->RevivingAllyStrength = 0.25f;
    this->RevivalStrength = 0.00f;
    this->MaxDownedCharges = 1.00f;
    this->bEnabled = true;
    this->bRequiresEntitlement = false;
}

bool URSTPawnDefinitionHero::IsHeroEnabled(const FGameplayTag& Tag) const {
    return false;
}

bool URSTPawnDefinitionHero::IsEntitlementRequired(const FGameplayTag& Tag) const {
    return false;
}



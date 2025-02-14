#include "RSTUpgradeDefinition.h"

URSTUpgradeDefinition::URSTUpgradeDefinition() {
    this->OverrideSkullCost = -1;
    this->MinimumLevel = -1;
    this->bEnabled = true;
}

bool URSTUpgradeDefinition::IsValidFor(const FGameplayTag& SelectedHeroTag) const {
    return false;
}



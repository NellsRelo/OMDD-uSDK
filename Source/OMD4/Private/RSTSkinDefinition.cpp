#include "RSTSkinDefinition.h"
#include "Templates/SubclassOf.h"

URSTSkinDefinition::URSTSkinDefinition() {
    this->bEnabled = true;
    this->bRequiresEntitlement = false;
    this->bHideWhenLocked = false;
}

bool URSTSkinDefinition::ShouldHideWhenLocked(const FGameplayTag& Tag) const {
    return false;
}

bool URSTSkinDefinition::IsSkinEnabled(const FGameplayTag& Tag) const {
    return false;
}

bool URSTSkinDefinition::IsEntitlementRequired(const FGameplayTag& Tag) const {
    return false;
}

FGameplayTag URSTSkinDefinition::GetUnlockMilestone(const FGameplayTag& Tag) const {
    return FGameplayTag{};
}

FGameplayTag URSTSkinDefinition::GetLinkedHero(const FGameplayTag& Tag) const {
    return FGameplayTag{};
}

URSTSkinFragment* URSTSkinDefinition::GetFragmentByClass(TSubclassOf<URSTSkinFragment> FragmentClass, bool& bOutSuccess) const {
    return NULL;
}



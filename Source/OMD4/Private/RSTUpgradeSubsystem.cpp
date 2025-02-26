#include "RSTUpgradeSubsystem.h"

URSTUpgradeSubsystem::URSTUpgradeSubsystem() {
    this->SkullCostCurve = NULL;
    this->bEditLinks = false;
}

bool URSTUpgradeSubsystem::IsUnlocked(const URSTUpgradeDefinition* SelectedUpgrade) const {
    return false;
}

void URSTUpgradeSubsystem::InitializeUpgrades(const ARSTPlayerState* PlayerState) {
}

bool URSTUpgradeSubsystem::HasUpgradesForQuery(const FGameplayTagQuery& UpgradeQuery) const {
    return false;
}

int32 URSTUpgradeSubsystem::GetUpgradeCountForPlayer(APlayerState* PlayerState) const {
    return 0;
}

void URSTUpgradeSubsystem::GetUnlockTier(const URSTUpgradeUserFacingData* SelectedUpgrade, int32& CurrentLevel, int32& MaxLevel) const {
}

int32 URSTUpgradeSubsystem::GetSkullCost(const URSTUpgradeDefinition* ChosenUpgrade) const {
    return 0;
}

void URSTUpgradeSubsystem::ChooseUpgrade(ARSTPlayerController* SelectingPlayerController, const URSTUpgradeDefinition* ChosenUpgrade) {
}

bool URSTUpgradeSubsystem::CanBeUnlocked(const URSTUpgradeDefinition* SelectedUpgrade) const {
    return false;
}



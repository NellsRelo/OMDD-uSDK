#include "RSTModifierSubsystem.h"

URSTModifierSubsystem::URSTModifierSubsystem() {
}

void URSTModifierSubsystem::OnUpgradeRemoved(FUniqueNetIdRepl PlayerId, const URSTUpgradeDefinition* Upgrade) {
}

void URSTModifierSubsystem::OnUpgradeAdded(FUniqueNetIdRepl PlayerId, const URSTUpgradeDefinition* Upgrade) {
}

void URSTModifierSubsystem::OnThreadRemoved(FUniqueNetIdRepl PlayerId, const URSTMetaThreadDefinition* Thread, bool bFromQuicksave) {
}

void URSTModifierSubsystem::OnThreadAdded(FUniqueNetIdRepl PlayerId, const URSTMetaThreadDefinition* Thread, bool bFromQuicksave) {
}

void URSTModifierSubsystem::OnTeamThreadRemoved(const URSTMetaTeamThreadDefinition* TeamThread, bool bFromQuicksave) {
}

void URSTModifierSubsystem::OnTeamThreadAdded(const URSTMetaTeamThreadDefinition* TeamThread, bool bFromQuicksave) {
}

void URSTModifierSubsystem::OnPotionRemoved(FUniqueNetIdRepl PlayerId, const URSTPotionDefinition* Potion, bool bFromQuicksave) {
}

void URSTModifierSubsystem::OnPotionAdded(FUniqueNetIdRepl PlayerId, const URSTPotionDefinition* Potion, bool bFromQuicksave) {
}

void URSTModifierSubsystem::OnGameReset() {
}

void URSTModifierSubsystem::OnDistortionRemoved(const URSTMetaDistortionDefinition* Distortion, bool bFromQuicksave) {
}

void URSTModifierSubsystem::OnDistortionAdded(const URSTMetaDistortionDefinition* Distortion, bool bFromQuicksave) {
}



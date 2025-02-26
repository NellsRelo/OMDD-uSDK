#include "RSTCheatManager.h"
#include "RSTDebugCameraController.h"

URSTCheatManager::URSTCheatManager() {
    this->DebugCameraControllerClass = ARSTDebugCameraController::StaticClass();
}

void URSTCheatManager::WinGame() {
}

void URSTCheatManager::UnlockMilestone(FGameplayTag MilestoneTag) {
}

void URSTCheatManager::UnlockHero(FGameplayTag HeroTag) {
}

void URSTCheatManager::UnlockAllThreads() {
}

void URSTCheatManager::UnlockAllMilestones() {
}

void URSTCheatManager::UnlockAllHeroes() {
}

void URSTCheatManager::UnlimitedAmmo() {
}

void URSTCheatManager::ToggleWisps() {
}

void URSTCheatManager::ToggleOneShot() {
}

void URSTCheatManager::ToggleHUD() {
}

void URSTCheatManager::ToggleHenry() {
}

void URSTCheatManager::ToggleFriendlyFire() {
}

void URSTCheatManager::ToggleAimAssistDebug() {
}

void URSTCheatManager::SwapPlayerIndices(int32 IndexA, int32 IndexB) {
}

void URSTCheatManager::Suicide() {
}

void URSTCheatManager::SpawnPickupFromTable(FGameplayTag PickupTableTag) {
}

void URSTCheatManager::SpawnAICharactersOfClassAtDoor(const FString& Name, int32 Index, int32 Count) {
}

void URSTCheatManager::SpawnAICharactersOfClass(const FString& Name, int32 Count) {
}

void URSTCheatManager::ShowSkulls() {
}

void URSTCheatManager::ShowDifficulty() {
}

void URSTCheatManager::SetSkinDefinition(const FString& TagName) {
}

void URSTCheatManager::SetRiftPoints(int32 RiftPoints) {
}

void URSTCheatManager::SetProfileStat(FGameplayTag Tag, int32 Value, ERSTStatType StatType, FGameplayTag Subtag) {
}

void URSTCheatManager::SetPawnDefinition(const FString& TagName) {
}

void URSTCheatManager::SetNumPlayersDifficulty(uint8 numPlayersDifficulty) {
}

void URSTCheatManager::SetNextDistortion(const FString& DistortionName) {
}

void URSTCheatManager::SetNavRenderLayer(int32 NewLayer) {
}

void URSTCheatManager::SetInfiniteRift(bool isInfiniteRift) {
}

void URSTCheatManager::SetHotbarSize(int32 NumSlots) {
}

void URSTCheatManager::SetHealthDisplays(bool Enabled) {
}

void URSTCheatManager::SetGameDifficulty(uint8 GameDifficulty) {
}

void URSTCheatManager::SetDistortion(const FString& DistortionName, int32 missionIndex) {
}

void URSTCheatManager::SetAllAICharactersClass(const FString& Name) {
}

void URSTCheatManager::SetAllAICharactersAmount(int32 amount) {
}

void URSTCheatManager::RevokeKey(FGameplayTag Key) {
}

void URSTCheatManager::RevokeAllGrantedKeys() {
}

void URSTCheatManager::ReviveFromDowned(float ReviverMultiplier) {
}

void URSTCheatManager::ResetProfile() {
}

void URSTCheatManager::ResetAllTraps() {
}

void URSTCheatManager::RerollSessionMissionSeed() {
}

void URSTCheatManager::RemoveUpgrade(const FString& UpgradeName) {
}

void URSTCheatManager::RemoveThread(const FString& ThreadName) {
}

void URSTCheatManager::RemoveTagFromSelf(const FString& TagName) {
}

void URSTCheatManager::RemoveGameplayCue(const FGameplayTag& CueTag) {
}

void URSTCheatManager::RemoveDistortion(const FString& DistortionName) {
}

void URSTCheatManager::RefreshMilestones() {
}

void URSTCheatManager::RefreshConnectLogin() {
}

void URSTCheatManager::PrintValidThreads(int32 threadIndex) {
}

void URSTCheatManager::PrintValidMissions(int32 missionIndex) {
}

void URSTCheatManager::PrintValidDistortions(int32 missionIndex, int32 ChoiceIndex) {
}

void URSTCheatManager::PrintTeamThreads() {
}

void URSTCheatManager::PrintStat(FGameplayTag Tag, FGameplayTag Subtag) {
}

void URSTCheatManager::PrintProfileStats() {
}

void URSTCheatManager::PrintPlayerArray() {
}

void URSTCheatManager::PrintMilestoneProgress() {
}

void URSTCheatManager::PrintGrantedKeys() {
}

void URSTCheatManager::PrintCrystalRiftHealth() {
}

void URSTCheatManager::PreviewLighting(const FString& LightingName) {
}

void URSTCheatManager::NextWave() {
}

void URSTCheatManager::LoseGame() {
}

void URSTCheatManager::LogAnalyticsEvent(const FString& Event, float Value) {
}

void URSTCheatManager::LaunchMission(const FString& MissionName, const FString& DistortionName) {
}

void URSTCheatManager::KillAllMobs() {
}

void URSTCheatManager::InstantRestartPlayer() {
}

void URSTCheatManager::InfiniteRift() {
}

void URSTCheatManager::ImportQuicksave(const FString& Filename) {
}

void URSTCheatManager::ForceGarbageCollection() {
}

void URSTCheatManager::FinishWave() {
}

void URSTCheatManager::ExportQuicksave(const FString& Filename) {
}

void URSTCheatManager::ExpireTeamThreads(bool bApplyImmediately) {
}

void URSTCheatManager::ExecuteGameplayCue(const FGameplayTag& CueTag) {
}

void URSTCheatManager::DumpAllPlayerGameplayTags() {
}

void URSTCheatManager::DisplayUpgrades() {
}

void URSTCheatManager::DisplayMissionHistory() {
}

void URSTCheatManager::DisableAllTraps(float Time) {
}

void URSTCheatManager::DebugSelectThread() {
}

void URSTCheatManager::DebugPlayTransition(const FGameplayTag& TransitionTag) {
}

void URSTCheatManager::DamageSelf(float DamageAmount) {
}

void URSTCheatManager::CrashTest() {
}

void URSTCheatManager::CompleteMilestoneProgress(FGameplayTag MilestoneTag) {
}

void URSTCheatManager::CompleteAllMilestones() {
}

void URSTCheatManager::ClearPotion() {
}

void URSTCheatManager::ApplyUpgrade(const FString& UpgradeName) {
}

void URSTCheatManager::ApplyThread(const FString& ThreadName) {
}

void URSTCheatManager::ApplyTeamThread(const FString& ThreadName, bool bApplyImmediately) {
}

void URSTCheatManager::ApplyPotion(const FString& PotionName) {
}

void URSTCheatManager::ApplyDistortion(const FString& DistortionName) {
}

void URSTCheatManager::AllowApplyModifiers(bool bAllowModifiers) {
}

void URSTCheatManager::AddTagToSelf(const FString& TagName) {
}

void URSTCheatManager::AddRiftPoints(int32 RiftPoints) {
}

void URSTCheatManager::AddProfileStat(FGameplayTag Tag, int32 Value, ERSTStatType StatType, FGameplayTag Subtag) {
}

void URSTCheatManager::AddItemToHotbar(const FString& ItemName, int32 Slot) {
}

void URSTCheatManager::AddGameplayCue(const FGameplayTag& CueTag) {
}

void URSTCheatManager::AddCharges(const FString& ChargeName, float Count) {
}



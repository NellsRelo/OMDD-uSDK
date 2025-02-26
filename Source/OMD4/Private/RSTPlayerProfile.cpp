#include "RSTPlayerProfile.h"

URSTPlayerProfile::URSTPlayerProfile() {
    this->SlotIndex = -1;
    this->TotalPlayTime = 0.00f;
    this->Skulls = 0;
    this->LastGrantSkullCount = 0;
    this->GoldSkulls = 0;
    this->MissionSeed = 0;
    this->DifficultyScaling = 0;
}

void URSTPlayerProfile::UnlockSkins(FGameplayTagContainer TagContainer) {
}

void URSTPlayerProfile::UnlockSkin(FGameplayTag Tag) {
}

void URSTPlayerProfile::UnlockHeroes(FGameplayTagContainer TagContainer) {
}

void URSTPlayerProfile::UnlockHero(FGameplayTag Tag) {
}

bool URSTPlayerProfile::SpendSkulls(int32 amount) {
    return false;
}

bool URSTPlayerProfile::SpendGoldSkulls(int32 amount) {
    return false;
}

void URSTPlayerProfile::SetSkin(const FGameplayTag& InCharacter, const FGameplayTag& InSkin) {
}

void URSTPlayerProfile::SetSavedRunCanBeRestored(bool bInCanBeRestored) {
}

void URSTPlayerProfile::SetPassword(const FString& InPassword) {
}

void URSTPlayerProfile::SetHotbarItems(TArray<ARSTInventoryItemInstance*> InHotbarItems) {
}

void URSTPlayerProfile::SetDifficultyScaling(int32 InDifficultyScaling) {
}

void URSTPlayerProfile::SetCharacter(const FGameplayTag& InCharacter) {
}

void URSTPlayerProfile::SaveCurrentRun(UObject* WorldContextObject) {
}

bool URSTPlayerProfile::RevokeKey(const FGameplayTag& KeyToRevoke) {
    return false;
}

void URSTPlayerProfile::ResetKeys() {
}

void URSTPlayerProfile::ProcessSkinUnlocks(FGameplayTagContainer TagContainer) {
}

void URSTPlayerProfile::ProcessHeroUnlocks(FGameplayTagContainer TagContainer) {
}

void URSTPlayerProfile::LoadSavedRun(UObject* WorldContextObject) {
}

bool URSTPlayerProfile::IsThreadOwnedByTag(FGameplayTag Tag) const {
    return false;
}

bool URSTPlayerProfile::IsThreadOwned(const URSTMetaThreadDefinition* Thread) const {
    return false;
}

bool URSTPlayerProfile::IsSkinUnlocked(FGameplayTag Tag) const {
    return false;
}

bool URSTPlayerProfile::IsQuicksaveAllowed() const {
    return false;
}

bool URSTPlayerProfile::IsPlayerProfileValid(FText& OutError) const {
    return false;
}

bool URSTPlayerProfile::IsInventoryItemOwnedByTag(FGameplayTag Tag) const {
    return false;
}

bool URSTPlayerProfile::IsInventoryItemOwned(const URSTInventoryItemDefinition* InventoryItem) const {
    return false;
}

bool URSTPlayerProfile::IsHeroUnlocked(FGameplayTag Tag) const {
    return false;
}

bool URSTPlayerProfile::HasUpgrade(FGameplayTag UpgradeTag) const {
    return false;
}

bool URSTPlayerProfile::HasGrantedKey(const FGameplayTag& KeyToCheck) const {
    return false;
}

bool URSTPlayerProfile::GrantSkulls(int32 amount) {
    return false;
}

void URSTPlayerProfile::GrantKeys_RecordNewGrants(const FGameplayTagContainer& KeysToGrant, FGameplayTagContainer& OutNewGrants) {
}

void URSTPlayerProfile::GrantKeys(const FGameplayTagContainer& KeysToGrant) {
}

bool URSTPlayerProfile::GrantKey(const FGameplayTag& KeyToGrant) {
    return false;
}

bool URSTPlayerProfile::GrantGoldSkulls(int32 amount) {
    return false;
}

FGameplayTagContainer URSTPlayerProfile::GetUnlockedSkins() const {
    return FGameplayTagContainer{};
}

TArray<FGameplayTag> URSTPlayerProfile::GetUnlockedSkinArray() const {
    return TArray<FGameplayTag>();
}

FGameplayTagContainer URSTPlayerProfile::GetUnlockedHeroes() const {
    return FGameplayTagContainer{};
}

TArray<FGameplayTag> URSTPlayerProfile::GetUnlockedHeroArray() const {
    return TArray<FGameplayTag>();
}

int32 URSTPlayerProfile::GetSkulls() const {
    return 0;
}

TMap<FGameplayTag, FGameplayTag> URSTPlayerProfile::GetSkinSelections() const {
    return TMap<FGameplayTag, FGameplayTag>();
}

FGameplayTag URSTPlayerProfile::GetSkin(const FGameplayTag& InCharacter) const {
    return FGameplayTag{};
}

FRSTSavedRun URSTPlayerProfile::GetSavedRun() const {
    return FRSTSavedRun{};
}

int32 URSTPlayerProfile::GetNumUpgrades() const {
    return 0;
}

int32 URSTPlayerProfile::GetNumThreads() const {
    return 0;
}

FGameplayTagContainer URSTPlayerProfile::GetGrantedKeys() const {
    return FGameplayTagContainer{};
}

int32 URSTPlayerProfile::GetGoldSkulls() const {
    return 0;
}

int32 URSTPlayerProfile::GetDifficultyScaling() const {
    return 0;
}

FGameplayTag URSTPlayerProfile::GetCharacter() {
    return FGameplayTag{};
}

void URSTPlayerProfile::ClearSavedRun() {
}

bool URSTPlayerProfile::CanUnlock(const URSTMetaThreadDefinition* InThread) const {
    return false;
}

bool URSTPlayerProfile::CanResumeSavedRun() const {
    return false;
}

bool URSTPlayerProfile::AddThreads(const TArray<URSTMetaThreadDefinition*>& InThreads, TArray<URSTMetaThreadDefinition*>& OutGrantedThreads) {
    return false;
}

bool URSTPlayerProfile::AddThread(const URSTMetaThreadDefinition* InThread) {
    return false;
}

void URSTPlayerProfile::AddProfileStat(const FGameplayTag& Tag, int32 Value, const FGameplayTag& Subtag) {
}

void URSTPlayerProfile::AddInventoryItem(const URSTInventoryItemDefinition* InventoryItem) {
}



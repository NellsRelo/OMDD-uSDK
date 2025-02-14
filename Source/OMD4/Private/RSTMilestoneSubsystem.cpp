#include "RSTMilestoneSubsystem.h"

URSTMilestoneSubsystem::URSTMilestoneSubsystem() {
}

void URSTMilestoneSubsystem::UpdateMilestones(URSTPlayerProfile* PlayerProfile) {
}

void URSTMilestoneSubsystem::OnLocalPlayerAdded(ULocalPlayer* LocalPlayer) {
}

bool URSTMilestoneSubsystem::HasAnyNewlyUnlockedThreads() const {
    return false;
}

bool URSTMilestoneSubsystem::HasAnyNewlyUnlockedSkins() const {
    return false;
}

bool URSTMilestoneSubsystem::HasAnyNewlyUnlockedHeroes() const {
    return false;
}

int32 URSTMilestoneSubsystem::GetNumNewlyUnlockedThreads() const {
    return 0;
}

int32 URSTMilestoneSubsystem::GetNumNewlyUnlockedSkins() const {
    return 0;
}

int32 URSTMilestoneSubsystem::GetNumNewlyUnlockedHeroes() const {
    return 0;
}

TArray<URSTMetaThreadDefinition*> URSTMilestoneSubsystem::GetNewlyUnlockedThreads() const {
    return TArray<URSTMetaThreadDefinition*>();
}

FGameplayTagContainer URSTMilestoneSubsystem::GetNewlyUnlockedSkins() const {
    return FGameplayTagContainer{};
}

FGameplayTagContainer URSTMilestoneSubsystem::GetNewlyUnlockedHeroes() const {
    return FGameplayTagContainer{};
}

void URSTMilestoneSubsystem::ClearNewUnlockCache() {
}

void URSTMilestoneSubsystem::AcknowledgeNewSkinUnlock(FGameplayTag SkinTag) {
}

void URSTMilestoneSubsystem::AcknowledgeNewHeroUnlock(FGameplayTag HeroTag) {
}



#include "RSTSessionMissionSubsystem.h"

URSTSessionMissionSubsystem::URSTSessionMissionSubsystem() {
    this->MaxValidMissions = 3;
}

void URSTSessionMissionSubsystem::SetCurrentThreadIndex(int32 InThreadIndex) {
}

void URSTSessionMissionSubsystem::SetCurrentSeed(int32 InSeed) {
}

TArray<URSTMetaThreadDefinition*> URSTSessionMissionSubsystem::GetSelectedThreads(ARSTPlayerState* PlayerState) const {
    return TArray<URSTMetaThreadDefinition*>();
}

TArray<FRSTTeamThreadData> URSTSessionMissionSubsystem::GetSelectedTeamThreadData() const {
    return TArray<FRSTTeamThreadData>();
}

URSTPotionDefinition* URSTSessionMissionSubsystem::GetSelectedPotion(APlayerState* PlayerState) const {
    return NULL;
}

URSTMissionDefinition* URSTSessionMissionSubsystem::GetSelectedMission(int32 missionIndex) const {
    return NULL;
}

TArray<URSTMetaThreadDefinition*> URSTSessionMissionSubsystem::GetRecentlySelectedThreads(ARSTPlayerState* PlayerState, int32 NumThreads) const {
    return TArray<URSTMetaThreadDefinition*>();
}

int32 URSTSessionMissionSubsystem::GetNPEMissionIndex() const {
    return 0;
}

int32 URSTSessionMissionSubsystem::GetCurrentThreadIndex() const {
    return 0;
}

int32 URSTSessionMissionSubsystem::GetCurrentSeed() const {
    return 0;
}

int32 URSTSessionMissionSubsystem::GetCurrentMissionIndex() const {
    return 0;
}

FGameplayTagContainer URSTSessionMissionSubsystem::GetAllPlayerGameplayTagContainer() const {
    return FGameplayTagContainer{};
}

void URSTSessionMissionSubsystem::ChooseThread(ARSTPlayerController* SelectingPlayerController, const URSTMetaThreadDefinition* ThreadDefinition) {
}

void URSTSessionMissionSubsystem::ChoosePotion(ARSTPlayerController* SelectingPlayerController, const URSTPotionDefinition* PotionDefinition) {
}

ERSTMissionChosenResult URSTSessionMissionSubsystem::ChooseMissionByIndex(ARSTPlayerController* SelectingPlayerController, int32 ChosenMissionIndex) {
    return ERSTMissionChosenResult::Success;
}

int32 URSTSessionMissionSubsystem::BP_GetMissionNPEIndex_Implementation(URSTPlayerProfile* Profile) const {
    return 0;
}



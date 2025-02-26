#include "RSTGameStateBase.h"
#include "Net/UnrealNetwork.h"
#include "RSTExperienceManagerComponent.h"
#include "RSTGameStatePRSComponent.h"
#include "RSTTransitionManagerComponent.h"

ARSTGameStateBase::ARSTGameStateBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ExperienceManagerComponent = CreateDefaultSubobject<URSTExperienceManagerComponent>(TEXT("ExperienceManagerComponent"));
    this->PRSComponent = CreateDefaultSubobject<URSTGameStatePRSComponent>(TEXT("PRSComponent"));
    this->TransitionManagerComponent = CreateDefaultSubobject<URSTTransitionManagerComponent>(TEXT("TransitionManagerComponent"));
    this->OnslaughtCoordinator = NULL;
    this->CachedGameModeType = ERSTGameModeType::NotSet;
    this->bIsHUB = false;
    this->bDidWin = false;
    this->GrantedSkulls = 0;
    this->GrantedGoldSkulls = 0;
    this->GrantedSkullsCarriedOver = 0;
    this->GrantedGoldSkullsCarriedOver = 0;
    this->GambledSkullsCarriedOver = 0;
    this->GambledSkulls = 0;
    this->EnemiesSpawned = 0;
    this->RiftPoints = 0;
    this->InitialRiftPoints = 0;
    this->RiftProtectionCounts.AddDefaulted(6);
    this->bIsTimedBreakActive = false;
    this->OnslaughtTimer = 0.00f;
    this->CurrentWave = -1;
    this->MaxWave = -1;
    this->FirstWaveStartTime = -1.00f;
    this->CompletionTime = -1.00f;
    this->SpawnedBoss = NULL;
    this->GamePhase = ERSTGamePhase::None;
    this->PlayerRespawnDelay = 1.00f;
    this->AccoladeDisplayCount = 3;
    this->bAccoladesLoaded = false;
    this->StartingMissionIndex = 0;
    this->CurrentMissionIndex = 0;
    this->SessionMissionSeed = 0;
    this->NPEMissionIndex = 0;
    this->CurrentMission = NULL;
    this->PickupDropChanceMultiplier = 1.00f;
    this->PickupDropChanceAddition = 0.00f;
    this->RiftPointLossRiftFailingPercentage = 0.20f;
    this->RiftPointLossAdditionalEntriesPercentage = 0.20f;
    this->AnnouncerSilenceTime = 2.00f;
    this->LastAnnouncerTime = -1.00f;
    this->bIsHotbarRandomized = false;
    this->CinematicInvulnEffect = NULL;
}


void ARSTGameStateBase::SubtractRiftPoints(ERSTRiftPointLossReason LossReason, int32 riftPointsSubtracted) {
}

void ARSTGameStateBase::SpawnPickupAtLocation(FVector LocationToSpawnAt, FGameplayTag PickupTableTag) {
}

void ARSTGameStateBase::SetTimedBreakActive(bool IsActive) {
}

void ARSTGameStateBase::SetPickupDropChanceMultiplier(float NewValue) {
}

void ARSTGameStateBase::SetPickupDropChanceAddition(float NewValue) {
}

void ARSTGameStateBase::SetGoBreakActive(bool IsActive, FGameplayTag BreakTag) {
}

void ARSTGameStateBase::SetGamePhase(ERSTGamePhase NewPhase) {
}

void ARSTGameStateBase::SetCinematicMode(bool bInCinematicMode) {
}

void ARSTGameStateBase::Server_SpawnPickupAtLocation_Implementation(FVector LocationToSpawnAt, FGameplayTag PickupTableTag) {
}

void ARSTGameStateBase::Server_SetPickupDropChanceMultiplier_Implementation(float NewValue) {
}

void ARSTGameStateBase::Server_SetPickupDropChanceAddition_Implementation(float NewValue) {
}

void ARSTGameStateBase::ReleaseSpecialTarget(AActor* Target) {
}

void ARSTGameStateBase::RegisterSpecialTarget(AActor* NewTarget) {
}

void ARSTGameStateBase::ProcessBossDied(ARSTCharacter* Character) {
}

void ARSTGameStateBase::OnRep_SpawnedBoss(ARSTCharacter* PreviousBoss) {
}

void ARSTGameStateBase::OnRep_SessionMissionSeed() {
}

void ARSTGameStateBase::OnRep_SelectedTeamThreads() {
}

void ARSTGameStateBase::OnRep_SelectedMissions() {
}

void ARSTGameStateBase::OnRep_SelectedDistortions() {
}

void ARSTGameStateBase::OnRep_RiftProtectedCounts(TArray<int32> OldCounts) {
}

void ARSTGameStateBase::OnRep_RiftPoints(int32 PreviousRiftPoints) {
}

void ARSTGameStateBase::OnRep_NPEMissionIndex() {
}

void ARSTGameStateBase::OnRep_MissionChoices() {
}

void ARSTGameStateBase::OnRep_IsTimedBreakActive() {
}

void ARSTGameStateBase::OnRep_GrantedSkullsCarriedOver() {
}

void ARSTGameStateBase::OnRep_GrantedKeys() {
}

void ARSTGameStateBase::OnRep_GamePhase(ERSTGamePhase PreviousPhase) {
}

void ARSTGameStateBase::OnRep_GambledSkullsCarriedOver() {
}

void ARSTGameStateBase::OnRep_GambledSkulls() {
}

void ARSTGameStateBase::OnRep_DifficultyData() {
}

void ARSTGameStateBase::OnRep_CurrentWave() {
}

void ARSTGameStateBase::OnRep_CurrentMissionIndex() {
}

void ARSTGameStateBase::OnRep_BonusTrapPlacementLimitArr() {
}

void ARSTGameStateBase::OnRep_AccoladeData() {
}

void ARSTGameStateBase::OnPRSInterruptedAndFinished_GoBreak(FGameplayTag PRSTag) {
}

void ARSTGameStateBase::OnPRSBegin(FGameplayTag PRSTag) {
}

void ARSTGameStateBase::OnPostGameTransitionFinished(const FGameplayTag& TransitionTag, bool bCancelled, const FGameplayTagContainer& AdditionalTags) {
}

void ARSTGameStateBase::OnPawnDefinitionChanged(ARSTPlayerState* PlayerState) {
}

void ARSTGameStateBase::OnOnslaughtCoordinatorSpawnEntity(ARSTAICharacter* AiCharacter) {
}

void ARSTGameStateBase::OnOnslaughtCoordinatorSpawnBoss(ARSTAICharacter* AiCharacter) {
}

void ARSTGameStateBase::OnLoadingScreenRemoved() {
}

void ARSTGameStateBase::OnLoadingScreenAdded() {
}

void ARSTGameStateBase::OnIntroTransitionFinished(const FGameplayTag& TransitionTag, bool bCancelled, const FGameplayTagContainer& AdditionalTags) {
}

void ARSTGameStateBase::OnAccoladeDataLoaded() {
}

void ARSTGameStateBase::NetMulticast_SetSelectedHeroes_Implementation(const TArray<FGameplayTag>& SelectedHeroes) {
}

void ARSTGameStateBase::NetMulticast_SetDraftOrder_Implementation(const TArray<int32>& InDraftOrder) {
}

void ARSTGameStateBase::NetMulticast_SetDesiredHeroes_Implementation(const TArray<FGameplayTag>& DesiredHeroes) {
}

void ARSTGameStateBase::NetMulticast_BatchedCharacterHitGameplayCues_Implementation(const TArray<FRSTCharacterHitParams>& HitParams) {
}


bool ARSTGameStateBase::IsPlayingSolo() const {
    return false;
}

bool ARSTGameStateBase::IsGameStarted() const {
    return false;
}

bool ARSTGameStateBase::IsGamePostGame() const {
    return false;
}

bool ARSTGameStateBase::IsGameEnded() const {
    return false;
}

bool ARSTGameStateBase::IsAnyBreakActive() const {
    return false;
}


bool ARSTGameStateBase::IncrementRiftProtection(TArray<ERSTRiftPointLossReason> Reasons) {
    return false;
}

bool ARSTGameStateBase::HasCommittedGamble() const {
    return false;
}

FGameplayTagContainer ARSTGameStateBase::GetUnlockedSessionHeroes() const {
    return FGameplayTagContainer{};
}

URSTTransitionManagerComponent* ARSTGameStateBase::GetTransitionManagerComponent() {
    return NULL;
}

int32 ARSTGameStateBase::GetTotalScore() const {
    return 0;
}

ARSTCharacter* ARSTGameStateBase::GetSpawnedBoss() const {
    return NULL;
}

bool ARSTGameStateBase::GetSharedTrapPlacementLimit(FGameplayTag PlacementLimitGroup, int32& OutPlacementLimit, int32& OutExtraForHost) const {
    return false;
}

int32 ARSTGameStateBase::GetScoreIndex(FGameplayTag ScoreTag) const {
    return 0;
}

int32 ARSTGameStateBase::GetRiftPoints() {
    return 0;
}

bool ARSTGameStateBase::GetRiftIsProtectedForReason(ERSTRiftPointLossReason Reason) {
    return false;
}

bool ARSTGameStateBase::GetRiftIsProtected() {
    return false;
}

void ARSTGameStateBase::GetPossibleTargetsInRange(const FVector& Location, float Radius, TArray<AActor*>& OutActors) const {
}

TArray<ARSTPlayerState*> ARSTGameStateBase::GetPlayersWithHighestStatValue(const FGameplayTagContainer& InStatTags, FGameplayTag InSubStatTag, bool bRunStats) const {
    return TArray<ARSTPlayerState*>();
}

ARSTPlayerState* ARSTGameStateBase::GetPlayerStateByPlayerIndex(int32 PlayerIndex) const {
    return NULL;
}

float ARSTGameStateBase::GetPickupDropChanceMultiplier() {
    return 0.0f;
}

float ARSTGameStateBase::GetPickupDropChanceAddition() {
    return 0.0f;
}

bool ARSTGameStateBase::GetIsGoBreakTag(FGameplayTag tagToCheck) const {
    return false;
}

bool ARSTGameStateBase::GetIsGoBreakActive() const {
    return false;
}

int32 ARSTGameStateBase::GetInitialRiftPoints() {
    return 0;
}

URSTGameStatePRSComponent* ARSTGameStateBase::GetGameStatePRSComponent() {
    return NULL;
}

ERSTGamePhase ARSTGameStateBase::GetGamePhase() const {
    return ERSTGamePhase::None;
}

int32 ARSTGameStateBase::GetCostToGamble() const {
    return 0;
}

TArray<FRSTAppliedAccoladeData> ARSTGameStateBase::GetAccolades() const {
    return TArray<FRSTAppliedAccoladeData>();
}

bool ARSTGameStateBase::DecrementRiftProtection(TArray<ERSTRiftPointLossReason> Reasons) {
    return false;
}

bool ARSTGameStateBase::CanSelectHero(const FGameplayTag& PotentialTag, const TArray<FGameplayTag>& SelectedHeroes, bool bIgnoreCurrentlyPending) {
    return false;
}

bool ARSTGameStateBase::CanEditHotbar_Implementation() const {
    return false;
}

void ARSTGameStateBase::CalcInitialRiftPoints(int32 riftPointsInitial) {
}


void ARSTGameStateBase::AddScore(FGameplayTag ScoreTag, int32 Count, int32 Instances) {
}

void ARSTGameStateBase::AddRiftPoints(int32 riftPointsAdded) {
}

void ARSTGameStateBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ARSTGameStateBase, CachedGameModeType);
    DOREPLIFETIME(ARSTGameStateBase, bIsHUB);
    DOREPLIFETIME(ARSTGameStateBase, bDidWin);
    DOREPLIFETIME(ARSTGameStateBase, GrantedSkulls);
    DOREPLIFETIME(ARSTGameStateBase, GrantedSkullsCarriedOver);
    DOREPLIFETIME(ARSTGameStateBase, GambledSkullsCarriedOver);
    DOREPLIFETIME(ARSTGameStateBase, GambledSkulls);
    DOREPLIFETIME(ARSTGameStateBase, EnemiesSpawned);
    DOREPLIFETIME(ARSTGameStateBase, RiftPoints);
    DOREPLIFETIME(ARSTGameStateBase, InitialRiftPoints);
    DOREPLIFETIME(ARSTGameStateBase, RiftProtectionCounts);
    DOREPLIFETIME(ARSTGameStateBase, bIsTimedBreakActive);
    DOREPLIFETIME(ARSTGameStateBase, OnslaughtTimer);
    DOREPLIFETIME(ARSTGameStateBase, CurrentWave);
    DOREPLIFETIME(ARSTGameStateBase, MaxWave);
    DOREPLIFETIME(ARSTGameStateBase, FirstWaveStartTime);
    DOREPLIFETIME(ARSTGameStateBase, CompletionTime);
    DOREPLIFETIME(ARSTGameStateBase, SpawnedBoss);
    DOREPLIFETIME(ARSTGameStateBase, GamePhase);
    DOREPLIFETIME(ARSTGameStateBase, AccoladeData);
    DOREPLIFETIME(ARSTGameStateBase, TagScoreList);
    DOREPLIFETIME(ARSTGameStateBase, MissionChoices);
    DOREPLIFETIME(ARSTGameStateBase, PreviousLostMap);
    DOREPLIFETIME(ARSTGameStateBase, StartingMissionIndex);
    DOREPLIFETIME(ARSTGameStateBase, CurrentMissionIndex);
    DOREPLIFETIME(ARSTGameStateBase, SessionMissionSeed);
    DOREPLIFETIME(ARSTGameStateBase, NPEMissionIndex);
    DOREPLIFETIME(ARSTGameStateBase, GrantedKeys);
    DOREPLIFETIME(ARSTGameStateBase, SelectedMissions);
    DOREPLIFETIME(ARSTGameStateBase, SelectedDistortions);
    DOREPLIFETIME(ARSTGameStateBase, SelectedTeamThreads);
    DOREPLIFETIME(ARSTGameStateBase, CurrentMission);
    DOREPLIFETIME(ARSTGameStateBase, BonusTrapPlacementLimitArr);
    DOREPLIFETIME(ARSTGameStateBase, bIsHotbarRandomized);
    DOREPLIFETIME(ARSTGameStateBase, ReplicatedDifficulty);
}



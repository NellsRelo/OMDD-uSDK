#include "RSTOnslaughtCoordinator.h"
#include "RSTModifierComponent.h"

ARSTOnslaughtCoordinator::ARSTOnslaughtCoordinator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaxAICharacters = 150;
    this->DefaultWaveTimer = 10.00f;
    this->DefaultGroupTimer = 6.00f;
    this->DefaultEntityTimer = 1.00f;
    this->DefaultEntitySideSpacing = 250.00f;
    this->DefaultPostGoBreakTimer = 3.00f;
    this->DefaultStartingCoin = 2000;
    this->DelayBetweenWisps = 9.00f;
    this->WispGroupSize = 3;
    this->GlobalWispCap = 60;
    this->PerformanceWispCap = 40;
    this->bIsMinionCapped = false;
    this->WispClass = NULL;
    this->LargeWispClass = NULL;
    this->ModifierComponent = CreateDefaultSubobject<URSTModifierComponent>(TEXT("ModifierComponent"));
    this->bIsOnePlayer = true;
    this->bIsTwoPlayers = true;
    this->bIsThreePlayers = true;
    this->bIsFourPlusPlayers = true;
}

bool ARSTOnslaughtCoordinator::SpawnEntityFromEntity(ARSTAICharacter* fromEntity, const URSTPawnDefinition* PawnDefinition, int32 numToSpawn, const FGameplayTagContainer& AdditionalGrantedTags, TArray<APawn*>& outSpawned) {
    return false;
}

bool ARSTOnslaughtCoordinator::SpawnEntityForEntity(ARSTAICharacter* ControllingCharacter, FVector positionToSpawn, FRotator rotationToSpawn, const URSTPawnDefinition* PawnDefinition, int32 numToSpawn, bool bMarkAsResurrected, const FGameplayTagContainer& AdditionalGrantedTags, TArray<APawn*>& outSpawned) {
    return false;
}

bool ARSTOnslaughtCoordinator::SpawnEntityAtTransform(FVector SpawnLoc, FRotator SpawnRot, const URSTPawnDefinition* PawnDefinition, int32 numToSpawn, const FGameplayTagContainer& AdditionalGrantedTags, TArray<APawn*>& outSpawned) {
    return false;
}

void ARSTOnslaughtCoordinator::SetAllAICharactersClass(const URSTPawnDefinition* PawnDefinition) {
}

void ARSTOnslaughtCoordinator::SetAllAICharactersAmount(int32 amountPerSpawn) {
}

void ARSTOnslaughtCoordinator::ResetOnslaught() {
}

void ARSTOnslaughtCoordinator::RemoveWisp(ARSTAICharacter* Wisp, bool bAlsoDestroy) {
}



void ARSTOnslaughtCoordinator::PawnHasDied(APawn* deadPawn) {
}

void ARSTOnslaughtCoordinator::OnWispSpawnTimer() {
}

void ARSTOnslaughtCoordinator::OnslaughtWaveBreak(float waveBreakTimer, bool onePlayer, bool twoPlayer, bool threePlayer, bool fourPlusPlayers) {
}

void ARSTOnslaughtCoordinator::OnslaughtStartGroup(float waitUntilPreviousGroupDeadPercent) {
}

void ARSTOnslaughtCoordinator::OnslaughtSpawnEntitiesBiome(UDataTable* BiomeDefinition, bool SpawnWithShield, EOnslaughtSpawnLocationType SpawnLocationType, bool onePlayer, bool twoPlayer, bool threePlayer, bool fourPlusPlayers) {
}

void ARSTOnslaughtCoordinator::OnslaughtSpawnEntities(const URSTPawnDefinition* PawnDefinition, int32 Count, bool SpawnWithShield, EOnslaughtSpawnLocationType SpawnLocationType, bool onePlayer, bool twoPlayer, bool threePlayer, bool fourPlusPlayers) {
}

void ARSTOnslaughtCoordinator::OnslaughtSpawnBoss(const URSTPawnDefinition* PawnDefinition, EOnslaughtSpawnLocationType SpawnLocationType) {
}

void ARSTOnslaughtCoordinator::OnslaughtGoBreak(FGameplayTag BreakTag, bool onePlayer, bool twoPlayer, bool threePlayer, bool fourPlusPlayers) {
}

void ARSTOnslaughtCoordinator::OnslaughtGiveCoin(int32 amount, bool bInitialGrant, bool onePlayer, bool twoPlayer, bool threePlayer, bool fourPlusPlayers) {
}

void ARSTOnslaughtCoordinator::OnslaughtEnd() {
}

void ARSTOnslaughtCoordinator::OnslaughtDelayUntilAction(const FString& delayActionName, bool onePlayer, bool twoPlayers, bool threePlayers, bool fourPlusPlayers) {
}

void ARSTOnslaughtCoordinator::OnslaughtDelay(float Delay, bool onePlayer, bool twoPlayer, bool threePlayer, bool fourPlusPlayers) {
}

void ARSTOnslaughtCoordinator::OnslaughtAction(const FString& ActionName, bool onePlayer, bool twoPlayer, bool threePlayer, bool fourPlusPlayers) {
}


bool ARSTOnslaughtCoordinator::IsOnslaughtActive() {
    return false;
}

bool ARSTOnslaughtCoordinator::IsLastPawnStanding(AActor* TestPawn, const FGameplayTagContainer& ExcludeOtherTags) {
    return false;
}

bool ARSTOnslaughtCoordinator::GetShowAIHud() {
    return false;
}

int32 ARSTOnslaughtCoordinator::GetNumPawnsWaitingForSpawn() {
    return 0;
}

int32 ARSTOnslaughtCoordinator::GetNumPawnsApprovedForSpawn() {
    return 0;
}

int32 ARSTOnslaughtCoordinator::GetNumPawnsAlive() {
    return 0;
}

int32 ARSTOnslaughtCoordinator::GetMaxAICharacters() {
    return 0;
}

TArray<APawn*> ARSTOnslaughtCoordinator::GetAllPawnsWithTags(const FGameplayTagContainer& TargetIncludeFilterTags, bool bTargetIncludeAnyFilterTags, const FGameplayTagContainer& TargetIgnoreFilterTags) {
    return TArray<APawn*>();
}

TArray<APawn*> ARSTOnslaughtCoordinator::GetAllPawns() {
    return TArray<APawn*>();
}


void ARSTOnslaughtCoordinator::ClearOnslaught() {
}



void ARSTOnslaughtCoordinator::BroadcastEntitySpawn(ARSTAICharacter* spawnedEntity) {
}

void ARSTOnslaughtCoordinator::BroadcastBossSpawn(ARSTAICharacter* spawnedEntity) {
}


void ARSTOnslaughtCoordinator::AddDistortionEnemies(const URSTPawnDefinition* PawnDefinition, int32 numToAdd, EOnslaughtSpawnLocationType SpawnLocationType, float chanceToSpawn) {
}



#include "RSTAISpawner.h"
#include "Components/BoxComponent.h"
#include "Particles/ParticleSystemComponent.h"

ARSTAISpawner::ARSTAISpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("SpawnVolume"));
    this->BoxComponent = (UBoxComponent*)RootComponent;
    this->indexInLevel = 1;
    this->maxSpawnPerRow = -1;
    this->bIsActive = true;
    this->bCurrentlyVisibleOnMinimap = false;
    this->SpawnLocationType = EOnslaughtSpawnLocationType::Legacy;
    this->SpawnDirection = NULL;
    this->bActivateAtStart = false;
    this->bAllowRespawn = false;
    this->bSpawnAtCenter = false;
    this->MinSpawnCount = 0;
    this->MaxSpawnCount = 0;
    this->SpawnDuration = 0.00f;
    this->PawnDefinition = NULL;
    this->bInvulnerableOnSpawn = true;
    this->MinRespawnDelay = 0.00f;
    this->CurrentAliveCount = 0;
    this->MaxAliveCount = 0;
    this->NumInitiallySpawned = 0;
    this->RiftFX = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("RiftFX"));
    this->RiftFX->SetupAttachment(RootComponent);
}

void ARSTAISpawner::OnRespawnTimer() {
}

void ARSTAISpawner::OnDelayedSpawnTimer() {
}

int32 ARSTAISpawner::GetCurrentAliveCount() {
    return 0;
}

void ARSTAISpawner::BeginSpawning(TArray<APawn*>& spawedPawns) {
}



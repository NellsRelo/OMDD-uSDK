#include "RSTPlayerCharacter.h"
#include "Net/UnrealNetwork.h"
#include "RSTAttachmentManagerComponent.h"
#include "RSTCameraComponent.h"
#include "RSTChargeComponent.h"
#include "RSTEquipmentManagerComponent.h"
#include "RSTPlayerAimAssistComponent.h"
#include "RSTRecoilComponent.h"
#include "RSTTrapPlacementComponent.h"

ARSTPlayerCharacter::ARSTPlayerCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DownedPing = NULL;
    this->CameraComponent = CreateDefaultSubobject<URSTCameraComponent>(TEXT("CameraComponent"));
    this->AttachmentManagerComponent = CreateDefaultSubobject<URSTAttachmentManagerComponent>(TEXT("AttachmentManager"));
    this->TrapPlacementComponent = CreateDefaultSubobject<URSTTrapPlacementComponent>(TEXT("TrapPlacementComponent"));
    this->ChargeComponent = CreateDefaultSubobject<URSTChargeComponent>(TEXT("ChargeComponent"));
    this->EquipmentManagerComponent = CreateDefaultSubobject<URSTEquipmentManagerComponent>(TEXT("EquipmentManagerComponent"));
    this->RecoilComponent = CreateDefaultSubobject<URSTRecoilComponent>(TEXT("RecoilComponent"));
    this->AimAssistComponent = CreateDefaultSubobject<URSTPlayerAimAssistComponent>(TEXT("AimAssistComponent"));
    this->NearbyActorsRadius = 1000.00f;
    this->DeathCameraMode = NULL;
    this->bSpawningFromRejoin = false;
    this->CurrentlyAppliedSkin = NULL;
}

void ARSTPlayerCharacter::RecallNearbyActorsBP() {
}

void ARSTPlayerCharacter::OnTrapPlacementFailed(ARSTTrap* Trap, ERSTTrapPlacementFailureReason FailureReason) {
}

void ARSTPlayerCharacter::OnTrapPlaced(ARSTTrap* Trap) {
}

void ARSTPlayerCharacter::OnSkinDefinitionChanged(ARSTPlayerState* RSTPlayerState) {
}

void ARSTPlayerCharacter::OnReviveDataChanged(FRSTReviveData Data) {
}

void ARSTPlayerCharacter::OnPRSBegin(FGameplayTag PRSTag) {
}

void ARSTPlayerCharacter::OnPlayerReadyStateChanged(FGameplayTag PRSTag, FUniqueNetIdRepl PlayerNetID, bool bIsReady) {
}

void ARSTPlayerCharacter::OnPlayerControllerPlayerStateChanged() {
}

void ARSTPlayerCharacter::OnHealthChanged(URSTHealthComponent* InHealthComponent, float OldValue, float NewValue, AActor* InInstigator, const FHitResult& HitResult, bool bHasSpec, const FGameplayEffectSpec& Spec) {
}

void ARSTPlayerCharacter::OnGameEnding() {
}

void ARSTPlayerCharacter::OnGameEnded() {
}

void ARSTPlayerCharacter::OnAttachmentsChanged() {
}

URSTAttachmentManagerComponent* ARSTPlayerCharacter::GetAttachmentManager() const {
    return NULL;
}

void ARSTPlayerCharacter::EvaluateNearbyActor(AActor* nearbyActor, float distSquaredFromPlayer) {
}

void ARSTPlayerCharacter::EnableCameraRendering() {
}

void ARSTPlayerCharacter::DisableCameraRendering() {
}




void ARSTPlayerCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ARSTPlayerCharacter, NearbyActors);
    DOREPLIFETIME(ARSTPlayerCharacter, bSpawningFromRejoin);
}



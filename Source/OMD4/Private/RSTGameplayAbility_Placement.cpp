#include "RSTGameplayAbility_Placement.h"

URSTGameplayAbility_Placement::URSTGameplayAbility_Placement() {
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->bBlockTrapSellingOnActivation = true;
    this->PlaceableActorClass = NULL;
    this->bSpawnLocalOnly = true;
    this->bTraceLineOfSight = false;
    this->bIgnoreSelf = false;
    this->CollisionResolutionMethod = ERSTPlacementCollisionResolutionMethod::FailOnCollision;
    this->bCancelOnSilenced = true;
    this->SilencedListenTask = NULL;
    this->bAllowOtherAbilitiesDuringPlacementPhase = true;
    this->bPlaceFromNotify = true;
    this->PlacementMontage = NULL;
    this->bEndAbilityWithMontage = true;
    this->bMontageHasStartSection = false;
    this->PlacementMontageStartSection = TEXT("Start");
    this->PlacementMontageLoopSection = TEXT("Loop");
    this->PlacementMontageEndSection = TEXT("End");
    this->MontageTask = NULL;
    this->bPlacementActive = false;
    this->PlacementPreviewClass = NULL;
    this->PreviewUpdateDelay = 0.00f;
    this->bInterpolatePreviewLocation = true;
    this->PreviewUpdateSpeed = 100.00f;
    this->PreviewMaxDistance = 100.00f;
    this->PreviewTimerTask = NULL;
    this->PreviewLocationUpdateTask = NULL;
    this->PlacementPreview = NULL;
    this->ConfirmationListenerTask = NULL;
    this->bCancellationValid = false;
}

void URSTGameplayAbility_Placement::Server_ProcessSuccessfulPlacement_Implementation(const FPredictionKey& Key, FTransform SpawnTransform) {
}
bool URSTGameplayAbility_Placement::Server_ProcessSuccessfulPlacement_Validate(const FPredictionKey& Key, FTransform SpawnTransform) {
    return true;
}

void URSTGameplayAbility_Placement::OnSilencedStatusAdded() {
}

void URSTGameplayAbility_Placement::OnPreviewTimerElapsed() {
}

void URSTGameplayAbility_Placement::OnMontageFinishedNormally() {
}

void URSTGameplayAbility_Placement::OnMontageFinishedAbnormally() {
}

void URSTGameplayAbility_Placement::OnConfirmationCommitted(UGameplayAbility* Ability) {
}

FVector URSTGameplayAbility_Placement::GetPreviewLocation() {
    return FVector{};
}








bool URSTGameplayAbility_Placement::BP_CheckValidPlacement_Implementation(const FVector& TargetLocation, const FTransform& SourceTransform, bool& OutHasAdjustment, FVector& OutAdjustedLocation) {
    return false;
}



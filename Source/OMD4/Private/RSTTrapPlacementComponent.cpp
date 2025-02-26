#include "RSTTrapPlacementComponent.h"
#include "Net/UnrealNetwork.h"

URSTTrapPlacementComponent::URSTTrapPlacementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InventoryItem = NULL;
    this->PendingTrap = NULL;
    this->RotateTrapIndicator = NULL;
    this->SellTrapIndicator = NULL;
    this->MaxTrapPlacementDistance = 8000.00f;
    this->TrapRotation = 0.00f;
    this->bNextTrapFree = false;
}

void URSTTrapPlacementComponent::Server_UpdatePendingTrap_Implementation(ARSTTrap* Trap, const FTransform& Transform, ERSTTrapPlacementFailureReason FailureReason, bool bIsValid, bool bHasEnoughCoin, bool bHasReachedPlacementLimit) {
}

void URSTTrapPlacementComponent::Server_SetNextTrapFree_Implementation() {
}

void URSTTrapPlacementComponent::Server_EndedTrapPlacement_Implementation(ARSTTrap* Trap) {
}

void URSTTrapPlacementComponent::Server_ConfirmTrapPlacement_Implementation(ARSTTrap* Trap, ARSTInventoryItemInstance_Trap* InInventoryItem, const FTransform& Transform, URSTTrapGridBoxComponent* BoxComponent, ARSTTrapGrid* MainTrapGrid, const TArray<ARSTTrapGrid*>& SeamedTrapGrids, FPredictionKey PredictionKey) {
}

void URSTTrapPlacementComponent::RotateTrap() {
}

void URSTTrapPlacementComponent::OnReplacementActorSpawned(ARNetworkProxyActor* NetworkedActor, ARSTTrap* ReplacedTrap) {
}

void URSTTrapPlacementComponent::OnCurrentWaveChanged(ARSTGameStateBase* GameState) {
}

void URSTTrapPlacementComponent::NetMulticast_AddPlacementGroupPenalty_Implementation(FGameplayTag PlacementLimitGroup, int32 Penalty) {
}

void URSTTrapPlacementComponent::NetMulticast_AddPlacementGroupBonus_Implementation(FGameplayTag PlacementLimitGroup, int32 Bonus) {
}

bool URSTTrapPlacementComponent::HasReachedPlacementLimit(FGameplayTag PlacementLimitGroup) const {
    return false;
}

bool URSTTrapPlacementComponent::HasEnoughCoinForTrap(ARSTInventoryItemInstance* InInventoryItem) const {
    return false;
}

bool URSTTrapPlacementComponent::HasEnoughCoin() const {
    return false;
}

bool URSTTrapPlacementComponent::HasAnyUnusedFreeTrapDiscount() const {
    return false;
}

bool URSTTrapPlacementComponent::GetPlacementLimit(FGameplayTag PlacementLimitGroup, int32& OutPlacementLimit) const {
    return false;
}

int32 URSTTrapPlacementComponent::GetPlacementCount(FGameplayTag PlacementLimitGroup) const {
    return 0;
}

int32 URSTTrapPlacementComponent::GetPlacementCost(const ARSTInventoryItemInstance_Trap* InInventoryItem) const {
    return 0;
}

bool URSTTrapPlacementComponent::CanSellTrap() const {
    return false;
}

void URSTTrapPlacementComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(URSTTrapPlacementComponent, bNextTrapFree);
}



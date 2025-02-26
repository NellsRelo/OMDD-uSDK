#include "RSTPlayerStateMiscModsComponent.h"
#include "Net/UnrealNetwork.h"

URSTPlayerStateMiscModsComponent::URSTPlayerStateMiscModsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bNextTrapCostAllCoin = false;
    this->CoinContributionMultiplier = 1.00f;
    this->FreeDeaths = 0;
    this->FreeDeathChance = 0.00f;
    this->HazardDeathCost = -1;
    this->bNextChestFree = false;
}

void URSTPlayerStateMiscModsComponent::ConsumeNextChestFree() {
}

void URSTPlayerStateMiscModsComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(URSTPlayerStateMiscModsComponent, bNextChestFree);
}



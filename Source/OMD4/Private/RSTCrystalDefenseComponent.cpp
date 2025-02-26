#include "RSTCrystalDefenseComponent.h"
#include "Net/UnrealNetwork.h"

URSTCrystalDefenseComponent::URSTCrystalDefenseComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AccumulatedDamage = 0.00f;
    this->HealthPerRiftPoint = 0.00f;
}

void URSTCrystalDefenseComponent::OnRep_HealthPerRiftPoint() {
}

void URSTCrystalDefenseComponent::OnRep_AccumulatedDamage() {
}

void URSTCrystalDefenseComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(URSTCrystalDefenseComponent, AccumulatedDamage);
    DOREPLIFETIME(URSTCrystalDefenseComponent, HealthPerRiftPoint);
}



#include "RSTTeleportingRiftComponent.h"
#include "Net/UnrealNetwork.h"

URSTTeleportingRiftComponent::URSTTeleportingRiftComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void URSTTeleportingRiftComponent::SetSelectedRift(AActor* InSelectedRift) {
}

void URSTTeleportingRiftComponent::OnRep_SelectedRift() {
}

void URSTTeleportingRiftComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(URSTTeleportingRiftComponent, SelectedRift);
}



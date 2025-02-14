#include "RSTExperienceManagerComponent.h"
#include "Net/UnrealNetwork.h"

URSTExperienceManagerComponent::URSTExperienceManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrentExperience = NULL;
}

void URSTExperienceManagerComponent::OnRep_CurrentExperience() {
}

void URSTExperienceManagerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(URSTExperienceManagerComponent, CurrentExperience);
}



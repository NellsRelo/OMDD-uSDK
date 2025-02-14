#include "RSTPawnExtensionComponent.h"
#include "Net/UnrealNetwork.h"

URSTPawnExtensionComponent::URSTPawnExtensionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PawnDefinition = NULL;
    this->AbilitySystemComponent = NULL;
}

void URSTPawnExtensionComponent::OnRep_PawnDefinition() {
}

bool URSTPawnExtensionComponent::IsPawnReadyToInitialize() const {
    return false;
}

URSTAbilitySystemComponent* URSTPawnExtensionComponent::GetRSTAbilitySystemComponent() const {
    return NULL;
}

URSTPawnExtensionComponent* URSTPawnExtensionComponent::FindPawnExtensionComponent(const AActor* Actor) {
    return NULL;
}

void URSTPawnExtensionComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(URSTPawnExtensionComponent, PawnDefinition);
}



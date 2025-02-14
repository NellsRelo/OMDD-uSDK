#include "RSTCombatComponent.h"
#include "Net/UnrealNetwork.h"

URSTCombatComponent::URSTCombatComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrentAbilityClass = NULL;
    this->CurrentSwingIndex = -1;
    this->bAerialAttack = false;
}

void URSTCombatComponent::InitializeWithAbilitySystem(URSTAbilitySystemComponent* InASC) {
}

void URSTCombatComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(URSTCombatComponent, CurrentAbilityClass);
    DOREPLIFETIME(URSTCombatComponent, CurrentSwingIndex);
    DOREPLIFETIME(URSTCombatComponent, bAerialAttack);
}



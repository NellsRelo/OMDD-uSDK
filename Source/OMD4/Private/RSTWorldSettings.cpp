#include "RSTWorldSettings.h"
#include "Net/UnrealNetwork.h"

ARSTWorldSettings::ARSTWorldSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsHostOptimizedMinions = false;
    this->bMapDataEnabled = true;
}

bool ARSTWorldSettings::UseReducedDeathFX() const {
    return false;
}

void ARSTWorldSettings::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ARSTWorldSettings, bIsHostOptimizedMinions);
}



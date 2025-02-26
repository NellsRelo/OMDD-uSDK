#include "RSTDeathEvent_AIDeathStarted.h"
#include "Net/UnrealNetwork.h"

URSTDeathEvent_AIDeathStarted::URSTDeathEvent_AIDeathStarted() {
    this->LimbMask = 0;
    this->deathType = 0;
}

void URSTDeathEvent_AIDeathStarted::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(URSTDeathEvent_AIDeathStarted, animationTag);
    DOREPLIFETIME(URSTDeathEvent_AIDeathStarted, LimbMask);
    DOREPLIFETIME(URSTDeathEvent_AIDeathStarted, deathType);
    DOREPLIFETIME(URSTDeathEvent_AIDeathStarted, DeathImpulse);
    DOREPLIFETIME(URSTDeathEvent_AIDeathStarted, DeathImpulseImpactPoint);
    DOREPLIFETIME(URSTDeathEvent_AIDeathStarted, DeathImpulseBoneName);
    DOREPLIFETIME(URSTDeathEvent_AIDeathStarted, DeathVelocity);
}



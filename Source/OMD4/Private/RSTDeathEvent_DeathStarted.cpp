#include "RSTDeathEvent_DeathStarted.h"
#include "Net/UnrealNetwork.h"

URSTDeathEvent_DeathStarted::URSTDeathEvent_DeathStarted() {
    this->Instigator = NULL;
}

void URSTDeathEvent_DeathStarted::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(URSTDeathEvent_DeathStarted, Instigator);
    DOREPLIFETIME(URSTDeathEvent_DeathStarted, InstigatorTags);
    DOREPLIFETIME(URSTDeathEvent_DeathStarted, TargetTags);
    DOREPLIFETIME(URSTDeathEvent_DeathStarted, DeathSourceTags);
}



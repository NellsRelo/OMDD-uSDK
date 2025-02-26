#include "RSTDeathEvent_Downed.h"
#include "Net/UnrealNetwork.h"

URSTDeathEvent_Downed::URSTDeathEvent_Downed() {
    this->Instigator = NULL;
}

void URSTDeathEvent_Downed::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(URSTDeathEvent_Downed, Instigator);
}



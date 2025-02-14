#include "RSTDeathEvent_Revived.h"
#include "Net/UnrealNetwork.h"

URSTDeathEvent_Revived::URSTDeathEvent_Revived() {
    this->Instigator = NULL;
}

void URSTDeathEvent_Revived::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(URSTDeathEvent_Revived, Instigator);
}



#include "RSTCueData_DaggerSpecial.h"
#include "Net/UnrealNetwork.h"

URSTCueData_DaggerSpecial::URSTCueData_DaggerSpecial() {
}

void URSTCueData_DaggerSpecial::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(URSTCueData_DaggerSpecial, ExplosionLocations);
}



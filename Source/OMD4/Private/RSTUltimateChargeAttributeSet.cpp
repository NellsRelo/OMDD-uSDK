#include "RSTUltimateChargeAttributeSet.h"
#include "Net/UnrealNetwork.h"

URSTUltimateChargeAttributeSet::URSTUltimateChargeAttributeSet() {
}

void URSTUltimateChargeAttributeSet::OnRep_UltimateCharge(const FGameplayAttributeData& OldValue) {
}

void URSTUltimateChargeAttributeSet::OnRep_MaxUltimateCharge(const FGameplayAttributeData& OldValue) {
}

void URSTUltimateChargeAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(URSTUltimateChargeAttributeSet, UltimateCharge);
    DOREPLIFETIME(URSTUltimateChargeAttributeSet, MaxUltimateCharge);
}



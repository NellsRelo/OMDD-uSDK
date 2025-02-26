#include "RSTDownedChargeAttributeSet.h"
#include "Net/UnrealNetwork.h"

URSTDownedChargeAttributeSet::URSTDownedChargeAttributeSet() {
}

void URSTDownedChargeAttributeSet::OnRep_MaxDownedCharge(const FGameplayAttributeData& OldValue) {
}

void URSTDownedChargeAttributeSet::OnRep_DownedCharge(const FGameplayAttributeData& OldValue) {
}

void URSTDownedChargeAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(URSTDownedChargeAttributeSet, DownedCharge);
    DOREPLIFETIME(URSTDownedChargeAttributeSet, MaxDownedCharge);
}



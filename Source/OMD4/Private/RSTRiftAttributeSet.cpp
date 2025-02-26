#include "RSTRiftAttributeSet.h"
#include "Net/UnrealNetwork.h"

URSTRiftAttributeSet::URSTRiftAttributeSet() {
}

void URSTRiftAttributeSet::OnRep_LightningRadius(const FGameplayAttributeData& OldValue) {
}

void URSTRiftAttributeSet::OnRep_LightningCooldownMin(const FGameplayAttributeData& OldValue) {
}

void URSTRiftAttributeSet::OnRep_LightningCooldownMax(const FGameplayAttributeData& OldValue) {
}

void URSTRiftAttributeSet::OnRep_InfluenceRadius(const FGameplayAttributeData& OldValue) {
}

void URSTRiftAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(URSTRiftAttributeSet, InfluenceRadius);
    DOREPLIFETIME(URSTRiftAttributeSet, LightningRadius);
    DOREPLIFETIME(URSTRiftAttributeSet, LightningCooldownMin);
    DOREPLIFETIME(URSTRiftAttributeSet, LightningCooldownMax);
}



#include "RSTHealthSet.h"
#include "Net/UnrealNetwork.h"

URSTHealthSet::URSTHealthSet() {
}

void URSTHealthSet::OnRep_Shield(const FGameplayAttributeData& OldValue) {
}

void URSTHealthSet::OnRep_MaxShield(const FGameplayAttributeData& OldValue) {
}

void URSTHealthSet::OnRep_MaxHealth(const FGameplayAttributeData& OldValue) {
}

void URSTHealthSet::OnRep_Lifespan(const FGameplayAttributeData& OldValue) {
}

void URSTHealthSet::OnRep_Health(const FGameplayAttributeData& OldValue) {
}

void URSTHealthSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(URSTHealthSet, Health);
    DOREPLIFETIME(URSTHealthSet, MaxHealth);
    DOREPLIFETIME(URSTHealthSet, LifeSpan);
    DOREPLIFETIME(URSTHealthSet, Shield);
    DOREPLIFETIME(URSTHealthSet, MaxShield);
}



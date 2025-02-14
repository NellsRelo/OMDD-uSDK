#include "RSTCombatSet.h"
#include "Net/UnrealNetwork.h"

URSTCombatSet::URSTCombatSet() {
}

void URSTCombatSet::OnRep_StatusEffectDurationScale(const FGameplayAttributeData& OldValue) {
}

void URSTCombatSet::OnRep_SpecialRechargeRate(const FGameplayAttributeData& OldValue) {
}

void URSTCombatSet::OnRep_SpecialCharges(const FGameplayAttributeData& OldValue) {
}

void URSTCombatSet::OnRep_SecondaryRechargeRate(const FGameplayAttributeData& OldValue) {
}

void URSTCombatSet::OnRep_SecondaryCharges(const FGameplayAttributeData& OldValue) {
}

void URSTCombatSet::OnRep_PrimaryCharges(const FGameplayAttributeData& OldValue) {
}

void URSTCombatSet::OnRep_NonHeadshotDamageFactor(const FGameplayAttributeData& OldValue) {
}

void URSTCombatSet::OnRep_MaxSpecialCharges(const FGameplayAttributeData& OldValue) {
}

void URSTCombatSet::OnRep_MaxSecondaryCharges(const FGameplayAttributeData& OldValue) {
}

void URSTCombatSet::OnRep_MaxPrimaryCharges(const FGameplayAttributeData& OldValue) {
}

void URSTCombatSet::OnRep_MaxPrimaryChargeBonus(const FGameplayAttributeData& OldValue) {
}

void URSTCombatSet::OnRep_HealPercentMaxHealth(const FGameplayAttributeData& OldValue) {
}

void URSTCombatSet::OnRep_HeadshotDamageFactor(const FGameplayAttributeData& OldValue) {
}

void URSTCombatSet::OnRep_CriticalHitFactor(const FGameplayAttributeData& OldValue) {
}

void URSTCombatSet::OnRep_CriticalHitDamageScale(const FGameplayAttributeData& OldValue) {
}

void URSTCombatSet::OnRep_BaseShieldHeal(const FGameplayAttributeData& OldValue) {
}

void URSTCombatSet::OnRep_BaseHeal(const FGameplayAttributeData& OldValue) {
}

void URSTCombatSet::OnRep_BaseDamage(const FGameplayAttributeData& OldValue) {
}

void URSTCombatSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(URSTCombatSet, BaseDamage);
    DOREPLIFETIME(URSTCombatSet, BaseHeal);
    DOREPLIFETIME(URSTCombatSet, BaseShieldHeal);
    DOREPLIFETIME(URSTCombatSet, HealPercentMaxHealth);
    DOREPLIFETIME(URSTCombatSet, PrimaryCharges);
    DOREPLIFETIME(URSTCombatSet, SecondaryCharges);
    DOREPLIFETIME(URSTCombatSet, SpecialCharges);
    DOREPLIFETIME(URSTCombatSet, MaxPrimaryCharges);
    DOREPLIFETIME(URSTCombatSet, MaxSecondaryCharges);
    DOREPLIFETIME(URSTCombatSet, MaxSpecialCharges);
    DOREPLIFETIME(URSTCombatSet, MaxPrimaryChargeBonus);
    DOREPLIFETIME(URSTCombatSet, SecondaryRechargeRate);
    DOREPLIFETIME(URSTCombatSet, SpecialRechargeRate);
    DOREPLIFETIME(URSTCombatSet, HeadshotDamageFactor);
    DOREPLIFETIME(URSTCombatSet, NonHeadshotDamageFactor);
    DOREPLIFETIME(URSTCombatSet, CriticalHitFactor);
    DOREPLIFETIME(URSTCombatSet, CriticalHitDamageScale);
    DOREPLIFETIME(URSTCombatSet, StatusEffectDurationScale);
}



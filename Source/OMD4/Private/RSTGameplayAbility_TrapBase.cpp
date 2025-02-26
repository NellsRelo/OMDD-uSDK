#include "RSTGameplayAbility_TrapBase.h"

URSTGameplayAbility_TrapBase::URSTGameplayAbility_TrapBase() {
    this->Cooldown = 0.00f;
    this->DamageEffectClass = NULL;
    this->DamageValue = 0.00f;
    this->CriticalHitFactor = 0.00f;
    this->GibChance = 0.00f;
    this->LaunchedGibChance = -1.00f;
    this->DeathImpulseForce = 100000.00f;
    this->bApplyInterrupt = false;
    this->InterruptScale = 1.00f;
    this->ActivationDelay = 0.00f;
    this->MaxCharges = 0;
    this->BonusActivationCount = 0;
    this->DisableOnActivationDuration = 0.00f;
    this->DisableOnActivationChance = 0.00f;
    this->MovementSpeedModifier = 1.00f;
    this->StatusEffectDuration = 0.00f;
    this->StatusEffectDamage = 0.00f;
    this->StatusEffectDamageScale = 0.00f;
    this->StatusEffectChanceToApply = 1.00f;
    this->PreviousMaxCharges = 0;
}

void URSTGameplayAbility_TrapBase::RemoveDamageEffectsFromTarget(UAbilitySystemComponent* TargetASC) {
}

ARSTTrap* URSTGameplayAbility_TrapBase::GetTrap() const {
    return NULL;
}

float URSTGameplayAbility_TrapBase::GetDamageValue_Implementation() const {
    return 0.0f;
}

bool URSTGameplayAbility_TrapBase::GatherNewTargets(TArray<AActor*>& AllTargets, TArray<AActor*>& NewTargets) const {
    return false;
}

bool URSTGameplayAbility_TrapBase::ApplyDamageEffectToTarget(FGameplayAbilityTargetDataHandle TargetHandle, const TMap<FGameplayTag, float>& AdditionalSetByCallerOverrides) {
    return false;
}



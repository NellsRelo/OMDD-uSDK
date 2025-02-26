#include "RSTGameplayAbility_CombatBase.h"

URSTGameplayAbility_CombatBase::URSTGameplayAbility_CombatBase() {
    this->bRecordAbilityEndTime = true;
    this->bUseCloseDistance = false;
    this->CloseDistance = 0.00f;
    this->bHasIgnoredLookInput = false;
    this->bSupportsMoveCancelling = false;
    this->MoveCancelThreshold = 0.25f;
    this->MoveCancelTaskHandle = NULL;
    this->DamageEffectClass = NULL;
    this->BaseDamage = 0.00f;
    this->AirborneDamageModifier = 1.00f;
    this->CriticalHitFactor = 0.00f;
    this->CriticalHitDamageScale = 0.00f;
    this->GibChance = 0.00f;
    this->LaunchedGibChance = -1.00f;
    this->DeathImpulseForce = 100000.00f;
    this->bApplyInterrupt = false;
    this->InterruptScale = 1.00f;
    this->AIWeight = 1.00f;
    this->TargetingData = NULL;
    this->bStopMovementOnActivation = true;
    this->bSelectOnCooldown = true;
    this->bOrientToTarget = true;
    this->AIOwner = NULL;
    this->AITarget = NULL;
    this->AIOwnerController = NULL;
    this->AIASC = NULL;
    this->AITargetASC = NULL;
    this->AimSlowScale = 1.00f;
    this->bHasAppliedAimSlowing = false;
}

void URSTGameplayAbility_CombatBase::UnlockAiming() {
}

void URSTGameplayAbility_CombatBase::SetAimSpeedScale(float Scale) {
}

bool URSTGameplayAbility_CombatBase::SelectOnCooldown() {
    return false;
}

bool URSTGameplayAbility_CombatBase::OrientToTarget() {
    return false;
}

void URSTGameplayAbility_CombatBase::OnMoveCancelInputDetected(FVector LastInput) {
}

void URSTGameplayAbility_CombatBase::LockAiming() {
}

bool URSTGameplayAbility_CombatBase::IsValidTarget(AActor* SourceActor, AActor* TargetActor, bool bIsBlockedToRift, float& OutThreatAdj, ERSTInvalidTargetReason& OutInvalidReason) {
    return false;
}

bool URSTGameplayAbility_CombatBase::IsRanged() {
    return false;
}

bool URSTGameplayAbility_CombatBase::InitAIVariables(bool bIncludeTarget) {
    return false;
}

void URSTGameplayAbility_CombatBase::GetRange(FRSTRange& OutRange) {
}

float URSTGameplayAbility_CombatBase::GetCloseDistance() {
    return 0.0f;
}

float URSTGameplayAbility_CombatBase::GetAIWeight() {
    return 0.0f;
}

void URSTGameplayAbility_CombatBase::ClearAimSlowing() {
}

bool URSTGameplayAbility_CombatBase::BP_IsRanged_Implementation() {
    return false;
}

void URSTGameplayAbility_CombatBase::BP_GetRange_Implementation(FRSTRange& OutRange) {
}

bool URSTGameplayAbility_CombatBase::ApplyDamageEffectToTarget(FGameplayAbilityTargetDataHandle TargetHandle) {
    return false;
}

bool URSTGameplayAbility_CombatBase::ApplyDamageEffect(URSTAbilitySystemComponent* TargetASC, const FHitResult& Hit) {
    return false;
}

void URSTGameplayAbility_CombatBase::ApplyAimSlowing() {
}



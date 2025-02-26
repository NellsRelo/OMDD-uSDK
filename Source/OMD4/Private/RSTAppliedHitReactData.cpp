#include "RSTAppliedHitReactData.h"

URSTAppliedHitReactData::URSTAppliedHitReactData() {
    this->KnockbackDistance = 0.00f;
    this->KnockbackHeight = 0.00f;
    this->KnockbackType = EKnockbackType::None;
    this->KnockbackDuration = 0.00f;
    this->DamageImmunityDuration = 0.00f;
    this->InterruptAmount = -1.00f;
    this->bFlinch = false;
}

URSTAppliedHitReactData* URSTAppliedHitReactData::CreateAppliedHitReactData(FVector InKnockbackDirection, float InKnockbackDistance, float InKnockbackHeight, EKnockbackType InKnockbackType, float InKnockbackDuration, float InDamageImmunityDuration, float InInterruptDuration) {
    return NULL;
}



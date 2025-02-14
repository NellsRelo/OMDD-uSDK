#include "RSTGameplayAbility_Ranged_Held.h"

URSTGameplayAbility_Ranged_Held::URSTGameplayAbility_Ranged_Held() {
    this->HeldStartSection = TEXT("Start");
    this->HeldLoopSection = TEXT("Loop");
    this->HeldEndSection = TEXT("Release");
    this->bShowAimIndicator = false;
    this->AimIndicatorParticleSystem = NULL;
    this->bShowHitIndicator = false;
    this->HitIndicatorClass = NULL;
    this->AimIndicatorMaxDuration = 5.00f;
    this->AimIndicatorInterval = 15.00f;
    this->DefaultHitIndicatorScale = 0.00f;
    this->bAimIndicatorIgnoreSelf = false;
    this->AimIndicatorCollisionType = ERSTProjectilePathCollisionMethod::Profile;
    this->AimPredictorChannel = ECC_WorldStatic;
    this->AimIndicatorTask = NULL;
}

FVector URSTGameplayAbility_Ranged_Held::GetAimIndicatorVelocity() {
    return FVector{};
}

FVector URSTGameplayAbility_Ranged_Held::GetAimIndicatorSource() {
    return FVector{};
}




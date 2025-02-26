#include "RSTGameplayAbility_RangedWeapon.h"
#include "Templates/SubclassOf.h"

URSTGameplayAbility_RangedWeapon::URSTGameplayAbility_RangedWeapon() {
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->bDelayAbilityCommit = false;
    this->MontageIndex = 0;
    this->bDoPredictiveAiming = true;
    this->bPerformRangedTargeting = true;
    this->TargetingMethod = ERSTRangedFireGroupTargetingMethod::IndependentTargeting;
    this->bOverrideAimTraceDistance = false;
    this->OverrideAimTraceDistance = 0.00f;
    this->AimMode = ERSTRangedAimMode::Linear;
    this->bFavorHighArc = false;
    this->bXYVelocityOnly = false;
    this->ProjectileLaunchSpeed = 5000.00f;
    this->DesiredArcRelativeHeight = 0.00f;
    this->MinDistanceFixedHeight = 0.00f;
    this->MontageTask = NULL;
    this->ProjectileClass = NULL;
    this->ProjectileLifeSpan = 10.00f;
    this->OverrideProjectileGravityScale = -1.00f;
    this->HeadshotDamageFactor = 0.00f;
    this->PierceCount = 0;
    this->PierceChance = 1.00f;
    this->BounceCount = 0;
    this->HomingAcceleration = 0.00f;
    this->ProjectileHitDataPreset = NULL;
    this->ProjectileHitDataElements = NULL;
    this->bUseAvatarInstigatorAsProjectileInstigator = false;
    this->AimingSpeedModifierEffect = NULL;
    this->AimingSpeedModifierRemovalEffect = NULL;
    this->InitialSpreadHorizontalAngle = 0.00f;
    this->InitialSpreadVerticalAngle = 0.00f;
    this->SpreadHorizontalOffset = 0.00f;
    this->SpreadVerticalOffset = 0.00f;
    this->bUseBloom = false;
    this->MaxHorizontalBloom = 0.00f;
    this->MaxVerticalBloom = 0.00f;
    this->BloomIncrementPercentage = 0.00f;
    this->BloomRecoveryMaxTime = 0.00f;
    this->BloomRecoveryDelay = 0.00f;
    this->bUseRecoil = false;
    this->RecoilCurve = NULL;
    this->RecoilRecoveryCurve = NULL;
    this->RecoilDuration = 0.00f;
    this->RecoilRecoveryDelay = 0.00f;
    this->RecoilRecoveryDuration = 0.00f;
    this->MaxHorizontalRecoilExtent = 0.00f;
    this->MaxVerticalRecoilExtent = 0.00f;
    this->MaxSameHorizontalDirectionCount = 0;
    this->MaxSameVerticalDirectionCount = 0;
    this->HorizontalDirectionCount = 0;
    this->VerticalDirectionCount = 0;
    this->DistanceDamageFalloff = NULL;
}

bool URSTGameplayAbility_RangedWeapon::TryOverrideTargetLocation(FVector FireLocation, FVector& OutTargetLocation) const {
    return false;
}

void URSTGameplayAbility_RangedWeapon::StartFiringSequence() {
}

void URSTGameplayAbility_RangedWeapon::Server_ProcessFireProjectile_Implementation(FPredictionKey PredictionKey, const FGameplayTag& FirePointIdentifier, const TArray<FRSTProjectileFiringParameters>& FireData) {
}
bool URSTGameplayAbility_RangedWeapon::Server_ProcessFireProjectile_Validate(FPredictionKey PredictionKey, const FGameplayTag& FirePointIdentifier, const TArray<FRSTProjectileFiringParameters>& FireData) {
    return true;
}

void URSTGameplayAbility_RangedWeapon::OnMontageInterrupted() {
}

void URSTGameplayAbility_RangedWeapon::OnMontageCompleted() {
}

void URSTGameplayAbility_RangedWeapon::OnMontageCancelled() {
}

void URSTGameplayAbility_RangedWeapon::OnMontageBlendOut() {
}

bool URSTGameplayAbility_RangedWeapon::GetTargetedActorLocation(const FVector& Source, FVector& OutLocation) const {
    return false;
}

AActor* URSTGameplayAbility_RangedWeapon::GetTargetedActor() const {
    return NULL;
}

float URSTGameplayAbility_RangedWeapon::GetProjectileSpeed() const {
    return 0.0f;
}

bool URSTGameplayAbility_RangedWeapon::GetProjectileLaunchParameters_Implementation(FGameplayTag FirePointIdentifier, const float AnimationTime, TArray<FRSTProjectileFiringParameters>& OutFireData) const {
    return false;
}

float URSTGameplayAbility_RangedWeapon::GetProjectileGravityScale() const {
    return 0.0f;
}

TSubclassOf<ARSTProjectile> URSTGameplayAbility_RangedWeapon::GetPrimaryProjectileClass() const {
    return NULL;
}

//TArray<FGameplayTagPair> URSTGameplayAbility_RangedWeapon::GetFireCueTagParameters_Implementation() const {
//    return TArray<FGameplayTagPair>();
//}

TArray<FRSTProjectileFiringParameters> URSTGameplayAbility_RangedWeapon::BP_ModifyFireData_Implementation(const TArray<FRSTProjectileFiringParameters>& InOutFireData) const {
    return TArray<FRSTProjectileFiringParameters>();
}



TSubclassOf<ARSTProjectile> URSTGameplayAbility_RangedWeapon::BP_GetProjectileClass_Implementation(const FGameplayTag& FirePoint, int32 Index) const {
    return NULL;
}





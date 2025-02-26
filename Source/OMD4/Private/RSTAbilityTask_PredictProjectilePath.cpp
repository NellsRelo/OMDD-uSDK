#include "RSTAbilityTask_PredictProjectilePath.h"
#include "Templates/SubclassOf.h"

URSTAbilityTask_PredictProjectilePath::URSTAbilityTask_PredictProjectilePath() {
    this->ParticleSystem = NULL;
    this->HitIndicatorClass = NULL;
    this->ProjectileClass = NULL;
    this->HitIndicator = NULL;
}

URSTAbilityTask_PredictProjectilePath* URSTAbilityTask_PredictProjectilePath::PredictProjectilePath_TraceChannel(UGameplayAbility* OwningAbility, UFXSystemAsset* NewParticleSystem, TSubclassOf<AActor> NewHitIndicatorClass, TSubclassOf<ARSTProjectile> NewProjectileClass, float ProjectileRadius, bool bOverrideProjectileGravity, float ProjectileGravity, bool bIgnoreSelf, TArray<AActor*> ActorsToIgnore, TEnumAsByte<ECollisionChannel> TraceChannel, FRSTProjectilePathDelegate LocationDelegate, FRSTProjectilePathDelegate VelocityDelegate, float HitIndicatorScale, float OverrideGravityZ, bool bTraceComplex, float DrawDebugTime, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, float MaxSimTime, float SimFrequency) {
    return NULL;
}

URSTAbilityTask_PredictProjectilePath* URSTAbilityTask_PredictProjectilePath::PredictProjectilePath_Profile(UGameplayAbility* OwningAbility, UFXSystemAsset* NewParticleSystem, TSubclassOf<AActor> NewHitIndicatorClass, TSubclassOf<ARSTProjectile> NewProjectileClass, float ProjectileRadius, bool bOverrideProjectileGravity, float ProjectileGravity, bool bIgnoreSelf, TArray<AActor*> ActorsToIgnore, FCollisionProfileName TraceProfile, FRSTProjectilePathDelegate LocationDelegate, FRSTProjectilePathDelegate VelocityDelegate, float HitIndicatorScale, float OverrideGravityZ, bool bTraceComplex, float DrawDebugTime, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, float MaxSimTime, float SimFrequency) {
    return NULL;
}

URSTAbilityTask_PredictProjectilePath* URSTAbilityTask_PredictProjectilePath::PredictProjectilePath_ObjectChannel(UGameplayAbility* OwningAbility, UFXSystemAsset* NewParticleSystem, TSubclassOf<AActor> NewHitIndicatorClass, TSubclassOf<ARSTProjectile> NewProjectileClass, float ProjectileRadius, bool bOverrideProjectileGravity, float ProjectileGravity, bool bIgnoreSelf, TArray<AActor*> ActorsToIgnore, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, FRSTProjectilePathDelegate LocationDelegate, FRSTProjectilePathDelegate VelocityDelegate, float HitIndicatorScale, float OverrideGravityZ, bool bTraceComplex, float DrawDebugTime, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, float MaxSimTime, float SimFrequency) {
    return NULL;
}



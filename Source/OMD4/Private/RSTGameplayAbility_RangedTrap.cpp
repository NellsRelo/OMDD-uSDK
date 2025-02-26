#include "RSTGameplayAbility_RangedTrap.h"
#include "Templates/SubclassOf.h"

URSTGameplayAbility_RangedTrap::URSTGameplayAbility_RangedTrap() {
    this->ProjectileClass = NULL;
    this->ProjectileSpeed = 6000.00f;
    this->MaxProjectileSpeed = 6000.00f;
    this->ProjectileLifeSpan = 0.30f;
    this->PierceCount = 0;
    this->BounceCount = 0;
    this->bUseMaxProjectileSpeed = false;
    this->OverrideProjectileGravityScale = -1.00f;
}

float URSTGameplayAbility_RangedTrap::GetProjectileGravityScale() const {
    return 0.0f;
}

TSubclassOf<ARSTProjectile> URSTGameplayAbility_RangedTrap::GetProjectileClass_Implementation() const {
    return NULL;
}

ARSTProjectile* URSTGameplayAbility_RangedTrap::FireProjectileWithTransform(const FTransform& SpawnTransform) {
    return NULL;
}

ARSTProjectile* URSTGameplayAbility_RangedTrap::FireProjectile(FVector Location, FVector Direction) {
    return NULL;
}



#include "RSTNewProjectileData.h"

FRSTNewProjectileData::FRSTNewProjectileData() {
    this->DamageEffectClass = NULL;
    this->InitialSpeed = 0.00f;
    this->MaxSpeed = 0.00f;
    this->DamageValue = 0.00f;
    this->HeadshotDamageFactor = 0.00f;
    this->CriticalHitFactor = 0.00f;
    this->CriticalHitDamageScale = 0.00f;
    this->bApplyInterrupt = false;
    this->InterruptScale = 0.00f;
    this->AbilityCDO = NULL;
    this->GibChance = 0.00f;
    this->LaunchedGibChance = 0.00f;
    this->DeathImpulseForce = 0.00f;
    this->bInitialVelocityInLocalSpace = false;
    this->HitData = NULL;
    this->LifeSpan = 0.00f;
    this->bStartDormant = false;
    this->PierceCount = 0;
    this->BounceCount = 0;
    this->DistanceDamageFalloff = NULL;
    this->GravityScale = 0.00f;
    this->HomingAcceleration = 0.00f;
}


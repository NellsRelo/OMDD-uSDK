#include "RSTOnslaughtComponentCrystalDefense.h"

URSTOnslaughtComponentCrystalDefense::URSTOnslaughtComponentCrystalDefense(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HealthPerRiftPoint = 1000.00f;
    this->DifficultyHealthMultiplier = 0.20f;
}

void URSTOnslaughtComponentCrystalDefense::OnRiftHealingTaken(URSTHealthComponent* HealthComp, float Healing, AActor* Causer, const FHitResult& HitResult, bool bHasSpec, const FGameplayEffectSpec& Spec) {
}

void URSTOnslaughtComponentCrystalDefense::OnRiftDamageTaken(URSTHealthComponent* HealthComp, float Damage, AActor* DamageCauser, const FHitResult& HitResult, bool bHasSpec, const FGameplayEffectSpec& Spec) {
}



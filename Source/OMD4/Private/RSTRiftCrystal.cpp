#include "RSTRiftCrystal.h"
#include "Components/BoxComponent.h"
#include "NavPowerObstructionComponent.h"
#include "RSTAttackLocationsComponent.h"
#include "RSTHealthComponent.h"

ARSTRiftCrystal::ARSTRiftCrystal(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HealthComponent = CreateDefaultSubobject<URSTHealthComponent>(TEXT("HealthComponent"));
    this->GeneratedBoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("GeneratedBoxCollision"));
    this->AttackLocsComponent = CreateDefaultSubobject<URSTAttackLocationsComponent>(TEXT("AttackLocationsComp"));
    this->ThreatValue = 0.00f;
    this->NavPowerObstructionComponent = CreateDefaultSubobject<UNavPowerObstructionComponent>(TEXT("NavPowerObstruction"));
    this->AttackLocsComponent->SetupAttachment(RootComponent);
    this->GeneratedBoxCollision->SetupAttachment(RootComponent);
    this->NavPowerObstructionComponent->SetupAttachment(RootComponent);
}

void ARSTRiftCrystal::OnDeathStarted(AActor* OwningActor, const AActor* InInstigator) {
}

void ARSTRiftCrystal::OnDamageTaken(URSTHealthComponent* HealthComp, float Damage, AActor* DamageCauser, const FHitResult& HitResult, bool bHasSpec, const FGameplayEffectSpec& Spec) {
}



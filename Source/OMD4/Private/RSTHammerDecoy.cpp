#include "RSTHammerDecoy.h"
#include "Components/CapsuleComponent.h"
#include "RSTAttackLocationsComponent.h"
#include "RSTHealthComponent.h"

ARSTHammerDecoy::ARSTHammerDecoy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bNetLoadOnClient = false;
    this->NetDormancy = DORM_Initial;
    this->InitialHealth = 0.00f;
    this->CollisionComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CollisionComponent"));
    this->HealthComponent = CreateDefaultSubobject<URSTHealthComponent>(TEXT("HealthComponent"));
    this->AttackLocationsComp = CreateDefaultSubobject<URSTAttackLocationsComponent>(TEXT("AttackLocations"));
    this->ThreatValue = 0.00f;
    this->DefaultThreatCap = 0;
    this->LargeThreatCap = 0;
    this->RangedThreatCap = 0;
    this->HuntersThreatCap = 0;
    this->BossThreatCap = 0;
    this->AttackLocationsComp->SetupAttachment(RootComponent);
    this->CollisionComponent->SetupAttachment(RootComponent);
}

ETeamAttitude::Type ARSTHammerDecoy::GetTeamAttitudeTowardsActor_Implementation(const AActor* Other) const {
    return ETeamAttitude::Friendly;
}

ERSTTeams ARSTHammerDecoy::GetTeam_Implementation() const {
    return ERSTTeams::Players;
}



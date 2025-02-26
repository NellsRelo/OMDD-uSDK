#include "RSTBlunderbussPet.h"
#include "SkeletalMeshComponentBudgeted.h"
#include "RSTRangedCombatComponent.h"

ARSTBlunderbussPet::ARSTBlunderbussPet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RangedCombatComponent = CreateDefaultSubobject<URSTRangedCombatComponent>(TEXT("RangedCombatComponent"));
    this->PetMesh = CreateDefaultSubobject<USkeletalMeshComponentBudgeted>(TEXT("Mesh"));
    this->PetMesh->SetupAttachment(RootComponent);
}

ETeamAttitude::Type ARSTBlunderbussPet::GetTeamAttitudeTowardsActor_Implementation(const AActor* Other) const {
    return ETeamAttitude::Friendly;
}

ERSTTeams ARSTBlunderbussPet::GetTeam_Implementation() const {
    return ERSTTeams::Players;
}



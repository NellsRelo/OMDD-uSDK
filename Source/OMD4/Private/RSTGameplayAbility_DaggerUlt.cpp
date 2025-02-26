#include "RSTGameplayAbility_DaggerUlt.h"

URSTGameplayAbility_DaggerUlt::URSTGameplayAbility_DaggerUlt() {
    this->HorizontalNavMeshSnapThreshold = 100.00f;
    this->VerticalNavMeshSnapThreshold = 100.00f;
    this->MinDistanceFromAvatar = 50.00f;
    this->bRequireInFrontOfAvatar = false;
    this->FollowRadius = 0.00f;
}

void URSTGameplayAbility_DaggerUlt::OnSpawnedActorDeathStarted(ARSTCharacter* OwningActor) {
}

ARSTCharacter* URSTGameplayAbility_DaggerUlt::GetSummonedActor() const {
    return NULL;
}



#include "RSTAnimInstanceEnemy.h"

URSTAnimInstanceEnemy::URSTAnimInstanceEnemy() {
    this->bIsDead = false;
    this->bUseGroundedPoseSnapshot = false;
    this->bUseFrozenPoseSnapshot = false;
}

void URSTAnimInstanceEnemy::EnableRagdoll() {
}

void URSTAnimInstanceEnemy::DoDie(const FGameplayTag& StatusAnimationTag) {
}



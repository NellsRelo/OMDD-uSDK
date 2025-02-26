#include "RSTHitFlashComponent.h"

URSTHitFlashComponent::URSTHitFlashComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HitFlashDuration = 1.00f;
    this->HitFlashTimeScale = 1.00f;
    this->bAutoEndOnEvaluatedZero = true;
    this->HitFlashParameterName = TEXT("HitFlash");
}

void URSTHitFlashComponent::TriggerHitFlash() {
}

void URSTHitFlashComponent::OnMeshesChanged() {
}

URSTHitFlashComponent* URSTHitFlashComponent::FindHitFlashComponent(const AActor* Actor) {
    return NULL;
}



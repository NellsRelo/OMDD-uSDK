#include "RSTRecoilComponent.h"

URSTRecoilComponent::URSTRecoilComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bHasRecoilData = false;
    this->RecoilTimeElapsed = 0.00f;
}

void URSTRecoilComponent::StopRecoil(bool bSnapToOriginalAim) {
}

URSTRecoilComponent* URSTRecoilComponent::FindRecoilComponent(const AActor* Actor) {
    return NULL;
}

void URSTRecoilComponent::ApplyRecoil(FRSTRecoilData RecoilData) {
}



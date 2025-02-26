#include "RSTNameplateSourceComponent.h"

URSTNameplateSourceComponent::URSTNameplateSourceComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bClampToScreen = false;
    this->bShowClampToScreenArrow = false;
}

URSTNameplateSourceComponent* URSTNameplateSourceComponent::FindNameplateSourceComponent(const AActor* Actor) {
    return NULL;
}



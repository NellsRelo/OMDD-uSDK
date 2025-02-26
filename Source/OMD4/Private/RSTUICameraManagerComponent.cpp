#include "RSTUICameraManagerComponent.h"

URSTUICameraManagerComponent::URSTUICameraManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ViewTarget = NULL;
    this->bUpdatingViewTarget = false;
}



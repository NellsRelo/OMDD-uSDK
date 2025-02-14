#include "RSTTrapGridBoxComponent.h"

URSTTrapGridBoxComponent::URSTTrapGridBoxComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Mobility = EComponentMobility::Static;
    this->TrapGridRevealPlane = NULL;
    this->TrapPlacementTypes = 0;
}



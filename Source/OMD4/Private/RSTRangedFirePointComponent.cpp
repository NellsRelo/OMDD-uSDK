#include "RSTRangedFirePointComponent.h"

URSTRangedFirePointComponent::URSTRangedFirePointComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBePrimary = true;
    this->bInactiveWhenHidden = true;
}



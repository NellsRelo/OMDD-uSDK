#include "RSTTrapDefinition.h"

URSTTrapDefinition::URSTTrapDefinition() {
    this->PlacementCost = 0;
    this->TrapPlacementTypes = 0;
    this->bCanRotate = false;
    this->bUseHalfSizePlacement = false;
    this->bIgnoreGridSnapping = false;
    this->bDynamicTriggerVolume = false;
    this->DynamicTriggerVolumeAxis = EAxis::Z;
    this->DefaultThreatCap = 3;
    this->LargeThreatCap = 2;
    this->RangedThreatCap = 2;
    this->HuntersThreatCap = 2;
    this->BossThreatCap = 1;
}

TArray<FGameplayTag> URSTTrapDefinition::GetStatTags() const {
    return TArray<FGameplayTag>();
}



#include "RSTNewTrapData.h"

FRSTNewTrapData::FRSTNewTrapData() {
    this->TrapOwner = NULL;
    this->ParentTrap = NULL;
    this->TrapPlacementTypes = ERSTTrapPlacementFlags::None;
    this->LastPlacementFailureReason = ERSTTrapPlacementFailureReason::Unknown;
    this->bIsBeingPlaced = false;
    this->bIsPlacementValid = false;
    this->bHasEnoughCoin = false;
    this->bHasReachedPlacementLimit = false;
}


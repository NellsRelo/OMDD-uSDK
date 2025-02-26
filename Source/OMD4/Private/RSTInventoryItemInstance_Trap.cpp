#include "RSTInventoryItemInstance_Trap.h"

ARSTInventoryItemInstance_Trap::ARSTInventoryItemInstance_Trap(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TrapPlacementTypes = ERSTTrapPlacementFlags::None;
    this->PlacementCost = 300.00f;
    this->bAverageTrapCost = false;
}

void ARSTInventoryItemInstance_Trap::Server_SellAllPlacedTraps_Implementation() {
}

void ARSTInventoryItemInstance_Trap::SellAllPlacedTraps() {
}

bool ARSTInventoryItemInstance_Trap::IsTrapPlacementTypesModified() const {
    return false;
}

bool ARSTInventoryItemInstance_Trap::IsPlacementCostModified() const {
    return false;
}

int32 ARSTInventoryItemInstance_Trap::GetPlacementCostUpgradeLevel() const {
    return 0;
}

int32 ARSTInventoryItemInstance_Trap::GetPlacementCostPreviewUpgradeLevel() const {
    return 0;
}

int32 ARSTInventoryItemInstance_Trap::GetPlacementCost() const {
    return 0;
}



#include "RSTInventoryItemDefinition.h"

URSTInventoryItemDefinition::URSTInventoryItemDefinition() {
    this->InstanceClass = NULL;
    this->bPurchasable = false;
    this->bHideInSpellbook = false;
    this->bTransient = false;
}

ARSTInventoryItemInstance* URSTInventoryItemDefinition::SpawnInstanceActor(AActor* Owner, const URSTInventoryItemDefinition* ItemDef) const {
    return NULL;
}



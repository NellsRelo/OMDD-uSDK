#include "RSTPotionDefinition.h"

URSTPotionDefinition::URSTPotionDefinition() {
    this->bEnabled = true;
    this->TileIcon = NULL;
    this->SkullCost = 0;
}

bool URSTPotionDefinition::IsPotionCleanser() const {
    return false;
}



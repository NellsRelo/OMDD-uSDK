#include "RSTMetaThreadDefinition.h"

URSTMetaThreadDefinition::URSTMetaThreadDefinition() {
    this->bHeroLimited = false;
    this->bRequireTeamComposition = false;
    this->bTrapFiltering = false;
    this->bTrapPlacementTypeFilter = false;
    this->TrapPlacementTypeFilter = 0;
    this->bNonLoadoutValid = true;
    this->bAllowInSinglePlayer = true;
    this->bAllowInMultiplayer = true;
    this->SkullCost = 0;
    this->DisplayType = EThreadDisplayType::Generic;
}

bool URSTMetaThreadDefinition::RequiresOwnership() const {
    return false;
}



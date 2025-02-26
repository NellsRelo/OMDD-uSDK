#include "RSTStatusEffectUserFacingData.h"

URSTStatusEffectUserFacingData::URSTStatusEffectUserFacingData() {
    this->StatusEffectTexture = NULL;
    this->bDisplayLocalOnly = false;
}

bool URSTStatusEffectUserFacingData::ShouldDisplayLocalOnly(FGameplayTag Tag) const {
    return false;
}



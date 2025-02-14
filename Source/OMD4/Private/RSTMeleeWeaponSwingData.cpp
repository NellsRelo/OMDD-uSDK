#include "RSTMeleeWeaponSwingData.h"

URSTMeleeWeaponSwingData::URSTMeleeWeaponSwingData() {
    this->SwingMontage = NULL;
    this->AerialSwingMontage = NULL;
    this->DamageFactor = 1.00f;
    this->GibChance = -1.00f;
    this->LaunchedGibChance = -1.00f;
    this->bAllowSwingFiltering = false;
    this->bFilterQuery = true;
    this->bFilterRequiresAll = true;
    this->PlayRate = 1.00f;
    this->HitDataPreset = NULL;
    this->HitDataElements = NULL;
    this->bApplyAerialHitEffect = true;
}



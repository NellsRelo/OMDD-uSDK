#include "RSTGameData.h"

URSTGameData::URSTGameData() {
    this->MinimumCombo = 3;
    this->ComboCoinMultiplier = 0.05f;
    this->LargeCombo = 15;
    this->SoloRiftPointBonus = 10;
    this->CriticalHitDenominator = 0.00f;
    this->InterruptDecayRate = 0.00f;
    this->InterruptResetTime = 0.00f;
    this->InterruptDuration = 0.00f;
    this->LaunchedGameplayEffectClass = NULL;
    this->GetupGameplayEffectClass = NULL;
    this->GrappledGameplayEffectClass = NULL;
    this->PlayerProfileDefaults = NULL;
    this->ScoreToSkullCurve = NULL;
    this->InitialDifficultyToSkullMultiplierCurve = NULL;
    this->ItemUpgradeCost = NULL;
    this->CostToGamblePercentage = 0.00f;
    this->CostToGambleMaximum = 1000;
    this->HeroDraftTime = 15.00f;
    this->HeroDraftBufferTime = 5.00f;
    this->bShuffleDraftOrder = false;
    this->AdvanceBeaconClass = NULL;
    this->DisableTrapGameplayEffectClass = NULL;
    this->NPEInputMappingContext = NULL;
}

URSTGameData* URSTGameData::GetPtr() const {
    return NULL;
}



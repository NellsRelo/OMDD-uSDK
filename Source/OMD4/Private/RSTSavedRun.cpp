#include "RSTSavedRun.h"

FRSTSavedRun::FRSTSavedRun() {
    this->RiftPointsCarryover = 0;
    this->GrantedSkulls = 0;
    this->GrantedSkullsCarriedOver = 0;
    this->GambledSkullsCarriedOver = 0;
    this->SessionSeed = 0;
    this->InitialDifficulty = 0;
    this->FailedMissionIndex = 0;
    this->bIsValid = false;
    this->bCanBeRestored = false;
}


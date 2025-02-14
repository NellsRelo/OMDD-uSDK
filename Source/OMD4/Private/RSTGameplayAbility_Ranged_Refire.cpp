#include "RSTGameplayAbility_Ranged_Refire.h"

URSTGameplayAbility_Ranged_Refire::URSTGameplayAbility_Ranged_Refire() {
    this->RefireStartTime = 0.00f;
    this->RefireTask = NULL;
    this->bUseRetriggerNotify = false;
    this->RefireDelay = 0.00f;
    this->bUseRefireAsCooldown = false;
    this->bTrackFireCount = false;
    this->bAllowHeldAnimState = false;
    this->StartSectionName = TEXT("Start");
    this->LoopSectionName = TEXT("Loop");
    this->EndSectionName = TEXT("Release");
}

void URSTGameplayAbility_Ranged_Refire::OnRefireDelayFinished() {
}



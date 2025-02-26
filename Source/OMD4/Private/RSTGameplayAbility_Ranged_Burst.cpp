#include "RSTGameplayAbility_Ranged_Burst.h"

URSTGameplayAbility_Ranged_Burst::URSTGameplayAbility_Ranged_Burst() {
    this->StartSection = TEXT("Start");
    this->LoopSection = TEXT("Loop");
    this->EndSection = TEXT("Release");
    this->BurstCount = 0;
}



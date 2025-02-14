#include "RSTCueNotify_Magnitude.h"

URSTCueNotify_Magnitude::URSTCueNotify_Magnitude() {
    this->bUseRawMagnitude = true;
    this->bHasMinMagnitude = false;
    this->bMinTriggers = false;
    this->MinRequiredMagnitude = 0.00f;
    this->bHasMaxMagnitude = false;
    this->bMaxTriggers = false;
    this->MaxAllowedMagnitude = 0.00f;
}



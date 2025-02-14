#include "BTTask_NavPowerMoveTo.h"

UBTTask_NavPowerMoveTo::UBTTask_NavPowerMoveTo() {
    this->NodeName = TEXT("NavPower Move To");
    this->bStopAtGoal = true;
    this->bAllowPartial = false;
    this->bPushThroughCrowd = false;
    this->AllowedStopDistance = 5.00f;
    this->bOrientAtGoal = false;
}



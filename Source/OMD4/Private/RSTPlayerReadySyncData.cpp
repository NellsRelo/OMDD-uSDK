#include "RSTPlayerReadySyncData.h"

URSTPlayerReadySyncData::URSTPlayerReadySyncData() {
    this->bCanUnready = true;
    this->bCanUnreadyAfterShortTimerBegins = false;
    this->bAllUnreadyResetsCountdown = false;
    this->BeginType = ERSTPlayerReadySyncBeginType::Instant;
    this->DurationLong = 30.00f;
    this->DurationShort = 3.00f;
}



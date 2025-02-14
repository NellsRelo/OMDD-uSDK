#include "VANotifyEvent.h"

FVANotifyEvent::FVANotifyEvent() {
    this->Type = NotifyTick;
    this->NotifyHandler = NULL;
    this->AnimNotify = NULL;
    this->AnimNotifyState = NULL;
}


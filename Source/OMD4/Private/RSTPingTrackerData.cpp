#include "RSTPingTrackerData.h"

FRSTPingTrackerData::FRSTPingTrackerData() {
    this->PlayerState = NULL;
    this->CommunicationOption = NULL;
    this->AttachedToActor = NULL;
    this->RemainingDuration = 0.00f;
    this->StartTime = 0.00f;
    this->Indicator = NULL;
    this->PingTrackerLocalId = 0;
}


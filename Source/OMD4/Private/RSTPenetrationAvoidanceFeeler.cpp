#include "RSTPenetrationAvoidanceFeeler.h"

FRSTPenetrationAvoidanceFeeler::FRSTPenetrationAvoidanceFeeler() {
    this->WorldWeight = 0.00f;
    this->PawnWeight = 0.00f;
    this->Extent = 0.00f;
    this->TraceInterval = 0;
    this->FramesUntilNextTrace = 0;
}


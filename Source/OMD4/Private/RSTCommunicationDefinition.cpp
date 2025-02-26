#include "RSTCommunicationDefinition.h"

URSTCommunicationDefinition::URSTCommunicationDefinition() {
    this->bAttachCue = false;
    this->bCreatesPing = true;
    this->MaxNumber = 1;
    this->bOverridePingLifespan = false;
    this->OverridePingLifespan = 10.00f;
    this->WheelIcon = NULL;
    this->bCreateWorldPing = true;
    this->TileIcon = NULL;
    this->bCreateMinimapPing = true;
    this->bMinimapDopplerPing = true;
    this->bOverrideDopplerPingLifespan = false;
    this->OverrideDopplerPingLifespan = 0.00f;
    this->bOverrideDopplerPingBrush = false;
    this->bOverrideDopplerPingPeriod = false;
    this->OverrideDopplerPingPeriod = 0.00f;
    this->bOverrideDopplerPingPulseCount = false;
    this->OverrideDopplerPingPulseCount = 0;
    this->OverrideDopplerPingAlphaCurve = NULL;
    this->OverrideDopplerPingScaleCurve = NULL;
    this->bDisplayAsPercent = true;
}



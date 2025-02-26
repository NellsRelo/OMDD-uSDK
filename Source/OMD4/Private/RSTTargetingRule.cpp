#include "RSTTargetingRule.h"

FRSTTargetingRule::FRSTTargetingRule() {
    this->RequiredAttitude = ETeamAttitude::Friendly;
    this->Qualifier = ERSTTargetingQualifier::NotSet;
    this->Acquisition = ERSTTargetingAcquisition::NotSet;
    this->AcquisitionRadius = 0.00f;
    this->ThreatScalar = 0.00f;
}


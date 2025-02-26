#include "RSTAnalyticsSubsystem.h"

URSTAnalyticsSubsystem::URSTAnalyticsSubsystem() {
    this->bAllowRecordAnalytics = true;
}

void URSTAnalyticsSubsystem::StopAnalyticsSession() {
}

void URSTAnalyticsSubsystem::StartAnalyticsSession() {
}

bool URSTAnalyticsSubsystem::IsAllowedToCollectAnalytics() const {
    return false;
}

void URSTAnalyticsSubsystem::ConsentChanged(bool bIsConsentGranted) {
}

bool URSTAnalyticsSubsystem::AreAnalyticsSupported() const {
    return false;
}



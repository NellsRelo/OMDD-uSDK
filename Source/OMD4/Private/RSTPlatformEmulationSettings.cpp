#include "RSTPlatformEmulationSettings.h"

URSTPlatformEmulationSettings::URSTPlatformEmulationSettings() {
    this->bApplyFrameRateSettingsInPIE = false;
    this->bApplyFrontEndPerformanceOptionsInPIE = false;
    this->bApplyDeviceProfilesInPIE = false;
}

TArray<FName> URSTPlatformEmulationSettings::GetKnownPlatformIds() const {
    return TArray<FName>();
}

TArray<FName> URSTPlatformEmulationSettings::GetKnownDeviceProfiles() const {
    return TArray<FName>();
}



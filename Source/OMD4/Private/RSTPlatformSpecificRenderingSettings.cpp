#include "RSTPlatformSpecificRenderingSettings.h"

URSTPlatformSpecificRenderingSettings::URSTPlatformSpecificRenderingSettings() {
    this->bSupportsGranularVideoQualitySettings = true;
    this->bSupportsAutomaticVideoQualityBenchmark = true;
    this->FramePacingMode = ERSTFramePacingMode::DesktopStyle;
    this->MobileFrameRateLimits.AddDefaulted(6);
}



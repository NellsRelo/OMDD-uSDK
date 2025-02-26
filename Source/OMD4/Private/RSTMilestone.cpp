#include "RSTMilestone.h"

URSTMilestone::URSTMilestone() {
    this->bRecordAchievement = false;
    this->bReportAchievementProgress = false;
    this->bUseDynamicFormatting = false;
    this->bIsEnabled = true;
    this->bDisplayProgress = false;
    this->Operation = NULL;
}

bool URSTMilestone::ShouldDisplayProgress() const {
    return false;
}

bool URSTMilestone::IsEnabled() const {
    return false;
}

int32 URSTMilestone::GetTarget(const URSTPlayerProfile* Profile) const {
    return 0;
}

int32 URSTMilestone::GetProgress(const URSTPlayerProfile* Profile) const {
    return 0;
}

FText URSTMilestone::GetDisplayText(const URSTPlayerProfile* Profile) const {
    return FText::GetEmpty();
}



#include "RSTGenericTabWidget.h"

URSTGenericTabWidget::URSTGenericTabWidget() {
    this->bShouldLoopTabID = false;
    this->TabIDMax = 0;
    this->CurrentTabID = 0;
}

bool URSTGenericTabWidget::SetCurrentTabID(int32 NewTabID, bool bAutoCorrect, bool bForceNotify) {
    return false;
}

void URSTGenericTabWidget::IncreaseTabID(int32 amount) {
}

int32 URSTGenericTabWidget::GetTabIDMax_Implementation() {
    return 0;
}

int32 URSTGenericTabWidget::GetCurrentTabID() {
    return 0;
}

void URSTGenericTabWidget::DecreaseTabID(int32 amount) {
}

bool URSTGenericTabWidget::CanIncreaseTabID(int32 amount) {
    return false;
}

bool URSTGenericTabWidget::CanDecreaseTabID(int32 amount) {
    return false;
}




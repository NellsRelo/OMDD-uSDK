#include "RSTTaggedDisplay.h"

URSTTaggedDisplay::URSTTaggedDisplay() : UUserWidget(FObjectInitializer::Get()) {
    this->bUseConditionQuery = false;
    this->bRequireAll = false;
    this->bConditionDrivesParentVisibility = true;
    this->ConditionMetVisibility = ESlateVisibility::SelfHitTestInvisible;
    this->ConditionNotMetVisibility = ESlateVisibility::Hidden;
    this->bTriggerConditionNotMetCallbackOnStartup = false;
}

void URSTTaggedDisplay::OnTagsUpdated(FGameplayTag Tag, int32 Count) {
}

void URSTTaggedDisplay::OnPlayerControllerPlayerStateChanged() {
}



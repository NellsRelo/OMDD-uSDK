#include "RSTActivatableWidget.h"

URSTActivatableWidget::URSTActivatableWidget() {
    this->bDisplayShowAnimationOnActivation = true;
    this->ShowState = ERSTActivatableWidgetShowState::None;
    this->bPopOnUnpossess = false;
    this->bAddIMCOnPossess = false;
    this->bAreInteractablesEnabled = false;
    this->bIsNPEHandler = false;
    this->bApplyNPEIMCOnNPEStart = true;
    this->bApplyNPEIMCOnPossess = true;
    this->bNPEIsActive = false;
    this->CurrentNPEStep = 0;
    this->bIsTabMenuHandler = false;
    this->bCanToggleTabWidget = false;
    this->bCanToggleUIMode = false;
    this->bFlushPressedKeysOnInputModeChange = true;
    this->InputConfig = ERSTWidgetInputMode::Menu;
    this->GameMouseCaptureMode = EMouseCaptureMode::CapturePermanently;
}

void URSTActivatableWidget::UnregisterInputAction(const UInputAction* Action) {
}

void URSTActivatableWidget::StartNPE() {
}

bool URSTActivatableWidget::ShouldStartNPE() {
    return false;
}

void URSTActivatableWidget::SetNPEStep(int32 Step) {
}

void URSTActivatableWidget::SetInteractableInternals(bool Enabled) {
}

void URSTActivatableWidget::ReregisterMappingContext() {
}

void URSTActivatableWidget::RegisterInputAction(const UInputAction* Action, const URSTActivatableWidget::FRSTWidgetInputActionDelegate& Delegate) {
}

void URSTActivatableWidget::PopSelfFromLayer(bool bBypassAnimations) {
}

void URSTActivatableWidget::OnUnPossess() {
}

void URSTActivatableWidget::OnSetInteractableInternals_Implementation(bool Enabled) {
}

void URSTActivatableWidget::OnPossess() {
}

void URSTActivatableWidget::IncreaseNPEStep() {
}

void URSTActivatableWidget::HandleToggleTabWidget() {
}


void URSTActivatableWidget::EndNPE() {
}

void URSTActivatableWidget::DecreaseNPEStep() {
}

bool URSTActivatableWidget::CanToggleTabWidget_Implementation() const {
    return false;
}

bool URSTActivatableWidget::CanToggleCursorMode() const {
    return false;
}



bool URSTActivatableWidget::BP_ShouldStartNPE_Implementation() {
    return false;
}














int32 URSTActivatableWidget::BP_GetNPEStepsNum_Implementation() {
    return 0;
}




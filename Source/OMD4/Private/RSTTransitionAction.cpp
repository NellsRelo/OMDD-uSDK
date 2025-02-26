#include "RSTTransitionAction.h"

URSTTransitionAction::URSTTransitionAction() {
    this->bServerSync = false;
    this->bShouldTick = false;
    this->State = ERSTTransitionActionState::None;
}

void URSTTransitionAction::SetShouldTick(bool bInShouldTick) {
}

void URSTTransitionAction::ResourcesPrepared() {
}


void URSTTransitionAction::K2_PrepareResources_Implementation() {
}

void URSTTransitionAction::K2_FastForwardAction_Implementation() {
}

void URSTTransitionAction::K2_CleanUpAction_Implementation() {
}

void URSTTransitionAction::K2_CancelAction_Implementation() {
}

void URSTTransitionAction::K2_BeginAction_Implementation() {
}

void URSTTransitionAction::CleanUpFinished() {
}

void URSTTransitionAction::ActionFinished() {
}



#include "RSTGameplayAbility_WheelBase.h"

URSTGameplayAbility_WheelBase::URSTGameplayAbility_WheelBase() {
    this->bShowTraceLine = false;
    this->WheelHoldTime = 0.20f;
    this->MaxRange = 10000.00f;
    this->TraceChannel = ECC_WorldStatic;
    this->InputReleaseTask = NULL;
    this->AbilityCommitTask = NULL;
    this->ShowWheelTask = NULL;
    this->CurrentIndex = -1;
}

void URSTGameplayAbility_WheelBase::OnShowWheelTask() {
}

void URSTGameplayAbility_WheelBase::OnInputReleased(float Duration) {
}

void URSTGameplayAbility_WheelBase::OnCancelAbilityCommit(UGameplayAbility* ActivatedAbility) {
}

TArray<FRSTWheelOptionData> URSTGameplayAbility_WheelBase::GetWheelOptions() const {
    return TArray<FRSTWheelOptionData>();
}

bool URSTGameplayAbility_WheelBase::GetShouldShowTraceLine() {
    return false;
}





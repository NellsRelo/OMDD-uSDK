#include "RSTAbilityTask_TrackCharacterInput.h"

URSTAbilityTask_TrackCharacterInput::URSTAbilityTask_TrackCharacterInput() {
}

URSTAbilityTask_TrackCharacterInput* URSTAbilityTask_TrackCharacterInput::TrackCharacterInput(UGameplayAbility* OwningAbility, bool bTerminateOnDetection, bool bGatherInputOnly, float Threshold) {
    return NULL;
}

bool URSTAbilityTask_TrackCharacterInput::HasMovementInput() {
    return false;
}

FVector URSTAbilityTask_TrackCharacterInput::GetMovementInput() {
    return FVector{};
}



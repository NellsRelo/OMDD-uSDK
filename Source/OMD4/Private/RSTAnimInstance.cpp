#include "RSTAnimInstance.h"

URSTAnimInstance::URSTAnimInstance() {
    this->GroundDistance = -1.00f;
    this->MoveSpeed = -1.00f;
}

float URSTAnimInstance::ModifyMoveSpeed_Implementation(float InMoveSpeed) const {
    return 0.0f;
}

bool URSTAnimInstance::IsMontageSlotPlaying(FName SlotName) const {
    return false;
}



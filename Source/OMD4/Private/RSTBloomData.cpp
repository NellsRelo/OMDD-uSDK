#include "RSTBloomData.h"

FRSTBloomData::FRSTBloomData() {
    this->MinHorizontalAngle = 0.00f;
    this->MaxHorizontalAngle = 0.00f;
    this->MinVerticalAngle = 0.00f;
    this->MaxVerticalAngle = 0.00f;
    this->RecoveryMaxTime = 0.00f;
    this->RecoveryDelay = 0.00f;
    this->LastTimeUsed = 0.00f;
    this->HorizontalOffset = 0.00f;
    this->VerticalOffset = 0.00f;
    this->CurrentHorizontalAngle = 0.00f;
    this->CurrentVerticalAngle = 0.00f;
    this->HorizontalDiff = 0.00f;
    this->VerticalDiff = 0.00f;
    this->HorizontalRecoveryRate = 0.00f;
    this->VerticalRecoveryRate = 0.00f;
}


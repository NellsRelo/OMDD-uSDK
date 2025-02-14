#include "RSTCameraMode.h"

URSTCameraMode::URSTCameraMode() {
    this->FieldOfView = 80.00f;
    this->ViewPitchMin = -89.00f;
    this->ViewPitchMax = 89.00f;
    this->BlendTime = 0.50f;
    this->BlendFunction = ERSTCameraModeBlendFunction::EaseOut;
    this->BlendExponent = 4.00f;
    this->bResetInterpolation = false;
}



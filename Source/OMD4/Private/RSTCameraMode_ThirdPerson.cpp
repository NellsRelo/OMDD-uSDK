#include "RSTCameraMode_ThirdPerson.h"

URSTCameraMode_ThirdPerson::URSTCameraMode_ThirdPerson() {
    this->TargetOffsetCurve = NULL;
    this->bUseRuntimeFloatCurves = false;
    this->CrouchOffsetBlendMultiplier = 5.00f;
    this->PenetrationBlendInTime = 0.10f;
    this->PenetrationBlendOutTime = 0.15f;
    this->bPreventPenetration = true;
    this->bDoPredictiveAvoidance = true;
    this->CollisionPushOutDistance = 2.00f;
    this->ReportPenetrationPercent = 0.00f;
    this->PenetrationAvoidanceFeelers.AddDefaulted(7);
    this->bApplyOverlapAlpha = true;
    this->AimLineToDesiredPosBlockedPct = 0.00f;
    this->FieldOfViewCategory = ERSTFieldOfViewCategory::Default;
    this->bAllowCameraLag = false;
    this->CameraLagSpeed = 10.00f;
    this->CameraLagMaxDistance = 500.00f;
    this->bUseCameraLagSubstep = true;
    this->CameraLagMaxTimeStep = 0.02f;
}



#include "NavPowerAIController.h"

ANavPowerAIController::ANavPowerAIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void ANavPowerAIController::SetUses3DMovement(bool b3DMovement) {
}

bool ANavPowerAIController::SetTurnInPlaceSpeed(float NewRotSpeed) {
    return false;
}

bool ANavPowerAIController::SetRepulsorID(uint32 repulsorID) {
    return false;
}

bool ANavPowerAIController::SetRepulsorBulk(float newBulk) {
    return false;
}

bool ANavPowerAIController::SetRepulsorBlockageFlags(uint32 repulsorFlags) {
    return false;
}

bool ANavPowerAIController::SetRepulsorAllowedPushDistance(float allowedDistance) {
    return false;
}

bool ANavPowerAIController::SetRepulsorAccelerationParams(float InitialAccel, float outerAccel, float innerAccel) {
    return false;
}

void ANavPowerAIController::SetNoMover(bool bSetNoMover) {
}

void ANavPowerAIController::SetNavPowerObstructionFlags(uint32 NewFlags) {
}

void ANavPowerAIController::SetNavMoverFlockID(int32 flockID) {
}

bool ANavPowerAIController::SetMaxSpeedFraction(float speedFraction) {
    return false;
}

bool ANavPowerAIController::SetIdleParms(float tetherDist, float returnHomeDist, float returnDelay, bool bIgnoreInitialOverlaps) {
    return false;
}

bool ANavPowerAIController::ResetTurnInPlaceSpeed() {
    return false;
}

void ANavPowerAIController::PauseNavMover(bool DisableRepulsor, bool bAllowOrient) {
}

void ANavPowerAIController::NavPowerMoveTo(UObject* WorldContextObject, FLatentActionInfo LatentInfo, AActor* GoalActor, FVector GoalLocation, float desiredStopDistance, bool bStopAtGoal, bool bPushThroughCrowdAtGoal, float allowedToStopDistance, bool bOrientAtGoal, FVector OrientAtGoalDirection, ENavMoveResult& moveResult) {
}

bool ANavPowerAIController::GetUses3DMovement() const {
    return false;
}

uint32 ANavPowerAIController::GetRepulsorID() {
    return 0;
}

float ANavPowerAIController::GetRepulsorBulk() {
    return 0.0f;
}

bool ANavPowerAIController::GetNoMover() const {
    return false;
}

uint32 ANavPowerAIController::GetNavPowerObstructionFlags() const {
    return 0;
}

FVector ANavPowerAIController::GetMoverVelocity() {
    return FVector{};
}

float ANavPowerAIController::GetMoverSpeed() {
    return 0.0f;
}

float ANavPowerAIController::GetMoverRadius(bool bIncludeInnerCushion, bool bIncludeOuterCushion) {
    return 0.0f;
}

FVector ANavPowerAIController::GetMoverLoc() {
    return FVector{};
}

bool ANavPowerAIController::AdjustRepulsor(float innerScalar, float outerScalar) {
    return false;
}



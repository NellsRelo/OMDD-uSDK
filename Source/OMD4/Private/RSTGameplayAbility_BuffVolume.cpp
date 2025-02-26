#include "RSTGameplayAbility_BuffVolume.h"
#include "ERSTAbilityActivationPolicy.h"

URSTGameplayAbility_BuffVolume::URSTGameplayAbility_BuffVolume() {
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerOnly;
    this->ActivationPolicy = ERSTAbilityActivationPolicy::OnSpawn;
    this->bDebugDraw = false;
    this->bUseRadiusAttribute = false;
    this->bUseRadiusFunction = false;
    this->BuffRadius = 0.00f;
    this->bCapsuleMode = false;
    this->bRestrictCapsuleDistance = false;
    this->CapsuleDistance = 0.00f;
    this->bMovingVolume = false;
    this->DefaultDuration = -1.00f;
    this->bEndAbilityAfterLifetime = true;
    this->bIgnoreAvatar = false;
    this->bRunInitialTraceInstantly = false;
    this->OverlapTickRate = 0.10f;
    this->bRequireLineOfSight = false;
    this->LineOfSightCheckFrequency = 0.10f;
    this->LineOfSightMoveRecheckThreshold = 0.00f;
    this->LineOfSightHitTolerance = 25.00f;
    this->bClientAuthoritativeVolume = true;
    this->LifetimeTask = NULL;
    this->TraceOverlapsTask = NULL;
    this->LineOfSightTask = NULL;
    this->RecurringEventRate = 0.10f;
    this->RecurringEventTask = NULL;
}

void URSTGameplayAbility_BuffVolume::StopBuffVolume() {
}

void URSTGameplayAbility_BuffVolume::StartBuffVolume() {
}

void URSTGameplayAbility_BuffVolume::Server_OnActorsLeft_Implementation(const TArray<AActor*>& Actors) {
}
bool URSTGameplayAbility_BuffVolume::Server_OnActorsLeft_Validate(const TArray<AActor*>& Actors) {
    return true;
}

void URSTGameplayAbility_BuffVolume::Server_OnActorsEntered_Implementation(const TArray<AActor*>& Actors) {
}
bool URSTGameplayAbility_BuffVolume::Server_OnActorsEntered_Validate(const TArray<AActor*>& Actors) {
    return true;
}

void URSTGameplayAbility_BuffVolume::OnRecurringEventTimerFinished() {
}

void URSTGameplayAbility_BuffVolume::OnLifetimeElapsed() {
}

void URSTGameplayAbility_BuffVolume::OnLeftLineOfSight(AActor* Actor) {
}

void URSTGameplayAbility_BuffVolume::OnEnteredLineOfSight(AActor* Actor) {
}

void URSTGameplayAbility_BuffVolume::OnActorsLeft(const TArray<AActor*>& Actors) {
}

void URSTGameplayAbility_BuffVolume::OnActorsEntered(const TArray<AActor*>& Actors) {
}

FTransform URSTGameplayAbility_BuffVolume::GetStartTransform() {
    return FTransform{};
}

float URSTGameplayAbility_BuffVolume::GetRadius() {
    return 0.0f;
}

FTransform URSTGameplayAbility_BuffVolume::GetLineOfSightTransform() {
    return FTransform{};
}

TArray<AActor*> URSTGameplayAbility_BuffVolume::GetLineOfSightActors() {
    return TArray<AActor*>();
}

FTransform URSTGameplayAbility_BuffVolume::GetEndTransform() {
    return FTransform{};
}

void URSTGameplayAbility_BuffVolume::GetCurrentTargets(TArray<AActor*>& OutTargets) {
}








TArray<AActor*> URSTGameplayAbility_BuffVolume::BP_GetIgnoreActors_Implementation(const TArray<AActor*>& InActors) const {
    return TArray<AActor*>();
}





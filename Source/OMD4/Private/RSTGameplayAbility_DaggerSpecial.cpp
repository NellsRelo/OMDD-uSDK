#include "RSTGameplayAbility_DaggerSpecial.h"

URSTGameplayAbility_DaggerSpecial::URSTGameplayAbility_DaggerSpecial() {
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->Montage = NULL;
    this->MontageTask = NULL;
    this->DamageRadius = 0.00f;
    this->ExplosionDelay = 0.25f;
    this->bDelayExplosionExpiration = true;
    this->bDelayExplosionTriggered = true;
    this->ExplosionDelayTask = NULL;
    this->DashSpeedEffect = NULL;
    this->DashSpeedScale = 0.00f;
    this->DashDuration = 0.00f;
    this->DashTimerTask = NULL;
    this->TriggeringAbilitiesTask = NULL;
    this->PathGatheringRate = 0.00f;
    this->PathGatheringMoveThreshold = 0.00f;
    this->PathGatheringTask = NULL;
}

void URSTGameplayAbility_DaggerSpecial::Server_OnTargetDataSet_Implementation(FGameplayAbilityTargetDataHandle TargetHandle, const TArray<FVector>& BreakableLocations, bool bExpired, FPredictionKey Key) {
}
bool URSTGameplayAbility_DaggerSpecial::Server_OnTargetDataSet_Validate(FGameplayAbilityTargetDataHandle TargetHandle, const TArray<FVector>& BreakableLocations, bool bExpired, FPredictionKey Key) {
    return true;
}

void URSTGameplayAbility_DaggerSpecial::OnTriggeringAbilityActivated(UGameplayAbility* Ability) {
}

void URSTGameplayAbility_DaggerSpecial::OnMontageFinishedNormally() {
}

void URSTGameplayAbility_DaggerSpecial::OnMontageFinishedAbnormally() {
}

void URSTGameplayAbility_DaggerSpecial::OnExplosionDelayFinished_Triggered() {
}

void URSTGameplayAbility_DaggerSpecial::OnExplosionDelayFinished_Expired() {
}

void URSTGameplayAbility_DaggerSpecial::OnDashTimerExpired() {
}




bool URSTGameplayAbility_DaggerSpecial::BP_IsValidTarget_Implementation(AActor* Actor) const {
    return false;
}





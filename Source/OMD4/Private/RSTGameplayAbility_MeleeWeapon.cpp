#include "RSTGameplayAbility_MeleeWeapon.h"

URSTGameplayAbility_MeleeWeapon::URSTGameplayAbility_MeleeWeapon() {
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->bSupportsMoveCancelling = true;
    this->BasePlayRate = 1.00f;
    this->LastHitDamageFactor = 1.00f;
    this->SwingMontageTaskHandle = NULL;
    this->CurrentSwingIndex = -1;
    this->bComboEnding = false;
    this->bGetAdvanceTargetOnSwingStart = false;
    this->AdvanceTaskHandle = NULL;
    this->AdvanceDuration = 0.00f;
    this->AdvanceStartTime = 0.00f;
    this->TargetRotationTaskHandle = NULL;
    this->MinControlRotationThreshold = 0.25f;
    this->bRestrictPlayerAutoSwing = true;
    this->bLimitSingleComboAutoSwing = true;
    this->bAllowAerialCombat = false;
    this->AerialGameplayEffect = NULL;
    this->AerialRemovalEffect = NULL;
    this->bPerformAirborneRecovery = false;
    this->AerialHitGameplayEffect = NULL;
    this->AerialHitSuspendDuration = 0.00f;
    this->AerialHitSuspendGravityScale = 0.00f;
}

int32 URSTGameplayAbility_MeleeWeapon::SwingIndexToConditionalIndex(int32 InIndex) const {
    return 0;
}

void URSTGameplayAbility_MeleeWeapon::OnSwingInterrupted() {
}

void URSTGameplayAbility_MeleeWeapon::OnSwingCompleted() {
}

void URSTGameplayAbility_MeleeWeapon::OnSwingCancelled() {
}

void URSTGameplayAbility_MeleeWeapon::OnSwingBlendOut() {
}

void URSTGameplayAbility_MeleeWeapon::OnDesiredRotationReached(float Duration) {
}

void URSTGameplayAbility_MeleeWeapon::OnDesiredRotationFailed() {
}

void URSTGameplayAbility_MeleeWeapon::OnAutoSwingTimer() {
}

void URSTGameplayAbility_MeleeWeapon::OnAdvanceFinished_Force() {
}

void URSTGameplayAbility_MeleeWeapon::OnAdvanceFinished_Actor(bool bDestinationReached, bool bTimedOut, FVector FinalTargetLocation) {
}

bool URSTGameplayAbility_MeleeWeapon::IsFinalSwing(int32 SwingIndex) const {
    return false;
}

bool URSTGameplayAbility_MeleeWeapon::IsAirborne() const {
    return false;
}

int32 URSTGameplayAbility_MeleeWeapon::GetSwingIndex() const {
    return 0;
}

URSTMeleeWeaponSwingData* URSTGameplayAbility_MeleeWeapon::GetSwingData(int32 SwingIndex) const {
    return NULL;
}

int32 URSTGameplayAbility_MeleeWeapon::GetMaxComboSwings() const {
    return 0;
}

FGameplayTag URSTGameplayAbility_MeleeWeapon::GetHitGameplayCue(int32 SwingIndex) const {
    return FGameplayTag{};
}

float URSTGameplayAbility_MeleeWeapon::GetCurrentSwingPlayRate() const {
    return 0.0f;
}

URSTAdvanceData* URSTGameplayAbility_MeleeWeapon::GetCurrentAdvanceData() const {
    return NULL;
}

URSTCombatComponent* URSTGameplayAbility_MeleeWeapon::GetCombatComponent() const {
    return NULL;
}

int32 URSTGameplayAbility_MeleeWeapon::ConditionalIndexToSwingIndex(int32 InIndex) const {
    return 0;
}


bool URSTGameplayAbility_MeleeWeapon::BP_ShouldAllowAutoSwing_Implementation(int32 CurrentSwing, int32 MaxSwings) {
    return false;
}





bool URSTGameplayAbility_MeleeWeapon::BP_IsAdvanceAllowed_Implementation(AActor* DynamicTarget) const {
    return false;
}


bool URSTGameplayAbility_MeleeWeapon::AllowAerialCombat() const {
    return false;
}



#include "RSTGameplayAbility.h"
#include "Templates/SubclassOf.h"

URSTGameplayAbility::URSTGameplayAbility() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->ActivationPolicy = ERSTAbilityActivationPolicy::OnInputTriggered;
    this->bResetOnSpawn = true;
    this->ActivationGroup = ERSTAbilityActivationGroup::Independent;
    this->bLogCancelation = false;
    this->bRecordAbilityEndTime = false;
    this->bUseSetByCallerCooldown = false;
    this->SetByCallerCooldownDuration = 1.00f;
    this->bUseTagCooldown = false;
    this->bClientOnlyCooldown = false;
    this->TagCooldownDuration = 0.00f;
    this->bReleaseLooseTagsOnAbilityEnd = true;
    this->UIDataPriority = 0;
    this->bBlockTrapPlacementOnActivation = false;
    this->bBlockTrapSellingOnActivation = false;
    this->bApplyPostEndTags = false;
    this->PostEndTagsDuration = 0.00f;
}

void URSTGameplayAbility::UnlockRotation() {
}

void URSTGameplayAbility::UnlockMovement() {
}

void URSTGameplayAbility::SetCameraMode(TSubclassOf<URSTCameraMode> CameraMode) {
}

void URSTGameplayAbility::Server_PerformTaggedPrediction_Implementation(FGameplayTag Tag, FPredictionKey Key) {
}
bool URSTGameplayAbility::Server_PerformTaggedPrediction_Validate(FGameplayTag Tag, FPredictionKey Key) {
    return true;
}


void URSTGameplayAbility::RestoreAvatarSkeletalMeshTickSettings() {
}

void URSTGameplayAbility::RemoveManagedLooseTag(FRSTLooseTagHandle& InHandle) {
}

void URSTGameplayAbility::RemoveInvalidManagedLooseTags() {
}

void URSTGameplayAbility::RemoveAllManagedLooseTags() {
}

void URSTGameplayAbility::PerformTaggedPrediction(FGameplayTag Tag) {
}

void URSTGameplayAbility::OverrideAvatarSkeletalMeshTickSettings(EVisibilityBasedAnimTickOption TickOption, USkeletalMeshComponent* OptionalMeshComp) {
}

FName URSTGameplayAbility::MontageGetSectionName() {
    return NAME_None;
}

void URSTGameplayAbility::MontageConcludeLoop(FName StartSectionName, FName LoopSectionName, FName EndSectionName) {
}

void URSTGameplayAbility::LockRotation() {
}

void URSTGameplayAbility::LockMovement(bool bReplicate) {
}








bool URSTGameplayAbility::IsPlayer() const {
    return false;
}

bool URSTGameplayAbility::IsLocalPlayer() const {
    return false;
}

bool URSTGameplayAbility::IsEnding() const {
    return false;
}

bool URSTGameplayAbility::IsActive() const {
    return false;
}

void URSTGameplayAbility::GetSetByCallerValues_Implementation(TMap<FGameplayTag, float>& OutSetByCallerValues) const {
}

ARSTPlayerController* URSTGameplayAbility::GetRSTPlayerControllerFromActorInfo() const {
    return NULL;
}

ARSTCharacter* URSTGameplayAbility::GetRSTCharacterFromActorInfo() const {
    return NULL;
}

URSTAbilitySystemComponent* URSTGameplayAbility::GetRSTAbilitySystemComponentFromActorInfo() const {
    return NULL;
}

URSTHeroComponent* URSTGameplayAbility::GetHeroComponentFromActorInfo() const {
    return NULL;
}

float URSTGameplayAbility::GetGrantedBySetByCallerValue(FGameplayTag GameplayTag) const {
    return 0.0f;
}

float URSTGameplayAbility::GetCooldownDuration_Implementation() const {
    return 0.0f;
}

AController* URSTGameplayAbility::GetControllerFromActorInfo() const {
    return NULL;
}

int32 URSTGameplayAbility::GetCheckCostEffectLevel_Implementation(FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo ActorInfo) const {
    return 0;
}

int32 URSTGameplayAbility::GetApplyCostEffectLevel_Implementation(FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo ActorInfo) const {
    return 0;
}


void URSTGameplayAbility::ClearCameraMode() {
}

bool URSTGameplayAbility::ChangeActivationGroup(ERSTAbilityActivationGroup NewGroup) {
    return false;
}

bool URSTGameplayAbility::CanChangeActivationGroup(ERSTAbilityActivationGroup NewGroup) const {
    return false;
}

void URSTGameplayAbility::BP_PerformTaggedPrediction_Implementation(FGameplayTag Tag) {
}

void URSTGameplayAbility::BlockTrapSelling() {
}

void URSTGameplayAbility::BlockTrapPlacement() {
}

FRSTLooseTagHandle URSTGameplayAbility::ApplyManagedLooseTags(FGameplayTagContainer Tags, bool bReplicate) {
    return FRSTLooseTagHandle{};
}

FRSTLooseTagHandle URSTGameplayAbility::ApplyManagedLooseTag(FGameplayTag Tag, bool bReplicate) {
    return FRSTLooseTagHandle{};
}

void URSTGameplayAbility::AllowTrapSelling() {
}

void URSTGameplayAbility::AllowTrapPlacement() {
}



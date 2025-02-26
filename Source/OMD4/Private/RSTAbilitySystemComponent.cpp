#include "RSTAbilitySystemComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

URSTAbilitySystemComponent::URSTAbilitySystemComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TagRelationshipMapping = NULL;
}

void URSTAbilitySystemComponent::TrackAbilityEnded(const FAbilityEndedData& EndedData) {
}

void URSTAbilitySystemComponent::Server_ApplyMeleeWeaponHitFromSource_Implementation(const FHitResult& Hit, URSTAbilitySystemComponent* Source, const FRSTMeleeAbilityHitContext& Context, FPredictionKey PredictionKey) {
}

void URSTAbilitySystemComponent::Server_ApplyMeleeWeaponHit_Implementation(const FHitResult& Hit, URSTAbilitySystemComponent* Target, const FRSTMeleeAbilityHitContext& Context, FPredictionKey PredictionKey) {
}

void URSTAbilitySystemComponent::RemoveTimedLooseTagByTimerHandle(FTimerHandle& Handle) {
}

void URSTAbilitySystemComponent::RemoveManagedLooseTagsByHandle(FRSTLooseTagHandle& InHandle) {
}

void URSTAbilitySystemComponent::RemoveManagedLooseTagByHandle(FRSTLooseTagHandle& InHandle) {
}

void URSTAbilitySystemComponent::RemoveGameplayCueLocal(const FGameplayTag GameplayCueTag, FGameplayCueParameters& GameplayCueParameters) {
}

void URSTAbilitySystemComponent::RemoveAllManagedLooseTags() {
}

void URSTAbilitySystemComponent::RegisterCueDataFromClass(FGameplayTag Tag, TSubclassOf<URSTCueData> CueDataClass) {
}

void URSTAbilitySystemComponent::RegisterCueData(FGameplayTag Tag, URSTCueData* CueData) {
}

FString URSTAbilitySystemComponent::PrintAbilityEndTimes() const {
    return TEXT("");
}

void URSTAbilitySystemComponent::OnTimedLooseTagFinished(FRSTLooseTagHandle Handle) {
}

void URSTAbilitySystemComponent::OnRep_CueData() {
}

void URSTAbilitySystemComponent::NetMulticast_Launch_Implementation(ARSTCharacter* Character, const FVector& LaunchVelocity, ERSTCharacterWeightClass MaxWeightClass, UGameplayAbility* AbilityCDO, bool bRagdoll, int32 Priority) {
}

void URSTAbilitySystemComponent::NetMulticast_GrappleSelfToLocation_Implementation(const FVector& Location, float Speed, float HoldDuration, ERSTCharacterWeightClass MaxWeightClass, URSTAbilitySystemComponent* SourceASC, UGameplayAbility* AbilityCDO) {
}

bool URSTAbilitySystemComponent::IsAbilityActive(const FGameplayAbilitySpecHandle& SpecHandle) {
    return false;
}

bool URSTAbilitySystemComponent::HasCueData(FGameplayTag Tag) {
    return false;
}

bool URSTAbilitySystemComponent::HasActiveAbilitiesWithTags(const FGameplayTagContainer& WithTags) {
    return false;
}

bool URSTAbilitySystemComponent::GetLowestAbilityEndedTime(FGameplayTagContainer Tags, float& OutTime) const {
    return false;
}

bool URSTAbilitySystemComponent::GetLowestAbilityEndedElapsedTime(FGameplayTagContainer Tags, float& OutTime) const {
    return false;
}

bool URSTAbilitySystemComponent::GetHighestAbilityEndedTime(FGameplayTagContainer Tags, float& OutTime) const {
    return false;
}

bool URSTAbilitySystemComponent::GetHighestAbilityEndedElapsedTime(FGameplayTagContainer Tags, float& OutTime) const {
    return false;
}

URSTCueData* URSTAbilitySystemComponent::GetCueData(FGameplayTag Tag) {
    return NULL;
}

bool URSTAbilitySystemComponent::GetAbilityEndedTime(FGameplayTag Tag, float& OutTime) const {
    return false;
}

bool URSTAbilitySystemComponent::GetAbilityEndedElapsedTime(FGameplayTag Tag, float& OutTime) const {
    return false;
}

void URSTAbilitySystemComponent::FreeCueData(FGameplayTag Tag) {
}

TArray<FGameplayAbilitySpecHandle> URSTAbilitySystemComponent::FindAllAbilitySpecHandlesWithTags(FGameplayTagContainer Tags, bool bExact, UObject* OptionalSourceObject) {
    return TArray<FGameplayAbilitySpecHandle>();
}

TArray<FGameplayAbilitySpecHandle> URSTAbilitySystemComponent::FindAllAbilitySpecHandlesWithTag(FGameplayTag Tag, bool bExact, UObject* OptionalSourceObject) {
    return TArray<FGameplayAbilitySpecHandle>();
}

FGameplayAbilitySpecHandle URSTAbilitySystemComponent::FindAbilitySpecHandleWithTags(FGameplayTagContainer Tags, bool bExact, UObject* OptionalSourceObject) {
    return FGameplayAbilitySpecHandle{};
}

FGameplayAbilitySpecHandle URSTAbilitySystemComponent::FindAbilitySpecHandleWithTag(FGameplayTag Tag, bool bExact, UObject* OptionalSourceObject) {
    return FGameplayAbilitySpecHandle{};
}

FGameplayAbilitySpecHandle URSTAbilitySystemComponent::FindAbilitySpecHandleForClass(TSubclassOf<UGameplayAbility> AbilityClass, UObject* OptionalSourceObject) {
    return FGameplayAbilitySpecHandle{};
}

void URSTAbilitySystemComponent::ExecuteGameplayCueLocal(const FGameplayTag GameplayCueTag, FGameplayCueParameters& GameplayCueParameters) {
}

void URSTAbilitySystemComponent::ClientNotifyAbilityFailed_Implementation(const UGameplayAbility* Ability, const FGameplayTagContainer& FailureReason) {
}

void URSTAbilitySystemComponent::Client_NotifyKnockback_Implementation(FName KnockbackTaskName, FVector Direction, float Distance, float Height, float Duration) {
}

void URSTAbilitySystemComponent::CancelAbilitiesWithTag(FGameplayTagContainer WithTags, FGameplayTagContainer WithoutTags, UGameplayAbility* IgnoreAbility) {
}

void URSTAbilitySystemComponent::BP_HandleGameplayEvent(FGameplayTag Tag, FGameplayEventData Data) {
}

FTimerHandle URSTAbilitySystemComponent::AddTimedLooseTags(FGameplayTagContainer InTags, bool bReplicateTag, float Duration) {
    return FTimerHandle{};
}

FTimerHandle URSTAbilitySystemComponent::AddTimedLooseTag(FGameplayTag InTag, bool bReplicateTag, float Duration) {
    return FTimerHandle{};
}

FTimerHandle URSTAbilitySystemComponent::AddSingleTickLooseTags(FGameplayTagContainer InTags) {
    return FTimerHandle{};
}

FTimerHandle URSTAbilitySystemComponent::AddSingleTickLooseTag(FGameplayTag InTag) {
    return FTimerHandle{};
}

FRSTLooseTagHandle URSTAbilitySystemComponent::AddManagedLooseTags(FGameplayTagContainer InTags, bool bReplicateTag, bool bAllowOnSimulatedProxy) {
    return FRSTLooseTagHandle{};
}

FRSTLooseTagHandle URSTAbilitySystemComponent::AddManagedLooseTag(FGameplayTag InTag, bool bReplicate, bool bAllowOnSimulatedProxy) {
    return FRSTLooseTagHandle{};
}

void URSTAbilitySystemComponent::AddGameplayCueLocal(const FGameplayTag GameplayCueTag, FGameplayCueParameters& GameplayCueParameters) {
}

void URSTAbilitySystemComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(URSTAbilitySystemComponent, CueDataArr);
}



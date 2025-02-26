#include "RSTRangedCombatComponent.h"
#include "Net/UnrealNetwork.h"

URSTRangedCombatComponent::URSTRangedCombatComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bSkipTargetingTick = false;
    this->DefaultCollisionResolutionMethod = ERSTRangedAimCollisionResolutionMethod::ReticleCast;
    this->MaxTraceAccuracyRange = 10000.00f;
    this->MinTraceAccuracyRange = 1000.00f;
    this->bInterpolateTargetByDefault = false;
    this->DefaultTargetInterpolationSpeed = 0.00f;
    this->bAllowEditTargetingGroupRoot = false;
    this->MaxBloomAngle = 89.00f;
}

void URSTRangedCombatComponent::UnregisterFirePoint(URSTRangedFirePointComponent* FirePoint) {
}

bool URSTRangedCombatComponent::RemoveBloomValues(FGameplayTag Identifier) {
    return false;
}

void URSTRangedCombatComponent::RemoveBloomBlend(FGameplayTag Identifier, FGameplayTag Source) {
}

void URSTRangedCombatComponent::RegisterFirePoint(URSTRangedFirePointComponent* FirePoint) {
}

bool URSTRangedCombatComponent::RegisterBloomValues(FGameplayTag Identifier, FRSTBloomData Data) {
    return false;
}

void URSTRangedCombatComponent::PurgeExpiredBloomBlends(FGameplayTag Identifier) {
}

void URSTRangedCombatComponent::OnRep_ClientFirePointData(const TArray<FRSTRangedFirePointReplicatedData>& PreviousData) {
}

bool URSTRangedCombatComponent::IsFirePointObstructed(const FGameplayTag& Identifier, bool& bOutObstructed, float ObstructionDistanceMax) const {
    return false;
}

bool URSTRangedCombatComponent::HasTargetPoint(const FGameplayTag& Identifier) const {
    return false;
}

bool URSTRangedCombatComponent::HasFirePoint(const FGameplayTag& Identifier) const {
    return false;
}

bool URSTRangedCombatComponent::HasBloomData(FGameplayTag Identifier) const {
    return false;
}

bool URSTRangedCombatComponent::GetTargetPointsForTag(const FGameplayTag& Identifier, TArray<FVector>& OutTargetPoints) const {
    return false;
}

bool URSTRangedCombatComponent::GetRawBloomValues(FGameplayTag Identifier, float& OutHorizontalAngle, float& OutVerticalAngle) const {
    return false;
}

bool URSTRangedCombatComponent::GetRawBloomOffset(FGameplayTag Identifier, float& OutHorizontalOffset, float& OutVerticalOffset) const {
    return false;
}

bool URSTRangedCombatComponent::GetPrimaryTargetTraceHitNormal(const FGameplayTag& Identifier, FVector& OutTraceNormal) const {
    return false;
}

bool URSTRangedCombatComponent::GetPrimaryTargetPointForTag(const FGameplayTag& Identifier, FVector& OutLocation) const {
    return false;
}

bool URSTRangedCombatComponent::GetPrimaryFirePointForTag(const FGameplayTag& Identifier, FVector& OutLocation) const {
    return false;
}

URSTRangedFirePointComponent* URSTRangedCombatComponent::GetPrimaryFirePointComponent(const FGameplayTag& Identifier) const {
    return NULL;
}

bool URSTRangedCombatComponent::GetFireVectorsForTag(const FGameplayTag& Identifier, TArray<FRSTFiringParams>& OutFireVectors) const {
    return false;
}

bool URSTRangedCombatComponent::GetFirePointsForTag(const FGameplayTag& Identifier, TArray<FVector>& OutLocation) const {
    return false;
}

bool URSTRangedCombatComponent::GetFirePointComponentsForTag(const FGameplayTag& Identifer, TArray<USceneComponent*>& OutFirePointComponents) const {
    return false;
}

bool URSTRangedCombatComponent::GetBloomValues(FGameplayTag Identifier, float& OutHorizontalAngle, float& OutVerticalAngle) const {
    return false;
}

bool URSTRangedCombatComponent::GetBloomOffset(FGameplayTag Identifier, float& OutHorizontalOffset, float& OutVerticalOffset) const {
    return false;
}

bool URSTRangedCombatComponent::GetBloomMin(FGameplayTag Identifier, float& OutHorizontalAngle, float& OutVerticalAngle) const {
    return false;
}

bool URSTRangedCombatComponent::GetBloomMax(FGameplayTag Identifier, float& OutHorizontalAngle, float& OutVerticalAngle) const {
    return false;
}

URSTRangedCombatComponent* URSTRangedCombatComponent::FindRangedCombatComponent(const AActor* Actor) {
    return NULL;
}

void URSTRangedCombatComponent::EnableRangedTargeting(const FGameplayTag& GroupTag, ERSTRangedFireGroupTargetingMethod TargetingMethod, bool bHasRangeOverride, float RangeOverride, ERSTRangedAimCollisionResolutionMethod OverrideCollisionResolutionMethod, bool bInterpAim, bool bOverrideInterpSpeed, float OverrideInterpSpeed, bool bHasOverrideTargetingProfile, FCollisionProfileName OverrideTargetingProfile) {
}

void URSTRangedCombatComponent::DisableRangedTargeting(const FGameplayTag& GroupTag) {
}

void URSTRangedCombatComponent::ClearBloomBlends(FGameplayTag Identifier) {
}

bool URSTRangedCombatComponent::ApplyOffset(FGameplayTag Identifier, FVector& InOutDirection) {
    return false;
}

void URSTRangedCombatComponent::ApplyBloomBlend(FGameplayTag Identifier, FGameplayTag Source, float Duration, float Weight) {
}

bool URSTRangedCombatComponent::ApplyBloom(FGameplayTag Identifier, FVector& InOutDirection, int32 Seed) {
    return false;
}

void URSTRangedCombatComponent::AddBloomIncrement(FGameplayTag Identifier, float IncrementPercentage) {
}

void URSTRangedCombatComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(URSTRangedCombatComponent, ReplicatedFirePointData);
}



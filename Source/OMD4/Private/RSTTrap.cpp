#include "RSTTrap.h"
#include "SkeletalMeshComponentBudgeted.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"
#include "RSTAbilitySystemComponent.h"
#include "RSTDamageModifierComponent.h"
#include "RSTMapDisplayComponent.h"
#include "RSTModifierComponent.h"
#include "Templates/SubclassOf.h"

ARSTTrap::ARSTTrap(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->bInstigatorIsNetOwner = false;
    this->GeneratedBoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("GeneratedBoxCollision"));
    this->MeshComponent = CreateDefaultSubobject<USkeletalMeshComponentBudgeted>(TEXT("MeshComponent"));
    this->TriggerDisplay = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TriggerDisplay"));
    this->ModifierComponent = CreateDefaultSubobject<URSTModifierComponent>(TEXT("ModifierComponent"));
    this->TriggerVolumeScale = 1.00f;
    this->TriggerBoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("TriggerBox"));
    this->MaxCharges = 0;
    this->AvailableCharges = 0;
    this->ResetCooldownOnApplicationChance = 0.00f;
    this->bFlyersTriggerFloorTrap = false;
    this->bResetTrapAtGoBreak = true;
    this->AbilitySystemComponent = CreateDefaultSubobject<URSTAbilitySystemComponent>(TEXT("AbilitySystem"));
    this->TrapOwnerPlayerIndex = -1;
    this->bIsOwnedByLocalPlayer = false;
    this->RefundValue = 0;
    this->NumRotations = 4;
    this->LastPlacementFailureReason = ERSTTrapPlacementFailureReason::Unknown;
    this->bIsBeingPlaced = false;
    this->bIsPlacementValid = true;
    this->bHasEnoughCoin = true;
    this->bHasReachedPlacementLimit = false;
    this->bIsSold = false;
    this->bPreventSell = false;
    this->TrapPlacementTypes = ERSTTrapPlacementFlags::None;
    this->VisualFlags = 0;
    this->TrapDefinition = NULL;
    this->ThreatValue = 0.00f;
    this->DefaultThreatCap = 0;
    this->LargeThreatCap = 0;
    this->RangedThreatCap = 0;
    this->HuntersThreatCap = 0;
    this->BossThreatCap = 0;
    this->MapDisplayComponent = CreateDefaultSubobject<URSTMapDisplayComponent>(TEXT("MapDisplay"));
    this->SightRadius = 0.00f;
    this->DamageModifierComponent = CreateDefaultSubobject<URSTDamageModifierComponent>(TEXT("DamageModifierComponent"));
    this->GeneratedBoxCollision->SetupAttachment(RootComponent);
    this->MeshComponent->SetupAttachment(RootComponent);
    this->TriggerBoxComponent->SetupAttachment(RootComponent);
    this->TriggerDisplay->SetupAttachment(RootComponent);
}

bool ARSTTrap::UsesHalfSizePlacement() const {
    return false;
}

bool ARSTTrap::UsesDynamicTriggerVolume() const {
    return false;
}

void ARSTTrap::UpdateBuffCount(int32 Count) {
}

void ARSTTrap::UnregisterCooldownModifier(TScriptInterface<IRSTTrapCooldownModifierInterface> InModifier) {
}

ARSTTrap* ARSTTrap::TryPlaceAdjacentTrap(TSubclassOf<ARSTTrap> TrapToPlace, FVector Direction) {
    return NULL;
}

bool ARSTTrap::ShouldCountTowardPlacementLimit_Implementation() const {
    return false;
}

void ARSTTrap::SetMaxCharges(int32 InMaxCharges) {
}

void ARSTTrap::SetIsDisabled(bool bDisabled) {
}

void ARSTTrap::SetBuffPreview(bool bBuffed) {
}

void ARSTTrap::SetAvailableCharges(int32 InAvailableCharges) {
}

bool ARSTTrap::Sell() {
    return false;
}

void ARSTTrap::ResetTrap_Implementation() {
}

void ARSTTrap::RegisterCooldownModifier(TScriptInterface<IRSTTrapCooldownModifierInterface> InModifier) {
}

void ARSTTrap::OnRep_TrapOwner() {
}

void ARSTTrap::OnRep_ParentTrap() {
}

void ARSTTrap::OnRep_MaxCharges() {
}

void ARSTTrap::OnRep_IsSold(bool bPreviousValue) {
}

void ARSTTrap::OnRep_IsPlacementValid(bool bPreviousValue) {
}

void ARSTTrap::OnRep_IsBeingPlaced(bool bPreviousValue) {
}

void ARSTTrap::OnRep_HasReachedPlacementLimit(bool bPreviousValue) {
}

void ARSTTrap::OnRep_HasEnoughCoin(bool bPreviousValue) {
}

void ARSTTrap::OnRep_AvailableCharges() {
}

void ARSTTrap::OnPostGame() {
}

void ARSTTrap::OnGoBreakChanged(bool bIsGoBreakActive) {
}

void ARSTTrap::OnGameEnding() {
}

void ARSTTrap::OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ARSTTrap::OnDeathStarted(AActor* OwningActor, const AActor* InInstigator) {
}

void ARSTTrap::OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

bool ARSTTrap::IsValidTarget_Implementation(AActor* OtherActor) const {
    return false;
}

bool ARSTTrap::IsReadyForActivation_Implementation() {
    return false;
}

bool ARSTTrap::IsDisabled() const {
    return false;
}

bool ARSTTrap::IsCooldownActive() const {
    return false;
}

bool ARSTTrap::IsAbilityActive() const {
    return false;
}

bool ARSTTrap::IgnoresGridSnapping() const {
    return false;
}

bool ARSTTrap::HasValidTarget_Implementation() {
    return false;
}

bool ARSTTrap::HasCooldownModifier() const {
    return false;
}

bool ARSTTrap::HasActiveCooldownModifier() const {
    return false;
}

float ARSTTrap::HandleCooldownApplication(float InBaseDuration) {
    return 0.0f;
}

ERSTTrapPlacementFlags ARSTTrap::GetTrapPlacementTypes() const {
    return ERSTTrapPlacementFlags::None;
}

ETeamAttitude::Type ARSTTrap::GetTeamAttitudeTowardsActor_Implementation(const AActor* Other) const {
    return ETeamAttitude::Friendly;
}

ERSTTeams ARSTTrap::GetTeam_Implementation() const {
    return ERSTTeams::Players;
}

FGameplayTag ARSTTrap::GetSellTrapCue() const {
    return FGameplayTag{};
}

URSTAbilitySystemComponent* ARSTTrap::GetRSTAbilitySystemComponent() const {
    return NULL;
}

int32 ARSTTrap::GetRefundValue() const {
    return 0;
}

FGameplayTag ARSTTrap::GetPlacementLimitGroup() const {
    return FGameplayTag{};
}

FGameplayTag ARSTTrap::GetPlacementCue() const {
    return FGameplayTag{};
}

FGameplayAbilitySpecHandle ARSTTrap::GetPassiveAbilitySpecHandle() const {
    return FGameplayAbilitySpecHandle{};
}

URSTGameplayAbility_TrapBase* ARSTTrap::GetPassiveAbilityInstance() const {
    return NULL;
}

URSTGameplayAbility_TrapBase* ARSTTrap::GetPassiveAbility() const {
    return NULL;
}

bool ARSTTrap::GetOverlappedActors(TArray<AActor*>& OutOverlappedActors) const {
    return false;
}

TEnumAsByte<EAxis::Type> ARSTTrap::GetDynamicTriggerVolumeAxis() const {
    return EAxis::None;
}

ERSTTrapPlacementFlags ARSTTrap::GetDefaultTrapPlacementTypes() const {
    return ERSTTrapPlacementFlags::None;
}

float ARSTTrap::GetActiveCooldownTimeRemaining_Authority() const {
    return 0.0f;
}

FGameplayAbilitySpecHandle ARSTTrap::GetActiveAbilitySpecHandle() const {
    return FGameplayAbilitySpecHandle{};
}

URSTGameplayAbility_TrapBase* ARSTTrap::GetActiveAbilityInstance() const {
    return NULL;
}

URSTGameplayAbility_TrapBase* ARSTTrap::GetActiveAbilityCDO() const {
    return NULL;
}

bool ARSTTrap::GetActivatingActors(TArray<AActor*>& OutActivatingActors) const {
    return false;
}

bool ARSTTrap::ConsumeActivatingActors(TArray<AActor*>& OutActivatingActors, int32 Count) {
    return false;
}

bool ARSTTrap::CanRotate() const {
    return false;
}

bool ARSTTrap::CanModifyCooldown_Implementation() const {
    return false;
}

bool ARSTTrap::CanEverActivate_Implementation() {
    return false;
}

void ARSTTrap::CancelCurrentAbility() {
}

void ARSTTrap::BroadcastCooldownModificationChanged() {
}






















FVector ARSTTrap::BP_GetInteractableLocation_Implementation() const {
    return FVector{};
}

void ARSTTrap::BP_GetActorEyesViewPoint_Implementation(FVector& OutLocation, FRotator& OutRotation) const {
}










void ARSTTrap::AdjustPlacementHeight() {
}

void ARSTTrap::ActivateWithoutDelay() {
}

void ARSTTrap::Activate() {
}

void ARSTTrap::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ARSTTrap, SeamedTrapGrids);
    DOREPLIFETIME(ARSTTrap, MainTrapGrid);
    DOREPLIFETIME(ARSTTrap, MaxCharges);
    DOREPLIFETIME(ARSTTrap, AvailableCharges);
    DOREPLIFETIME(ARSTTrap, TrapOwner);
    DOREPLIFETIME(ARSTTrap, ParentTrap);
    DOREPLIFETIME(ARSTTrap, RefundValue);
    DOREPLIFETIME(ARSTTrap, LastPlacementFailureReason);
    DOREPLIFETIME(ARSTTrap, bIsBeingPlaced);
    DOREPLIFETIME(ARSTTrap, bIsPlacementValid);
    DOREPLIFETIME(ARSTTrap, bHasEnoughCoin);
    DOREPLIFETIME(ARSTTrap, bHasReachedPlacementLimit);
    DOREPLIFETIME(ARSTTrap, bIsSold);
    DOREPLIFETIME(ARSTTrap, TrapDisplayName);
}



#include "RSTCharacter.h"
#include "RDialogueComponent.h"
#include "Net/UnrealNetwork.h"
#include "RSTActorOpacityComponent.h"
#include "RSTCharacterMovementComponent.h"
#include "RSTCombatComponent.h"
#include "RSTHealthComponent.h"
#include "RSTMapDisplayComponent.h"
#include "RSTPawnExtensionComponent.h"
#include "RSTRangedCombatComponent.h"
#include "RSTTriggerInstigatorComponent.h"

ARSTCharacter::ARSTCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<URSTCharacterMovementComponent>(TEXT("CharMoveComp"))) {
    this->PingSocketName = TEXT("socket_head_fx");
    this->ActorOpacityComponent = CreateDefaultSubobject<URSTActorOpacityComponent>(TEXT("ActorOpacityComponent"));
    this->DefaultThreatCap = 0;
    this->LargeThreatCap = 0;
    this->RangedThreatCap = 0;
    this->HuntersThreatCap = 0;
    this->BossThreatCap = 0;
    this->RiftPointCost = 0;
    this->RiftPointIgnoreChance = 0.00f;
    this->PawnExtComponent = CreateDefaultSubobject<URSTPawnExtensionComponent>(TEXT("PawnExtensionComponent"));
    this->HealthComponent = CreateDefaultSubobject<URSTHealthComponent>(TEXT("HealthComponent"));
    this->CombatComponent = CreateDefaultSubobject<URSTCombatComponent>(TEXT("CombatComponent"));
    this->RangedCombatComponent = CreateDefaultSubobject<URSTRangedCombatComponent>(TEXT("RangedCombatComponent"));
    this->DialogueComponent = CreateDefaultSubobject<URDialogueComponent>(TEXT("DialogueComponent"));
    this->TriggerInstigatorComponent = CreateDefaultSubobject<URSTTriggerInstigatorComponent>(TEXT("TriggerInstigatorComponent"));
    this->ThreatValue = 0.00f;
    this->MapDisplayComponent = CreateDefaultSubobject<URSTMapDisplayComponent>(TEXT("MapDisplay"));
    this->LaunchBoneName = TEXT("Root");
    this->HomingTargetSocketName = TEXT("spine_03");
}

void ARSTCharacter::StartAdvance() {
}

void ARSTCharacter::SelfDestruct() {
}

void ARSTCharacter::RemoveRootCollisionOverride(FGuid& Guid) {
}

void ARSTCharacter::RemoveMeshCollisionOverride(FGuid& Guid) {
}

void ARSTCharacter::RagdollDeath(bool bApplyForce) {
}

void ARSTCharacter::Ragdoll(bool bDetachFromRoot) {
}

void ARSTCharacter::OnShieldMaxChanged(URSTHealthComponent* NewHealthComponent, float OldValue, float NewValue, AActor* DamageCauser, const FHitResult& HitResult, bool bHasSpec, const FGameplayEffectSpec& Spec) {
}

void ARSTCharacter::OnShieldChangedAuthority(URSTHealthComponent* HealthComp, float OldValue, float NewValue, const FGameplayEffectSpec& Spec) {
}

void ARSTCharacter::OnRevived(AActor* OwningActor, const AActor* InInstigator) {
}

void ARSTCharacter::OnRep_RSTReplicatedMovement() {
}

void ARSTCharacter::OnRep_ReplicatedAcceleration() {
}

void ARSTCharacter::OnRep_MyTeamID(FGenericTeamId OldTeamID) {
}

void ARSTCharacter::OnRep_ComponentCollisionOverrides() {
}

void ARSTCharacter::OnHealthChangedAuthority(URSTHealthComponent* HealthComp, float OldValue, float NewValue, const FGameplayEffectSpec& Spec) {
}

void ARSTCharacter::OnDowned(AActor* OwningActor, const AActor* InInstigator) {
}

void ARSTCharacter::OnDeathStarted(AActor* OwningActor, const AActor* InInstigator) {
}

void ARSTCharacter::OnDeathFinished(AActor* OwningActor, const AActor* InInstigator) {
}

void ARSTCharacter::OnDamageTaken(URSTHealthComponent* HealthComp, float Damage, AActor* DamageCauser, const FHitResult& HitResult, bool bHasSpec, const FGameplayEffectSpec& Spec) {
}

void ARSTCharacter::LaunchCharacter_NoSpec(FVector LaunchVelocity, bool bXYOverride, bool bZOverride) {
}

bool ARSTCharacter::IsDeadOrDying() {
    return false;
}

bool ARSTCharacter::IsBeingGrappled() const {
    return false;
}

bool ARSTCharacter::HasCollisionOverride(UPrimitiveComponent* PrimComp) const {
    return false;
}

bool ARSTCharacter::HasAirborneRecoveryTag(const FGameplayTag& Tag) {
    return false;
}

ERSTCharacterWeightClass ARSTCharacter::GetWeightClass() const {
    return ERSTCharacterWeightClass::Light;
}

ARSTPlayerState* ARSTCharacter::GetRSTPlayerState() const {
    return NULL;
}

ARSTPlayerController* ARSTCharacter::GetRSTPlayerController() const {
    return NULL;
}

URSTAbilitySystemComponent* ARSTCharacter::GetRSTAbilitySystemComponent() const {
    return NULL;
}

float ARSTCharacter::GetRiftPointIgnoreChance() const {
    return 0.0f;
}

int32 ARSTCharacter::GetRiftPointCost() const {
    return 0;
}

URSTPawnDefinition* ARSTCharacter::GetPawnDefinition() const {
    return NULL;
}

void ARSTCharacter::FinishAdvance() {
}





FGuid ARSTCharacter::ApplyRootCollisionOverride(FName NewCollisionProfile) {
    return FGuid{};
}

FGuid ARSTCharacter::ApplyMeshCollisionOverride(FName NewCollisionProfile) {
    return FGuid{};
}

void ARSTCharacter::ApplyAirborneRecovery(FGameplayTag Tag) {
}

void ARSTCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ARSTCharacter, MyTeamID);
    DOREPLIFETIME(ARSTCharacter, ReplicatedAcceleration);
    DOREPLIFETIME(ARSTCharacter, RSTReplicatedMovement);
    DOREPLIFETIME(ARSTCharacter, AirborneRecoveryTags);
    DOREPLIFETIME(ARSTCharacter, ComponentCollisionOverrides);
}



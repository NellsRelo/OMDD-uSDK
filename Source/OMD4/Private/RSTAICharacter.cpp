#include "RSTAICharacter.h"
#include "SkeletalMeshComponentBudgeted.h"
#include "Components/SkeletalMeshComponent.h"
#include "Net/UnrealNetwork.h"
#include "RSTAbilitySystemComponent.h"
#include "RSTDamageModifierComponent.h"
#include "RSTModifierComponent.h"
#include "RSTStatusEffectComponent.h"

ARSTAICharacter::ARSTAICharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUsesAggroCap = false;
    this->ModifierComponent = CreateDefaultSubobject<URSTModifierComponent>(TEXT("ModifierComponent"));
    this->Skeleton = CreateDefaultSubobject<USkeletalMeshComponentBudgeted>(TEXT("Skeleton"));
    const FProperty* p_Mesh_Parent = GetClass()->FindPropertyByName("Mesh");
    this->FXMesh = CreateDefaultSubobject<USkeletalMeshComponentBudgeted>(TEXT("FX Mesh"));
    this->PawnDefinition = NULL;
    this->PawnDefinitionEnemy = NULL;
    this->StatusEffectComponent = CreateDefaultSubobject<URSTStatusEffectComponent>(TEXT("StatusEffectComponent"));
    this->bUseOptimizedHitDetection = false;
    this->HeadshotRadius = 50.00f;
    this->Optimized = false;
    this->OptimizedNavWalking = false;
    this->AbilitySystemComponent = CreateDefaultSubobject<URSTAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
    this->VoiceIndexMax = 1;
    this->ComboFlyoffClass = NULL;
    this->PickupDropChanceAddition = 0.00f;
    this->PickupDropChanceMultiplier = 1.00f;
    this->NextEvaluateNearbyBreakablesTime = 0.00f;
    this->EvaluateNearbyBreakablesInterval = 0.10f;
    this->CurrentStencilIndex = -1;
    this->DamageModifierComponent = CreateDefaultSubobject<URSTDamageModifierComponent>(TEXT("DamageModifierComponent"));
    this->FXMesh->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->Skeleton->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
}

bool ARSTAICharacter::UseHealthBars() {
    return false;
}

void ARSTAICharacter::UnFreeze() {
}

void ARSTAICharacter::StartGetUp(TSoftObjectPtr<UAnimMontage> getUpMontage) {
}

void ARSTAICharacter::OnLaunchImpact(const FHitResult& ImpactResult, const FVector& ImpactVelocity) {
}

void ARSTAICharacter::OnInitStateChanged(FActorInitStateChangedParams& Parms) {
}

void ARSTAICharacter::OnHealingTaken(URSTHealthComponent* HealthComp, float Healing, AActor* HealingCauser, const FHitResult& HitResult, bool bHasSpec, const FGameplayEffectSpec& Spec) {
}

void ARSTAICharacter::NetMulticast_Ground_Implementation() {
}

void ARSTAICharacter::NetMulticast_DoDeathAnimOverride_Implementation() {
}

void ARSTAICharacter::Multicast_SpawnComboFlyoff_Implementation(int32 FlyoffComboPointCount, ARSTPlayerState* Player) {
}

bool ARSTAICharacter::IsHeadshot_Implementation(FGameplayEffectContextHandle EffectContext) const {
    return false;
}

void ARSTAICharacter::Ground() {
}

float ARSTAICharacter::GetAdjustedLaunchVelocity(float BaseVelocity) const {
    return 0.0f;
}

void ARSTAICharacter::Freeze() {
}

void ARSTAICharacter::EndGetUp() {
}

void ARSTAICharacter::DoDeathAnimOverride() {
}

void ARSTAICharacter::DetachLimbs(int32 GibMask, bool bDisableCollision, bool bSpawnGibs, URSTDeathEvent_AIDeathStarted* DeathEvent) {
}








void ARSTAICharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ARSTAICharacter, Optimized);
    DOREPLIFETIME(ARSTAICharacter, OptimizedNavWalking);
}



#include "RSTProjectile.h"
#include "Components/SphereComponent.h"
#include "Net/UnrealNetwork.h"
#include "RSTProjectileMovementComponent.h"
#include "Templates/SubclassOf.h"

ARSTProjectile::ARSTProjectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionComponent"));
    this->CollisionComponent = (UPrimitiveComponent*)RootComponent;
    this->ProjectileMovementComponent = CreateDefaultSubobject<URSTProjectileMovementComponent>(TEXT("ProjectileMovementComponent"));
    this->InFlightSound = NULL;
    this->InFlightAC = NULL;
    this->DamageEffectClass = NULL;
    this->AbilityCDO = NULL;
    this->GibChance = -1.00f;
    this->LaunchedGibChance = -1.00f;
    this->DeathImpulseForce = 100000.00f;
    this->DamageValue = 1.00f;
    this->HeadshotDamageFactor = 0.00f;
    this->CriticalHitFactor = 0.00f;
    this->CriticalHitDamageScale = 0.00f;
    this->bApplyInterrupt = false;
    this->InterruptScale = 1.00f;
    this->HitData = NULL;
    this->bDestroyOnHit = true;
    this->bStartDormant = false;
    this->bStartSoundWhileDormant = false;
    this->AudioFadeOutDuration = 0.25f;
    this->bNoGravityOnStart = true;
    this->NoGravityDuration = 0.20f;
    this->GravityScale = 1.00f;
    this->bApplyDamageOnHit = true;
    this->bIsDormant = false;
    this->BouncesAcknowledged = 0;
    this->HomingContinuousDetectionRange = 500.00f;
    this->HomingContinuousUpdateFrequency = 0.10f;
    this->bUpdateHomingTargetImmediately = false;
    this->TrailParticleSystem = NULL;
    this->TrailActor = NULL;
    this->bShouldInitializeTrailActor = true;
    this->DistanceDamageFalloff = NULL;
}

void ARSTProjectile::StopPlayingLocally() {
}

void ARSTProjectile::SetStartDormant(bool bNewStartDormant) {
}

void ARSTProjectile::SetPiercePropertyTags(const FGameplayTagContainer& PropertyTags) {
}

void ARSTProjectile::SetPierceCount(int32 InPierceCount) {
}

void ARSTProjectile::SetPierceChance(float InPierceChance) {
}

void ARSTProjectile::SetInterruptScale(float InInterruptScale) {
}

void ARSTProjectile::SetHitGameplayCue(FGameplayTag InHitGameplayCue, bool bAllowEmpty) {
}

void ARSTProjectile::SetHitData(const URSTRangedHitData* InHitData) {
}

void ARSTProjectile::SetHeadshotDamageFactor(float InHeadshotDamageFactor) {
}

void ARSTProjectile::SetGravityScale(float InGravityScale) {
}

void ARSTProjectile::SetDistanceDamageFalloff(UCurveFloat* InDistanceDamageFalloff) {
}

void ARSTProjectile::SetDamageValue(float InDamageValue) {
}

void ARSTProjectile::SetDamageEffectClass(TSubclassOf<UGameplayEffect> InDamageEffectClass) {
}

void ARSTProjectile::SetCriticalHitFactor(float InCriticalHitFactor) {
}

void ARSTProjectile::SetCriticalHitDamageScale(float InCriticalHitDamageScale) {
}

void ARSTProjectile::SetContinuousHomingTargetFilter(const FGameplayTagContainer& GameplayTagFilter) {
}

void ARSTProjectile::SetBounceCount(int32 InBounceCount) {
}

void ARSTProjectile::SetApplyInterrupt(bool bInApplyInterrupt) {
}

void ARSTProjectile::SetAdditionalEffectData(const TArray<FRSTAdditionalGameplayEffectData>& InAdditionalEffects) {
}

void ARSTProjectile::SetAbilityCDO(const UGameplayAbility* InAbilityCDO) {
}

void ARSTProjectile::Server_SetTargetData_Implementation(const FGameplayAbilityTargetDataHandle& TargetData, FPredictionKey PredictionKey) {
}
bool ARSTProjectile::Server_SetTargetData_Validate(const FGameplayAbilityTargetDataHandle& TargetData, FPredictionKey PredictionKey) {
    return true;
}

void ARSTProjectile::RegisterHomingTarget(USceneComponent* TargetComponent, FName TargetSocket) {
}

void ARSTProjectile::OnRep_IsDormant() {
}

void ARSTProjectile::OnRep_BouncesAcknowledged() {
}

void ARSTProjectile::OnProjectileBounce(const FHitResult& ImpactResult, const FVector& ImpactVelocity) {
}

void ARSTProjectile::OnPostGame() {
}

void ARSTProjectile::OnHomingTargetInvisible(const FGameplayTag InTag, int32 NewCount) {
}

void ARSTProjectile::OnHomingTargetDied(AActor* OwningActor, const AActor* InInstigator) {
}

void ARSTProjectile::OnCollisionComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

TArray<FGameplayEffectSpecHandle> ARSTProjectile::MakeEffectSpecs(UAbilitySystemComponent* ASC) {
    return TArray<FGameplayEffectSpecHandle>();
}

bool ARSTProjectile::IsPiercingRound() const {
    return false;
}

bool ARSTProjectile::IsDormant() const {
    return false;
}

FGameplayTag ARSTProjectile::GetHitGameplayCue_Implementation(AActor* HitActor) {
    return FGameplayTag{};
}

int32 ARSTProjectile::GetBounceCount() const {
    return 0;
}

UAbilitySystemComponent* ARSTProjectile::GetAbilitySystemComponent() const {
    return NULL;
}

void ARSTProjectile::FindAndRegisterHomingTarget(const FGameplayTagContainer& GameplayTagFilter) {
}



bool ARSTProjectile::BP_ShouldRespondToOverlap_Implementation(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
    return false;
}

bool ARSTProjectile::BP_ShouldRespondToHit_Implementation(UPrimitiveComponent* MyComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit) {
    return false;
}



bool ARSTProjectile::AllowedToPierce(const AActor* OtherActor) const {
    return false;
}

void ARSTProjectile::ActivateProjectile(const FVector& Velocity) {
}

void ARSTProjectile::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ARSTProjectile, bIsDormant);
    DOREPLIFETIME(ARSTProjectile, BouncesAcknowledged);
}



#pragma once
#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/HitResult.h"
#include "AbilitySystemInterface.h"
#include "GameplayCueInterface.h"
#include "GameplayEffect.h"
#include "GameplayTagContainer.h"
#include "GameplayTagAssetInterface.h"
#include "GameplayTagContainer.h"
#include "ModularCharacter.h"
#include "ERSTCharacterWeightClass.h"
#include "ERSTThreatGroup.h"
#include "OnRSTTeamIndexChangedDelegateDelegate.h"
#include "RSTActorOpacityControllable.h"
#include "RSTAttackableInterface.h"
#include "RSTCharacter_DeathEventDelegate.h"
#include "RSTCombatInterface.h"
#include "RSTComponentCollisionOverride.h"
#include "RSTDamageModifiable.h"
#include "RSTHomingTargetable.h"
#include "RSTInheritableGameplayTagPropertyMap.h"
#include "RSTPingableInterface.h"
#include "RSTPropertyModifiable.h"
#include "RSTRangedCombatInterface.h"
#include "RSTReplicatedAcceleration.h"
#include "RSTReplicatedMovement.h"
#include "RSTTagIdentifierInterface.h"
#include "RSTTeamAgentInterface.h"
#include "RSTCharacter.generated.h"

class AActor;
class APawn;
class ARSTPlayerController;
class ARSTPlayerState;
class UPrimitiveComponent;
class URDialogueComponent;
class URSTAbilitySystemComponent;
class URSTActorOpacityComponent;
class URSTCombatComponent;
class URSTHealthComponent;
class URSTMapDisplayComponent;
class URSTPawnDefinition;
class URSTPawnExtensionComponent;
class URSTRangedCombatComponent;
class URSTTriggerInstigatorComponent;

UCLASS(Blueprintable)
class OMD4_API ARSTCharacter : public AModularCharacter/*, public IAbilitySystemInterface, public IRSTTeamAgentInterface, public IRSTCombatInterface, public IRSTAttackableInterface, public IRSTRangedCombatInterface, public IRSTPingableInterface, public IRSTHomingTargetable, public IRSTPropertyModifiable, public IRSTActorOpacityControllable, public IRSTTagIdentifierInterface, public IGameplayTagAssetInterface, public IRSTDamageModifiable, public IGameplayCueInterface*/ {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PingSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTActorOpacityComponent* ActorOpacityComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 DefaultThreatCap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 LargeThreatCap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 RangedThreatCap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 HuntersThreatCap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 BossThreatCap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> IgnoredAggroTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 RiftPointCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float RiftPointIgnoreChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTInheritableGameplayTagPropertyMap PropertyMappings;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTCharacter_DeathEvent OnDeathStartedDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTPawnExtensionComponent* PawnExtComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTHealthComponent* HealthComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTCombatComponent* CombatComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTRangedCombatComponent* RangedCombatComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URDialogueComponent* DialogueComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTTriggerInstigatorComponent* TriggerInstigatorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag HitReactCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ShieldBrokenCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ShieldDamagedCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ShieldSpawnCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MyTeamID, meta=(AllowPrivateAccess=true))
    FGenericTeamId MyTeamID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DeathVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DeathImpulse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DeathImpulseImpactPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DeathImpulseBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ReplicatedAcceleration, meta=(AllowPrivateAccess=true))
    FRSTReplicatedAcceleration ReplicatedAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_RSTReplicatedMovement, meta=(AllowPrivateAccess=true))
    FRSTReplicatedMovement RSTReplicatedMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRSTTeamIndexChangedDelegate OnTeamChangedDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThreatValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTMapDisplayComponent* MapDisplayComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LaunchBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HomingTargetSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AirborneRecoveryTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ComponentCollisionOverrides, meta=(AllowPrivateAccess=true))
    TArray<FRSTComponentCollisionOverride> ComponentCollisionOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, float> CueCooldownTimes;
    
public:
    ARSTCharacter(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void StartAdvance();
    
    UFUNCTION(BlueprintCallable)
    void SelfDestruct();
    
    UFUNCTION(BlueprintCallable)
    void RemoveRootCollisionOverride(UPARAM(Ref) FGuid& Guid);
    
    UFUNCTION(BlueprintCallable)
    void RemoveMeshCollisionOverride(UPARAM(Ref) FGuid& Guid);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RagdollDeath(bool bApplyForce);
    
public:
    UFUNCTION(BlueprintCallable)
    void Ragdoll(bool bDetachFromRoot);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnShieldMaxChanged(URSTHealthComponent* NewHealthComponent, float OldValue, float NewValue, AActor* DamageCauser, const FHitResult& HitResult, bool bHasSpec, const FGameplayEffectSpec& Spec);
    
    UFUNCTION(BlueprintCallable)
    void OnShieldChangedAuthority(URSTHealthComponent* HealthComp, float OldValue, float NewValue, const FGameplayEffectSpec& Spec);
    
    UFUNCTION(BlueprintCallable)
    void OnRevived(AActor* OwningActor, const AActor* InInstigator);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_RSTReplicatedMovement();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedAcceleration();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_MyTeamID(FGenericTeamId OldTeamID);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ComponentCollisionOverrides();
    
    UFUNCTION(BlueprintCallable)
    void OnHealthChangedAuthority(URSTHealthComponent* HealthComp, float OldValue, float NewValue, const FGameplayEffectSpec& Spec);
    
    UFUNCTION(BlueprintCallable)
    void OnDowned(AActor* OwningActor, const AActor* InInstigator);
    
    UFUNCTION(BlueprintCallable)
    void OnDeathStarted(AActor* OwningActor, const AActor* InInstigator);
    
    UFUNCTION(BlueprintCallable)
    void OnDeathFinished(AActor* OwningActor, const AActor* InInstigator);
    
    UFUNCTION(BlueprintCallable)
    void OnDamageTaken(URSTHealthComponent* HealthComp, float Damage, AActor* DamageCauser, const FHitResult& HitResult, bool bHasSpec, const FGameplayEffectSpec& Spec);
    
public:
    UFUNCTION(BlueprintCallable)
    void LaunchCharacter_NoSpec(FVector LaunchVelocity, bool bXYOverride, bool bZOverride);
    
    UFUNCTION(BlueprintCallable)
    bool IsDeadOrDying();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBeingGrappled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasCollisionOverride(UPrimitiveComponent* PrimComp) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAirborneRecoveryTag(const FGameplayTag& Tag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERSTCharacterWeightClass GetWeightClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ARSTPlayerState* GetRSTPlayerState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ARSTPlayerController* GetRSTPlayerController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URSTAbilitySystemComponent* GetRSTAbilitySystemComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRiftPointIgnoreChance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRiftPointCost() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URSTPawnDefinition* GetPawnDefinition() const;
    
    UFUNCTION(BlueprintCallable)
    void FinishAdvance();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnDeathStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnDeathFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnDamageTaken(float Damage, AActor* DamageCauser, const FHitResult& HitResult, bool bHasSpec, const FGameplayEffectSpec& Spec);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_AbilitySystemInitialized();
    
public:
    UFUNCTION(BlueprintCallable)
    FGuid ApplyRootCollisionOverride(FName NewCollisionProfile);
    
    UFUNCTION(BlueprintCallable)
    FGuid ApplyMeshCollisionOverride(FName NewCollisionProfile);
    
    UFUNCTION(BlueprintCallable)
    void ApplyAirborneRecovery(FGameplayTag Tag);
    

    // Fix for true pure virtual functions not being implemented
    //UFUNCTION(BlueprintCallable)
    //bool UsesAggroCap() const override PURE_VIRTUAL(UsesAggroCap, return false;);
    //
    //UFUNCTION(BlueprintCallable)
    //bool IsFixed() override PURE_VIRTUAL(IsFixed, return false;);
    //
    //UFUNCTION(BlueprintCallable)
    //bool IsAggroImmune() const override PURE_VIRTUAL(IsAggroImmune, return false;);
    //
    //UFUNCTION(BlueprintCallable)
    //bool HasPendingAttackLoc() override PURE_VIRTUAL(HasPendingAttackLoc, return false;);
    //
    //UFUNCTION(BlueprintCallable)
    //float GetThreatValue() override PURE_VIRTUAL(GetThreatValue, return 0.0f;);
    //
    //UFUNCTION(BlueprintCallable)
    //uint8 GetThreatCap(ERSTThreatGroup ThreatGroup) const override PURE_VIRTUAL(GetThreatCap, return 0;);
    //
    //UFUNCTION(BlueprintCallable)
    //FGameplayTagContainer GetIgnoredAggroTags() const override PURE_VIRTUAL(GetIgnoredAggroTags, return FGameplayTagContainer{};);
    //
    //UFUNCTION(BlueprintCallable)
    //FVector GetAttackLoc(FVector AttackerLoc, AActor* Attacker, float RangeToCheck, bool bRangedAttack) override PURE_VIRTUAL(GetAttackLoc, return FVector{};);
    //
    //UFUNCTION(BlueprintCallable)
    //bool CanBeAggroed(APawn* Attacker, ERSTThreatGroup ThreatGroup) const override PURE_VIRTUAL(CanBeAggroed, return false;);
    //
    //UFUNCTION(BlueprintCallable)
    //bool HasMatchingGameplayTag(FGameplayTag tagToCheck) const override PURE_VIRTUAL(HasMatchingGameplayTag, return false;);
    //
    //UFUNCTION(BlueprintCallable)
    //bool HasAnyMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAnyMatchingGameplayTags, return false;);
    //
    //UFUNCTION(BlueprintCallable)
    //bool HasAllMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAllMatchingGameplayTags, return false;);
    //
    //UFUNCTION(BlueprintCallable)
    //void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(GetOwnedGameplayTags,);
    //
    //UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    //void ForwardGameplayCueToParent() override PURE_VIRTUAL(ForwardGameplayCueToParent,);
    //
};


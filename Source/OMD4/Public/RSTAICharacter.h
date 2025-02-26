#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/HitResult.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "GameplayEffectTypes.h"
#include "GameplayEffect.h"
#include "GameplayTagContainer.h"
#include "Components/GameFrameworkComponentDelegates.h"
#include "RSTAbilitySet_GrantedHandles.h"
#include "RSTAdditionalPickupTable.h"
#include "RSTCharacter.h"
#include "RSTInteractableTarget.h"
#include "RSTInteractionOption.h"
#include "RSTLooseTagHandle.h"
#include "Templates/SubclassOf.h"
#include "RSTAICharacter.generated.h"

class AActor;
class ARSTFlyoff;
class ARSTPlayerState;
class UAnimMontage;
class URSTAbilitySystemComponent;
class URSTDamageModifierComponent;
class URSTDeathEvent_AIDeathStarted;
class URSTHealthComponent;
class URSTModifierComponent;
class URSTPawnDefinition;
class URSTPawnDefinitionEnemy;
class URSTStatusEffectComponent;
class USkeletalMeshComponentBudgeted;

UCLASS(Blueprintable)
class OMD4_API ARSTAICharacter : public ARSTCharacter, public IRSTInteractableTarget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsesAggroCap;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTModifierComponent* ModifierComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponentBudgeted* Skeleton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponentBudgeted* FXMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URSTPawnDefinition* PawnDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URSTPawnDefinitionEnemy* PawnDefinitionEnemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTStatusEffectComponent* StatusEffectComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseOptimizedHitDetection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeadshotRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 Optimized: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 OptimizedNavWalking: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTAbilitySystemComponent* AbilitySystemComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FRSTAbilitySet_GrantedHandles> GrantedAbilityHandles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FRSTLooseTagHandle> GrantedTagHandles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VoiceIndexMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTInteractionOption InteractionOption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FGameplayTag> ImpactBloodGameplayCueTagMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ARSTFlyoff> ComboFlyoffClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PickupDropChanceAddition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PickupDropChanceMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRSTAdditionalPickupTable> AdditionalPickupTables;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NextEvaluateNearbyBreakablesTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EvaluateNearbyBreakablesInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentStencilIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTDamageModifierComponent* DamageModifierComponent;
    
public:
    ARSTAICharacter(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    bool UseHealthBars();
    
public:
    UFUNCTION(BlueprintCallable)
    void UnFreeze();
    
protected:
    UFUNCTION(BlueprintCallable)
    void StartGetUp(TSoftObjectPtr<UAnimMontage> getUpMontage);
    
    UFUNCTION(BlueprintCallable)
    void OnLaunchImpact(const FHitResult& ImpactResult, const FVector& ImpactVelocity);
    
    UFUNCTION(BlueprintCallable)
    void OnInitStateChanged(FActorInitStateChangedParams& Parms);
    
    UFUNCTION(BlueprintCallable)
    void OnHealingTaken(URSTHealthComponent* HealthComp, float Healing, AActor* HealingCauser, const FHitResult& HitResult, bool bHasSpec, const FGameplayEffectSpec& Spec);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_Ground();
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_DoDeathAnimOverride();
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Multicast_SpawnComboFlyoff(int32 FlyoffComboPointCount, ARSTPlayerState* Player);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure=false)
    bool IsHeadshot(FGameplayEffectContextHandle EffectContext) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void Ground();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAdjustedLaunchVelocity(float BaseVelocity) const;
    
    UFUNCTION(BlueprintCallable)
    void Freeze();
    
protected:
    UFUNCTION(BlueprintCallable)
    void EndGetUp();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void DoDeathAnimOverride();
    
    UFUNCTION(BlueprintCallable)
    void DetachLimbs(int32 GibMask, bool bDisableCollision, bool bSpawnGibs, URSTDeathEvent_AIDeathStarted* DeathEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnInteract(const FGameplayAbilityActorInfo& ActorInfo);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_Launched();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_Ground();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void BP_Gibbed(bool blood, bool headExploded);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_EvaluateNearbyBreakables();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void BP_DestroyFX(float LifeSpan, uint8 deathType, const FGameplayTag& animationTag);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_CanInteractWith(AActor* RequestingInteractor, bool& RetValue);
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    void StopInteraction(AActor* InteractingActor) override PURE_VIRTUAL(StopInteraction,);
    
};


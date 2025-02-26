#pragma once
#include "CoreMinimal.h"
#include "Perception/AIPerceptionListenerInterface.h"
#include "GenericTeamAgentInterface.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/CollisionProfile.h"
#include "Engine/HitResult.h"
#include "VisualLogger/VisualLoggerDebugSnapshotInterface.h"
#include "AbilitySystemInterface.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "GameplayAbilitySpecHandle.h"
#include "GameplayTagContainer.h"
#include "GameplayTagAssetInterface.h"
#include "GameplayTagContainer.h"
#include "RNetworkProxyActor.h"
#include "ERSTTeams.h"
#include "ERSTThreatGroup.h"
#include "ERSTTrapPlacementFailureReason.h"
#include "ERSTTrapPlacementFlags.h"
#include "RSTAbilitySet_GrantedHandles.h"
#include "RSTAttackableInterface.h"
#include "RSTDamageModifiable.h"
#include "RSTInheritableGameplayTagPropertyMap.h"
#include "RSTInteractableTarget.h"
#include "RSTInteractionOption.h"
#include "RSTInteractionQuery.h"
#include "RSTLooseTagHandle.h"
#include "RSTPingableInterface.h"
#include "RSTPlayerIdInterface.h"
#include "RSTPropertyModifiable.h"
#include "RSTTagIdentifierInterface.h"
#include "RSTTeamAgentInterface.h"
#include "Templates/SubclassOf.h"
#include "RSTTrap.generated.h"

class AActor;
class APawn;
class ARSTPlayerState;
class ARSTTrap;
class ARSTTrapGrid;
class IRSTTrapCooldownModifierInterface;
class URSTTrapCooldownModifierInterface;
class UBoxComponent;
class UPrimitiveComponent;
class URSTAbilitySystemComponent;
class URSTDamageModifierComponent;
class URSTGameplayAbility_TrapBase;
class URSTMapDisplayComponent;
class URSTModifierComponent;
class URSTTrapDefinition;
class USkeletalMeshComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class OMD4_API ARSTTrap : public ARNetworkProxyActor/*, public IAbilitySystemInterface, public IRSTInteractableTarget, public IRSTTeamAgentInterface, public IRSTAttackableInterface, public IGameplayTagAssetInterface, public IRSTPropertyModifiable, public IRSTTagIdentifierInterface, public IRSTPingableInterface, public IVisualLoggerDebugSnapshotInterface, public IAIPerceptionListenerInterface, public IRSTPlayerIdInterface, public IRSTDamageModifiable*/ {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOverlapDelegate, AActor*, Target);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCooldownModificationChangedDelegate, const TScriptInterface<IRSTTrapCooldownModifierInterface>&, modifier);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* GeneratedBoxCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* MeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* TriggerDisplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTModifierComponent* ModifierComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TriggerVolumeScale;
    
protected:
    UPROPERTY(EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<ARSTTrapGrid>> SeamedTrapGrids;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ARSTTrapGrid> MainTrapGrid;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCooldownModificationChangedDelegate OnCooldownModificationChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTag OverrideActivationCue;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOverlapDelegate OnBeginOverlapTarget;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOverlapDelegate OnEndOverlapTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* TriggerBoxComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> AdditionalTargetFilters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MaxCharges, meta=(AllowPrivateAccess=true))
    int32 MaxCharges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AvailableCharges, meta=(AllowPrivateAccess=true))
    int32 AvailableCharges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ResetCooldownOnApplicationChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bFlyersTriggerFloorTrap: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bResetTrapAtGoBreak: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRSTAbilitySet_GrantedHandles GrantedHandles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRSTLooseTagHandle IdentifierHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTAbilitySystemComponent* AbilitySystemComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TrapOwner, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ARSTPlayerState> TrapOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TrapOwnerPlayerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOwnedByLocalPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ARSTTrap*> ChildTraps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ParentTrap, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ARSTTrap> ParentTrap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 RefundValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumRotations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ERSTTrapPlacementFailureReason LastPlacementFailureReason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsBeingPlaced, meta=(AllowPrivateAccess=true))
    uint8 bIsBeingPlaced: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsPlacementValid, meta=(AllowPrivateAccess=true))
    uint8 bIsPlacementValid: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HasEnoughCoin, meta=(AllowPrivateAccess=true))
    uint8 bHasEnoughCoin: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HasReachedPlacementLimit, meta=(AllowPrivateAccess=true))
    uint8 bHasReachedPlacementLimit: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsSold, meta=(AllowPrivateAccess=true))
    uint8 bIsSold: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPreventSell;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERSTTrapPlacementFlags TrapPlacementTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 VisualFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URSTTrapDefinition* TrapDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThreatValue;
    
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
    FRSTInheritableGameplayTagPropertyMap PropertyMappings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTMapDisplayComponent* MapDisplayComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SightRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag TrapOverlapTag;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TWeakObjectPtr<AActor>, FRSTLooseTagHandle> OverlappingActorTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTDamageModifierComponent* DamageModifierComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FText TrapDisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCollisionProfileName DynamicVolumeProfileName;
    
public:
    ARSTTrap(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool UsesHalfSizePlacement() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool UsesDynamicTriggerVolume() const;
    
    UFUNCTION(BlueprintCallable)
    void UpdateBuffCount(int32 Count);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void UnregisterCooldownModifier(TScriptInterface<IRSTTrapCooldownModifierInterface> InModifier);
    
    UFUNCTION(BlueprintCallable)
    ARSTTrap* TryPlaceAdjacentTrap(TSubclassOf<ARSTTrap> TrapToPlace, FVector Direction);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldCountTowardPlacementLimit() const;
    
    UFUNCTION(BlueprintCallable)
    void SetMaxCharges(int32 InMaxCharges);
    
    UFUNCTION(BlueprintCallable)
    void SetIsDisabled(bool bDisabled);
    
    UFUNCTION(BlueprintCallable)
    void SetBuffPreview(bool bBuffed);
    
    UFUNCTION(BlueprintCallable)
    void SetAvailableCharges(int32 InAvailableCharges);
    
    UFUNCTION(BlueprintCallable)
    bool Sell();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ResetTrap();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RegisterCooldownModifier(TScriptInterface<IRSTTrapCooldownModifierInterface> InModifier);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_TrapOwner();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ParentTrap();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MaxCharges();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsSold(bool bPreviousValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsPlacementValid(bool bPreviousValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsBeingPlaced(bool bPreviousValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HasReachedPlacementLimit(bool bPreviousValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HasEnoughCoin(bool bPreviousValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AvailableCharges();
    
    UFUNCTION(BlueprintCallable)
    void OnPostGame();
    
    UFUNCTION(BlueprintCallable)
    void OnGoBreakChanged(bool bIsGoBreakActive);
    
    UFUNCTION(BlueprintCallable)
    void OnGameEnding();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnDeathStarted(AActor* OwningActor, const AActor* InInstigator);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsValidTarget(AActor* OtherActor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsReadyForActivation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDisabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCooldownActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAbilityActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool IgnoresGridSnapping() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool HasValidTarget();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool HasCooldownModifier() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool HasActiveCooldownModifier() const;
    
    UFUNCTION(BlueprintCallable)
    float HandleCooldownApplication(float InBaseDuration);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    ERSTTrapPlacementFlags GetTrapPlacementTypes() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ETeamAttitude::Type GetTeamAttitudeTowardsActor(const AActor* Other) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ERSTTeams GetTeam() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    FGameplayTag GetSellTrapCue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URSTAbilitySystemComponent* GetRSTAbilitySystemComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    int32 GetRefundValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    FGameplayTag GetPlacementLimitGroup() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    FGameplayTag GetPlacementCue() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayAbilitySpecHandle GetPassiveAbilitySpecHandle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URSTGameplayAbility_TrapBase* GetPassiveAbilityInstance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URSTGameplayAbility_TrapBase* GetPassiveAbility() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool GetOverlappedActors(TArray<AActor*>& OutOverlappedActors) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    TEnumAsByte<EAxis::Type> GetDynamicTriggerVolumeAxis() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    ERSTTrapPlacementFlags GetDefaultTrapPlacementTypes() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    float GetActiveCooldownTimeRemaining_Authority() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayAbilitySpecHandle GetActiveAbilitySpecHandle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URSTGameplayAbility_TrapBase* GetActiveAbilityInstance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URSTGameplayAbility_TrapBase* GetActiveAbilityCDO() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool GetActivatingActors(TArray<AActor*>& OutActivatingActors) const;
    
    UFUNCTION(BlueprintCallable)
    bool ConsumeActivatingActors(TArray<AActor*>& OutActivatingActors, int32 Count);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool CanRotate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool CanModifyCooldown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool CanEverActivate();
    
    UFUNCTION(BlueprintCallable)
    void CancelCurrentAbility();
    
protected:
    UFUNCTION(BlueprintCallable)
    void BroadcastCooldownModificationChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_TriggerVolumeDynamicallyAdjusted(bool bHit, FHitResult HitResult);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_TrapVisualsUpdated(int32 NewFlags, int32 OldFlags);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SellableEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SellableBegin();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnRotateTrap();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnPostGame();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnInteract(const FGameplayAbilityActorInfo& ActorInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnGameEnding();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnDeactivated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnActivated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_NotifyPropertyPreModify(const FGameplayTag& Tag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_NotifyPropertyModified(const FGameplayTag& Tag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_MaxChargesChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_LastPlacementFailureReasonChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_IsSoldChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_IsPlacementValidChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_IsBeingPlacedChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_HasReachedPlacementLimitChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_HasEnoughCoinChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float BP_HandleCooldownApplication(float InBaseDuration, float ModifiedDuration);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_GoBreakChanged(bool bIsGoBreakActive);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector BP_GetInteractableLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    void BP_GetActorEyesViewPoint(FVector& OutLocation, FRotator& OutRotation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<FRSTInteractionOption> BP_GatherInteractionOptions(const FRSTInteractionQuery& InteractQuery);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void BP_DisabledEnded();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void BP_CooldownModifierUnregistered(const TScriptInterface<IRSTTrapCooldownModifierInterface>& InModifier);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void BP_CooldownModifiersChanged();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void BP_CooldownModifierRegistered(const TScriptInterface<IRSTTrapCooldownModifierInterface>& InModifier);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void BP_CooldownEnded();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void BP_CooldownBegan();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_AvailableChargesChanged();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void BP_ActiveAbilityFired();
    
public:
    UFUNCTION(BlueprintCallable)
    void AdjustPlacementHeight();
    
    UFUNCTION(BlueprintCallable)
    void ActivateWithoutDelay();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    

    // Fix for true pure virtual functions not being implemented
    /*UFUNCTION(BlueprintCallable)
    void StopInteraction(AActor* InteractingActor) override PURE_VIRTUAL(StopInteraction,);
    
    UFUNCTION(BlueprintCallable)
    bool UsesAggroCap() const override PURE_VIRTUAL(UsesAggroCap, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool IsFixed() override PURE_VIRTUAL(IsFixed, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool IsAggroImmune() const override PURE_VIRTUAL(IsAggroImmune, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasPendingAttackLoc() override PURE_VIRTUAL(HasPendingAttackLoc, return false;);
    
    UFUNCTION(BlueprintCallable)
    float GetThreatValue() override PURE_VIRTUAL(GetThreatValue, return 0.0f;);
    
    UFUNCTION(BlueprintCallable)
    uint8 GetThreatCap(ERSTThreatGroup ThreatGroup) const override PURE_VIRTUAL(GetThreatCap, return 0;);*/
    
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
};


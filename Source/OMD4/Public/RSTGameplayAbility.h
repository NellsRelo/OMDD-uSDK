#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimTypes.h"
#include "Components/SkinnedMeshComponent.h"
#include "Abilities/GameplayAbility.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "GameplayAbilitySpecHandle.h"
#include "GameplayPrediction.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "ERSTAbilityActivationGroup.h"
#include "ERSTAbilityActivationPolicy.h"
#include "RSTAbilityCancelCondition.h"
#include "RSTInheritableGameplayTagPropertyMap.h"
#include "RSTLooseTagHandle.h"
#include "RSTPropertyModifiable.h"
#include "Templates/SubclassOf.h"
#include "RSTGameplayAbility.generated.h"

class AController;
class ARSTCharacter;
class ARSTPlayerController;
class UAnimMontage;
class URSTAbilityCost;
class URSTAbilitySystemComponent;
class URSTAbilityUIData;
class URSTCameraMode;
class URSTDeathEvent;
class URSTHeroComponent;
class USkeletalMeshComponent;

UCLASS(Abstract, Blueprintable)
class OMD4_API URSTGameplayAbility : public UGameplayAbility, public IRSTPropertyModifiable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ActivationStatTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer StatIdentifierTags;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTInheritableGameplayTagPropertyMap PropertyMappings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERSTAbilityActivationPolicy ActivationPolicy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bResetOnSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERSTAbilityActivationGroup ActivationGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<URSTAbilityCost*> AdditionalCosts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FText> FailureTagToUserFacingMessages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, UAnimMontage*> FailureTagToAnimMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLogCancelation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRecordAbilityEndTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> SupplementalOwnedTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseSetByCallerCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag OverrideSetByCallerTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SetByCallerCooldownDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseTagCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClientOnlyCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TagCooldownDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag TagCooldownIdentifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FRSTLooseTagHandle> AppliedLooseTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReleaseLooseTagsOnAbilityEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRSTLooseTagHandle InterruptImmunityHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRSTLooseTagHandle DamageImmunityHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRSTLooseTagHandle FlinchImmunityHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRSTLooseTagHandle KnockbackImmunityHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<URSTAbilityUIData> UIData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery UIDataShowQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UIDataPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRSTAbilityCancelCondition> ConditionalCancellationData;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBlockTrapPlacementOnActivation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBlockTrapSellingOnActivation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyPostEndTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer PostEndTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PostEndTagsDuration;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag BloodTag;
    
public:
    URSTGameplayAbility();

    UFUNCTION(BlueprintCallable)
    void UnlockRotation();
    
    UFUNCTION(BlueprintCallable)
    void UnlockMovement();
    
    UFUNCTION(BlueprintCallable)
    void SetCameraMode(TSubclassOf<URSTCameraMode> CameraMode);
    
protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_PerformTaggedPrediction(FGameplayTag Tag, FPredictionKey Key);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ScriptOnAbilityFailedToActivate(const FGameplayTagContainer& FailedReason) const;
    
public:
    UFUNCTION(BlueprintCallable)
    void RestoreAvatarSkeletalMeshTickSettings();
    
    UFUNCTION(BlueprintCallable)
    void RemoveManagedLooseTag(UPARAM(Ref) FRSTLooseTagHandle& InHandle);
    
    UFUNCTION(BlueprintCallable)
    void RemoveInvalidManagedLooseTags();
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllManagedLooseTags();
    
    UFUNCTION(BlueprintCallable)
    void PerformTaggedPrediction(FGameplayTag Tag);
    
    UFUNCTION(BlueprintCallable)
    void OverrideAvatarSkeletalMeshTickSettings(EVisibilityBasedAnimTickOption TickOption, USkeletalMeshComponent* OptionalMeshComp);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName MontageGetSectionName();
    
    UFUNCTION(BlueprintCallable)
    void MontageConcludeLoop(FName StartSectionName, FName LoopSectionName, FName EndSectionName);
    
    UFUNCTION(BlueprintCallable)
    void LockRotation();
    
    UFUNCTION(BlueprintCallable)
    void LockMovement(bool bReplicate);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnPropertyPreModify(const FGameplayTag& Tag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnPropertyModified(const FGameplayTag& Tag);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnNewAvatarSet();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnAnimNotifyStateEnd(const FGameplayTag& NotifyTag, const FAnimNotifyEvent& NotifyEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnAnimNotifyStateBegin(const FGameplayTag& NotifyTag, const FAnimNotifyEvent& NotifyEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnAnimNotify(const FGameplayTag& NotifyTag, const FAnimNotifyEvent& NotifyEvent);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnAbilityAdded();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocalPlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActive() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetSetByCallerValues(TMap<FGameplayTag, float>& OutSetByCallerValues) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ARSTPlayerController* GetRSTPlayerControllerFromActorInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ARSTCharacter* GetRSTCharacterFromActorInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URSTAbilitySystemComponent* GetRSTAbilitySystemComponentFromActorInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URSTHeroComponent* GetHeroComponentFromActorInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGrantedBySetByCallerValue(FGameplayTag GameplayTag) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    float GetCooldownDuration() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AController* GetControllerFromActorInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetCheckCostEffectLevel(FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo ActorInfo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetApplyCostEffectLevel(FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo ActorInfo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ConfigureDeathEvent(ARSTCharacter* Target, URSTDeathEvent* DeathEvent) const;
    
    UFUNCTION(BlueprintCallable)
    void ClearCameraMode();
    
    UFUNCTION(BlueprintCallable)
    bool ChangeActivationGroup(ERSTAbilityActivationGroup NewGroup);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool CanChangeActivationGroup(ERSTAbilityActivationGroup NewGroup) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BP_PerformTaggedPrediction(FGameplayTag Tag);
    
public:
    UFUNCTION(BlueprintCallable)
    void BlockTrapSelling();
    
    UFUNCTION(BlueprintCallable)
    void BlockTrapPlacement();
    
    UFUNCTION(BlueprintCallable)
    FRSTLooseTagHandle ApplyManagedLooseTags(FGameplayTagContainer Tags, bool bReplicate);
    
    UFUNCTION(BlueprintCallable)
    FRSTLooseTagHandle ApplyManagedLooseTag(FGameplayTag Tag, bool bReplicate);
    
    UFUNCTION(BlueprintCallable)
    void AllowTrapSelling();
    
    UFUNCTION(BlueprintCallable)
    void AllowTrapPlacement();
    

    // Fix for true pure virtual functions not being implemented
};


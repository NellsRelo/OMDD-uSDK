#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/HitResult.h"
#include "Engine/TimerHandle.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "AbilitySystemComponent.h"
#include "GameplayAbilitySpecHandle.h"
#include "GameplayEffectTypes.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "GameplayPrediction.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "ERSTCharacterWeightClass.h"
#include "RSTAbilityInputDeferData.h"
#include "RSTCueDataPair.h"
#include "RSTDeferredInputState.h"
#include "RSTLooseTagHandle.h"
#include "RSTManagedLooseTagData.h"
#include "RSTMeleeAbilityHitContext.h"
#include "Templates/SubclassOf.h"
#include "RSTAbilitySystemComponent.generated.h"

class ARSTCharacter;
class UGameplayAbility;
class UObject;
class URSTAbilitySystemComponent;
class URSTAbilityTagRelationshipMapping;
class URSTCueData;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OMD4_API URSTAbilitySystemComponent : public UAbilitySystemComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRSTAbilityGrantDelegate, UGameplayAbility*, Ability);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnStatusChangedDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTAbilityGrantDelegate OnAbilityAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTAbilityGrantDelegate OnAbilityRemoved;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTAbilityGrantDelegate OnAbilityInstanceAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTAbilityGrantDelegate OnAbilityInstanceRemoved;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URSTAbilityTagRelationshipMapping* TagRelationshipMapping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FRSTAbilityInputDeferData> DeferredInputData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<int32, FRSTDeferredInputState> DeferredInputTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FRSTLooseTagHandle, FRSTManagedLooseTagData> ManagedLooseTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FRSTLooseTagHandle, FTimerHandle> LooseTagTimerHandles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer StatusChangeTagContainer;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStatusChangedDelegate OnStatusChangedDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, URSTCueData*> CueDataMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CueData, meta=(AllowPrivateAccess=true))
    TArray<FRSTCueDataPair> CueDataArr;
    
public:
    URSTAbilitySystemComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void TrackAbilityEnded(const FAbilityEndedData& EndedData);
    
    UFUNCTION(Reliable, Server)
    void Server_ApplyMeleeWeaponHitFromSource(const FHitResult& Hit, URSTAbilitySystemComponent* Source, const FRSTMeleeAbilityHitContext& Context, FPredictionKey PredictionKey);
    
    UFUNCTION(Reliable, Server)
    void Server_ApplyMeleeWeaponHit(const FHitResult& Hit, URSTAbilitySystemComponent* Target, const FRSTMeleeAbilityHitContext& Context, FPredictionKey PredictionKey);
    
public:
    UFUNCTION(BlueprintCallable)
    void RemoveTimedLooseTagByTimerHandle(UPARAM(Ref) FTimerHandle& Handle);
    
    UFUNCTION(BlueprintCallable)
    void RemoveManagedLooseTagsByHandle(UPARAM(Ref) FRSTLooseTagHandle& InHandle);
    
    UFUNCTION(BlueprintCallable)
    void RemoveManagedLooseTagByHandle(UPARAM(Ref) FRSTLooseTagHandle& InHandle);
    
    UFUNCTION(BlueprintCallable)
    void RemoveGameplayCueLocal(const FGameplayTag GameplayCueTag, FGameplayCueParameters& GameplayCueParameters);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllManagedLooseTags();
    
    UFUNCTION(BlueprintCallable)
    void RegisterCueDataFromClass(FGameplayTag Tag, TSubclassOf<URSTCueData> CueDataClass);
    
    UFUNCTION(BlueprintCallable)
    void RegisterCueData(FGameplayTag Tag, URSTCueData* CueData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    FString PrintAbilityEndTimes() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnTimedLooseTagFinished(FRSTLooseTagHandle Handle);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CueData();
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_Launch(ARSTCharacter* Character, const FVector& LaunchVelocity, ERSTCharacterWeightClass MaxWeightClass, UGameplayAbility* AbilityCDO, bool bRagdoll, int32 Priority);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_GrappleSelfToLocation(const FVector& Location, float Speed, float HoldDuration, ERSTCharacterWeightClass MaxWeightClass, URSTAbilitySystemComponent* SourceASC, UGameplayAbility* AbilityCDO);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAbilityActive(const FGameplayAbilitySpecHandle& SpecHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasCueData(FGameplayTag Tag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasActiveAbilitiesWithTags(const FGameplayTagContainer& WithTags);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool GetLowestAbilityEndedTime(FGameplayTagContainer Tags, float& OutTime) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool GetLowestAbilityEndedElapsedTime(FGameplayTagContainer Tags, float& OutTime) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool GetHighestAbilityEndedTime(FGameplayTagContainer Tags, float& OutTime) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool GetHighestAbilityEndedElapsedTime(FGameplayTagContainer Tags, float& OutTime) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URSTCueData* GetCueData(FGameplayTag Tag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool GetAbilityEndedTime(FGameplayTag Tag, float& OutTime) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool GetAbilityEndedElapsedTime(FGameplayTag Tag, float& OutTime) const;
    
    UFUNCTION(BlueprintCallable)
    void FreeCueData(FGameplayTag Tag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FGameplayAbilitySpecHandle> FindAllAbilitySpecHandlesWithTags(FGameplayTagContainer Tags, bool bExact, UObject* OptionalSourceObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FGameplayAbilitySpecHandle> FindAllAbilitySpecHandlesWithTag(FGameplayTag Tag, bool bExact, UObject* OptionalSourceObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayAbilitySpecHandle FindAbilitySpecHandleWithTags(FGameplayTagContainer Tags, bool bExact, UObject* OptionalSourceObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayAbilitySpecHandle FindAbilitySpecHandleWithTag(FGameplayTag Tag, bool bExact, UObject* OptionalSourceObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayAbilitySpecHandle FindAbilitySpecHandleForClass(TSubclassOf<UGameplayAbility> AbilityClass, UObject* OptionalSourceObject);
    
    UFUNCTION(BlueprintCallable)
    void ExecuteGameplayCueLocal(const FGameplayTag GameplayCueTag, UPARAM(Ref) FGameplayCueParameters& GameplayCueParameters);
    
protected:
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientNotifyAbilityFailed(const UGameplayAbility* Ability, const FGameplayTagContainer& FailureReason);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_NotifyKnockback(FName KnockbackTaskName, FVector Direction, float Distance, float Height, float Duration);
    
    UFUNCTION(BlueprintCallable)
    void CancelAbilitiesWithTag(FGameplayTagContainer WithTags, FGameplayTagContainer WithoutTags, UGameplayAbility* IgnoreAbility);
    
    UFUNCTION(BlueprintCallable)
    void BP_HandleGameplayEvent(FGameplayTag Tag, FGameplayEventData Data);
    
    UFUNCTION(BlueprintCallable)
    FTimerHandle AddTimedLooseTags(FGameplayTagContainer InTags, bool bReplicateTag, float Duration);
    
    UFUNCTION(BlueprintCallable)
    FTimerHandle AddTimedLooseTag(FGameplayTag InTag, bool bReplicateTag, float Duration);
    
    UFUNCTION(BlueprintCallable)
    FTimerHandle AddSingleTickLooseTags(FGameplayTagContainer InTags);
    
    UFUNCTION(BlueprintCallable)
    FTimerHandle AddSingleTickLooseTag(FGameplayTag InTag);
    
    UFUNCTION(BlueprintCallable)
    FRSTLooseTagHandle AddManagedLooseTags(FGameplayTagContainer InTags, bool bReplicateTag, bool bAllowOnSimulatedProxy);
    
    UFUNCTION(BlueprintCallable)
    FRSTLooseTagHandle AddManagedLooseTag(FGameplayTag InTag, bool bReplicate, bool bAllowOnSimulatedProxy);
    
    UFUNCTION(BlueprintCallable)
    void AddGameplayCueLocal(const FGameplayTag GameplayCueTag, FGameplayCueParameters& GameplayCueParameters);
    
};


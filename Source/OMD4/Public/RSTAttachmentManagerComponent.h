#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "ERSTPlayerAttachmentEventType.h"
#include "RSTAttachmentTransactionHandle.h"
#include "RSTSpawnedAttachmentData.h"
#include "RSTAttachmentManagerComponent.generated.h"

class AActor;
class ARSTAttachment;
class UFXSystemComponent;
class UMeshComponent;
class URSTAttachmentDefinition;
class URSTAttachmentManagerComponent;
class URSTSkinDefinition;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OMD4_API URSTAttachmentManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FRSTAttachmentManagerCallback);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<URSTAttachmentDefinition>> DefaultAttachmentSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer DefaultAttachmentGroupVisibility;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTAttachmentManagerCallback OnAttachmentsChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FRSTSpawnedAttachmentData> SpawnedAttachments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ReplicatedShownGroups, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ReplicatedShownGroups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ReplicatedSlotData, meta=(AllowPrivateAccess=true))
    TArray<URSTAttachmentDefinition*> ReplicatedSlotData;
    
public:
    URSTAttachmentManagerComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void TriggerPlayerAttachmentEvent(ERSTPlayerAttachmentEventType Event, FGameplayTag AttachmentSlot, FGameplayTagContainer AdditionalContextData);
    
    UFUNCTION(BlueprintCallable)
    FRSTAttachmentTransactionHandle ShowGroup(FGameplayTagContainer Groups);
    
    UFUNCTION(BlueprintCallable)
    FRSTAttachmentTransactionHandle ShowExclusiveGroups(FGameplayTagContainer Groups, FGameplayTagContainer Ignore);
    
    UFUNCTION(BlueprintCallable)
    FRSTAttachmentTransactionHandle SetGroupVisibility(FGameplayTagContainer Groups, bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    void ResetAttachmentStack();
    
    UFUNCTION(BlueprintCallable)
    bool RemoveSkinVisuals(const URSTSkinDefinition* Skin);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAttachmentTransactionByHandle(UPARAM(Ref) FRSTAttachmentTransactionHandle& InOutHandle);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAttachmentFromDefinition(const URSTAttachmentDefinition* AttachmentDefinition, bool bReplicate);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAttachment(const FGameplayTag& SlotIdentifier, bool bReplicate);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RemoveAllAttachments();
    
    UFUNCTION(BlueprintCallable)
    void OnSpawnedAttachementEndPlay(AActor* InSource, TEnumAsByte<EEndPlayReason::Type> Reason);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedSlotData();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedShownGroups();
    
    UFUNCTION(BlueprintCallable)
    void OnParentHiddenInGame(AActor* SelfActor, bool bIsHidden);
    
public:
    UFUNCTION(BlueprintCallable)
    FRSTAttachmentTransactionHandle HideGroup(FGameplayTagContainer Groups);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAttachment(const FGameplayTag& SlotIdentifier) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ARSTAttachment* GetSpawnedAttachmentForSlot(const FGameplayTag& SlotIdentifier) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void GetAttachments(TArray<ARSTAttachment*>& Attachments) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAttachmentMeshes(TArray<UMeshComponent*>& AttachmentMeshes, bool bClearArray) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAttachmentFXSystems(TArray<UFXSystemComponent*>& AttachmentFXSystems, bool bClearArray) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URSTAttachmentDefinition* GetAttachmentDefinitionForSlot(const FGameplayTag& SlotIdentifier) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static URSTAttachmentManagerComponent* FindAttachmentManagerComponent(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    bool ApplySkinVisuals(const URSTSkinDefinition* Skin);
    
    UFUNCTION(BlueprintCallable)
    void AddAttachment(const URSTAttachmentDefinition* AttachmentDefinition, bool bWarnDuplicates, bool bReplicate);
    
};


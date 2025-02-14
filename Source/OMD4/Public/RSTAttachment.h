#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "GameplayTagAssetInterface.h"
#include "GameplayTagContainer.h"
#include "RSTAttachment.generated.h"

class UFXSystemComponent;
class UMeshComponent;
class USceneComponent;

UCLASS(Abstract, Blueprintable)
class OMD4_API ARSTAttachment : public AActor, public IGameplayTagAssetInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseDefaultVisibilityBehavior;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTagContainer> VisualVariantTagConditions;
    
public:
    ARSTAttachment(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnVisualVariantTagsChanged(FGameplayTag Tag, int32 Count);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCurrentVisualVariantChanged(const FGameplayTagContainer& VisualTagContainer, bool bRevertToDefaults);
    
    UFUNCTION(BlueprintCallable)
    void OnCurrentChargeUpdated(FGameplayTag UpdatedTag);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USceneComponent* GetPrimaryComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetMeshComponents(TArray<UMeshComponent*>& OutComponents) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetFXComponents(TArray<UFXSystemComponent*>& OutComponents) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetChargeCount(const FGameplayTag& GameplayTag) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_UltimateFired(const FGameplayTagContainer& AdditionalContextData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SpecialFired(const FGameplayTagContainer& AdditionalContextData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetAttachmentVisibility(bool bVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SecondaryFired(const FGameplayTagContainer& AdditionalContextData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_Reload(const FGameplayTagContainer& AdditionalContextData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_PrimaryFired(const FGameplayTagContainer& AdditionalContextData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    USceneComponent* BP_GetPrimaryComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<UMeshComponent*> BP_GetMeshComponents() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<UFXSystemComponent*> BP_GetFXComponents() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_Deactivated(const FGameplayTagContainer& AdditionalContextData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ChargeStarted(const FGameplayTagContainer& AdditionalContextData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ChargeLevelIncreased(const FGameplayTagContainer& AdditionalContextData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ChargeEnded(const FGameplayTagContainer& AdditionalContextData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_Cancelled(const FGameplayTagContainer& AdditionalContextData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_AttachmentUnequipped(const FGameplayTagContainer& AdditionalContextData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_AttachmentEquipped(const FGameplayTagContainer& AdditionalContextData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_AmmoCountChanged(const FGameplayTagContainer& AdditionalContextData);
    

    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION(BlueprintCallable)
    bool HasMatchingGameplayTag(FGameplayTag tagToCheck) const override PURE_VIRTUAL(HasMatchingGameplayTag, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAnyMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAnyMatchingGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAllMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAllMatchingGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(GetOwnedGameplayTags,);
    
};


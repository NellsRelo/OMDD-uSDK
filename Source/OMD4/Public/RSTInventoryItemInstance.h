#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Info.h"
#include "GameplayTagContainer.h"
#include "GameplayTagAssetInterface.h"
#include "GameplayTagContainer.h"
#include "RSTInheritableGameplayTagPropertyMap.h"
#include "RSTInventoryItemUpgradeRequest.h"
#include "RSTItemUpgradeList.h"
#include "RSTPropertyModifiable.h"
#include "Templates/SubclassOf.h"
#include "RSTInventoryItemInstance.generated.h"

class URSTInventoryItemDefinition;
class URSTInventoryItemFragment;
class URSTItemUpgradeDefinition;
class URSTModifierComponent;

UCLASS(Blueprintable)
class OMD4_API ARSTInventoryItemInstance : public AInfo, public IRSTPropertyModifiable, public IGameplayTagAssetInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URSTModifierComponent* ModifierComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTInheritableGameplayTagPropertyMap PropertyMappings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    URSTInventoryItemDefinition* ItemDef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsInHotbar: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FRSTItemUpgradeList ConfirmedUpgradeLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<URSTItemUpgradeDefinition*, int32> PreviousUpgradeLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<URSTItemUpgradeDefinition*, int32> PreviewUpgradeLevels;
    
public:
    ARSTInventoryItemInstance(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetItemUpgradePreview(const URSTItemUpgradeDefinition* ItemUpgrade, int32 UpgradeLevel);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetItemDef(const URSTInventoryItemDefinition* InDef);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_ConfirmItemUpgrades(const TArray<FRSTInventoryItemUpgradeRequest>& Requests, int32 TotalSkullCost);
    
public:
    UFUNCTION(BlueprintCallable)
    bool RequestItemUpgrades();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHiddenInSpellbook() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalPreviewUpgradeSkullCost() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPreviewItemUpgradeLevel(const URSTItemUpgradeDefinition* ItemUpgrade) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNextPreviewUpgradeSkullCost() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<URSTItemUpgradeDefinition*> GetItemUpgrades() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetDisplayName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetDisplayDescription() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetConfirmedItemUpgradeLevel(const URSTItemUpgradeDefinition* ItemUpgrade) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    URSTInventoryItemFragment* FindFragmentByClass(TSubclassOf<URSTInventoryItemFragment> FragmentClass) const;
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ConfirmItemUpgrades(bool bSuccess, int32 TotalSkullCost);
    

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


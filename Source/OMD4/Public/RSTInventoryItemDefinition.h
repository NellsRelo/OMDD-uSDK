#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "RSTInventoryItemPropertyDisplayEntry.h"
#include "Templates/SubclassOf.h"
#include "RSTInventoryItemDefinition.generated.h"

class AActor;
class ARSTInventoryItemInstance;
class URSTInventoryItemDefinition;
class URSTInventoryItemFragment;
class URSTItemUpgradeDefinition;

UCLASS(Blueprintable, Const)
class OMD4_API URSTInventoryItemDefinition : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ARSTInventoryItemInstance> InstanceClass;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Identifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayDescription;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bPurchasable: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHideInSpellbook: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bTransient: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<URSTInventoryItemDefinition*> AuxiliaryItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<URSTInventoryItemFragment*> Fragments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<URSTItemUpgradeDefinition*> Upgrades;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRSTInventoryItemPropertyDisplayEntry> Properties;
    
    URSTInventoryItemDefinition();

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure=false)
    ARSTInventoryItemInstance* SpawnInstanceActor(AActor* Owner, const URSTInventoryItemDefinition* ItemDef) const;
    
};


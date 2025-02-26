#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "RSTPickupWeightedTableEntry.h"
#include "RSTPickupWeightedTable.generated.h"

UCLASS(Blueprintable)
class OMD4_API URSTPickupWeightedTable : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag PickupWeightedTableTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRSTPickupWeightedTableEntry> PickupDropTableEntryCollection;
    
    URSTPickupWeightedTable();

};


#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RSTInventoryItemUpgradeRequest.h"
#include "RSTInventoryItemRequest.generated.h"

USTRUCT(BlueprintType)
struct OMD4_API FRSTInventoryItemRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPrimaryAssetId InventoryItemPrimaryAssetId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRSTInventoryItemUpgradeRequest> Upgrades;
    
    FRSTInventoryItemRequest();
};


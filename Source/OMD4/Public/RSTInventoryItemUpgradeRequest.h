#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RSTInventoryItemUpgradeRequest.generated.h"

USTRUCT(BlueprintType)
struct OMD4_API FRSTInventoryItemUpgradeRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPrimaryAssetId ItemUpgradePrimaryAssetId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UpgradeLevel;
    
    FRSTInventoryItemUpgradeRequest();
};


#pragma once
#include "CoreMinimal.h"
#include "RSTSavedItemUpgradeData.generated.h"

class URSTItemUpgradeDefinition;

USTRUCT(BlueprintType)
struct OMD4_API FRSTSavedItemUpgradeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<URSTItemUpgradeDefinition*, int32> UpgradeLevels;
    
    FRSTSavedItemUpgradeData();
};


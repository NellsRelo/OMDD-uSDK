#pragma once
#include "CoreMinimal.h"
#include "RSTSelectedUpgradeData.generated.h"

class URSTUpgradeDefinition;

USTRUCT(BlueprintType)
struct FRSTSelectedUpgradeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<URSTUpgradeDefinition*> SelectedUpgrades;
    
    OMD4_API FRSTSelectedUpgradeData();
};


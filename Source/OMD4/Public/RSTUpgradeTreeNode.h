#pragma once
#include "CoreMinimal.h"
#include "RSTUpgradeTreeNode.generated.h"

class URSTUpgradeDefinition;

USTRUCT(BlueprintType)
struct FRSTUpgradeTreeNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URSTUpgradeDefinition* Upgrade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<URSTUpgradeDefinition*> Children;
    
    OMD4_API FRSTUpgradeTreeNode();
};


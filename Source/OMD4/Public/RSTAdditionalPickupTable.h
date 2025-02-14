#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RSTAdditionalPickupTable.generated.h"

USTRUCT(BlueprintType)
struct OMD4_API FRSTAdditionalPickupTable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag WeightedTableTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChanceToDrop;
    
    FRSTAdditionalPickupTable();
};


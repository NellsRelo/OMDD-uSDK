#pragma once
#include "CoreMinimal.h"
#include "RSTSavedPlayerLoadout.generated.h"

class URSTInventoryItemDefinition;

USTRUCT(BlueprintType)
struct OMD4_API FRSTSavedPlayerLoadout {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<URSTInventoryItemDefinition*> Items;
    
    FRSTSavedPlayerLoadout();
};


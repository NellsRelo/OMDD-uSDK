#pragma once
#include "CoreMinimal.h"
#include "RSTInventoryItemMessage.generated.h"

class ARSTInventoryItemInstance;

USTRUCT(BlueprintType)
struct OMD4_API FRSTInventoryItemMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARSTInventoryItemInstance* InventoryItem;
    
    FRSTInventoryItemMessage();
};


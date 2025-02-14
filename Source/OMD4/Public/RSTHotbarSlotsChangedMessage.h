#pragma once
#include "CoreMinimal.h"
#include "RSTHotbarMessage.h"
#include "RSTHotbarSlotsChangedMessage.generated.h"

class ARSTInventoryItemInstance;

USTRUCT(BlueprintType)
struct OMD4_API FRSTHotbarSlotsChangedMessage : public FRSTHotbarMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ARSTInventoryItemInstance*> Slots;
    
    FRSTHotbarSlotsChangedMessage();
};


#pragma once
#include "CoreMinimal.h"
#include "RSTHotbarMessage.h"
#include "RSTHotbarActiveIndexChangedMessage.generated.h"

USTRUCT(BlueprintType)
struct OMD4_API FRSTHotbarActiveIndexChangedMessage : public FRSTHotbarMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActiveSlotIndex;
    
    FRSTHotbarActiveIndexChangedMessage();
};


#pragma once
#include "CoreMinimal.h"
#include "RSTHotbarMessage.generated.h"

class APlayerState;

USTRUCT(BlueprintType)
struct OMD4_API FRSTHotbarMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerState* Owner;
    
    FRSTHotbarMessage();
};


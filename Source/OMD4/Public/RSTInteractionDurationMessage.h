#pragma once
#include "CoreMinimal.h"
#include "RSTInteractionDurationMessage.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FRSTInteractionDurationMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Instigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    OMD4_API FRSTInteractionDurationMessage();
};


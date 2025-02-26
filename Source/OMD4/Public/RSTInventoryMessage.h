#pragma once
#include "CoreMinimal.h"
#include "RSTInventoryMessage.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct OMD4_API FRSTInventoryMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Owner;
    
    FRSTInventoryMessage();
};


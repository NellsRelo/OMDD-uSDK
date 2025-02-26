#pragma once
#include "CoreMinimal.h"
#include "RSTFlyoffRequest.h"
#include "RSTHealingFlyoffRequest.generated.h"

USTRUCT(BlueprintType)
struct OMD4_API FRSTHealingFlyoffRequest : public FRSTFlyoffRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealingValue;
    
    FRSTHealingFlyoffRequest();
};


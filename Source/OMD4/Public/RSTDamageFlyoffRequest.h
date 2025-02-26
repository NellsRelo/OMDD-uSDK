#pragma once
#include "CoreMinimal.h"
#include "RSTFlyoffRequest.h"
#include "RSTDamageFlyoffRequest.generated.h"

USTRUCT(BlueprintType)
struct OMD4_API FRSTDamageFlyoffRequest : public FRSTFlyoffRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageValue;
    
    FRSTDamageFlyoffRequest();
};


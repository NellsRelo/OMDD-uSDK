#pragma once
#include "CoreMinimal.h"
#include "RSTRange.generated.h"

USTRUCT(BlueprintType)
struct OMD4_API FRSTRange {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Max;
    
    FRSTRange();
};


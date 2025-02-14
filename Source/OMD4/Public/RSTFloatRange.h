#pragma once
#include "CoreMinimal.h"
#include "RSTFloatRange.generated.h"

USTRUCT(BlueprintType)
struct OMD4_API FRSTFloatRange {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Max;
    
    FRSTFloatRange();
};


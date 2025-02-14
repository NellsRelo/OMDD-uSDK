#pragma once
#include "CoreMinimal.h"
#include "RSTInt32Range.generated.h"

USTRUCT(BlueprintType)
struct OMD4_API FRSTInt32Range {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Max;
    
    FRSTInt32Range();
};


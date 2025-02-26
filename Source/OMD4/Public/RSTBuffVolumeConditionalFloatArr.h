#pragma once
#include "CoreMinimal.h"
#include "RSTBuffVolumeConditionalFloat.h"
#include "RSTBuffVolumeConditionalFloatArr.generated.h"

USTRUCT(BlueprintType)
struct FRSTBuffVolumeConditionalFloatArr {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRSTBuffVolumeConditionalFloat> Floats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultVal;
    
    OMD4_API FRSTBuffVolumeConditionalFloatArr();
};


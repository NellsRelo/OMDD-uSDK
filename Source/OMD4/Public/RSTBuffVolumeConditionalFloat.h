#pragma once
#include "CoreMinimal.h"
#include "RSTBuffVolumeConditions.h"
#include "RSTBuffVolumeConditionalFloat.generated.h"

USTRUCT(BlueprintType)
struct FRSTBuffVolumeConditionalFloat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTBuffVolumeConditions Conditions;
    
    OMD4_API FRSTBuffVolumeConditionalFloat();
};


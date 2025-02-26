#pragma once
#include "CoreMinimal.h"
#include "RSTBuffVolumeConditions.h"
#include "RSTBuffVolumeElement.generated.h"

USTRUCT(BlueprintType)
struct FRSTBuffVolumeElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGrantOnce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTBuffVolumeConditions Conditions;
    
    OMD4_API FRSTBuffVolumeElement();
};


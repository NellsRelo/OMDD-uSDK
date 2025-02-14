#pragma once
#include "CoreMinimal.h"
#include "RSTDownedData.generated.h"

USTRUCT(BlueprintType)
struct FRSTDownedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TotalDownedDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DownedDeathTime;
    
    OMD4_API FRSTDownedData();
};


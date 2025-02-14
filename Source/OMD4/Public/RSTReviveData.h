#pragma once
#include "CoreMinimal.h"
#include "RSTReviveData.generated.h"

USTRUCT(BlueprintType)
struct FRSTReviveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    OMD4_API FRSTReviveData();
};


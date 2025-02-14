#pragma once
#include "CoreMinimal.h"
#include "RSTRangedFirePointData.h"
#include "RSTRangedFirePointArray.generated.h"

USTRUCT(BlueprintType)
struct FRSTRangedFirePointArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRSTRangedFirePointData> Data;
    
    OMD4_API FRSTRangedFirePointArray();
};


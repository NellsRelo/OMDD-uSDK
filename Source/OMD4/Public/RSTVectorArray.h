#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RSTVectorArray.generated.h"

USTRUCT(BlueprintType)
struct FRSTVectorArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> Arr;
    
    OMD4_API FRSTVectorArray();
};


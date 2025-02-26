#pragma once
#include "CoreMinimal.h"
#include "RSTModifierSpec.h"
#include "RSTModifierSpecArray.generated.h"

USTRUCT(BlueprintType)
struct FRSTModifierSpecArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRSTModifierSpec> Arr;
    
    OMD4_API FRSTModifierSpecArray();
};


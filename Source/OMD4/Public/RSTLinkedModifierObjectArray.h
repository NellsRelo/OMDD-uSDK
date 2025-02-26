#pragma once
#include "CoreMinimal.h"
#include "RSTLinkedModifierObjects.h"
#include "RSTLinkedModifierObjectArray.generated.h"

USTRUCT(BlueprintType)
struct FRSTLinkedModifierObjectArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRSTLinkedModifierObjects> Arr;
    
    OMD4_API FRSTLinkedModifierObjectArray();
};


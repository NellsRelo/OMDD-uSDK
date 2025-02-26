#pragma once
#include "CoreMinimal.h"
#include "RSTModifierSubobjectArray.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FRSTModifierSubobjectArray {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AActor>> Arr;
    
    OMD4_API FRSTModifierSubobjectArray();
};


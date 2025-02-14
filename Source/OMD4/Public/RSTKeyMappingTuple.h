#pragma once
#include "CoreMinimal.h"
#include "EnhancedActionKeyMapping.h"
#include "RSTKeyMappingTuple.generated.h"

class UInputMappingContext;

USTRUCT(BlueprintType)
struct FRSTKeyMappingTuple {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputMappingContext* InputMappingContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnhancedActionKeyMapping KeyMapping;
    
    OMD4_API FRSTKeyMappingTuple();
};


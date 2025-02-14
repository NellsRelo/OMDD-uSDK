#pragma once
#include "CoreMinimal.h"
#include "ERSTAdditionalGameplayEffectSetByCallerType.h"
#include "RSTAdditionalGESetByCallerEntry.generated.h"

USTRUCT(BlueprintType)
struct FRSTAdditionalGESetByCallerEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ERSTAdditionalGameplayEffectSetByCallerType AggregationType;
    
    OMD4_API FRSTAdditionalGESetByCallerEntry();
};


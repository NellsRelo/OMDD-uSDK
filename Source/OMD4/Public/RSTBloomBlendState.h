#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RSTBloomBlendState.generated.h"

USTRUCT(BlueprintType)
struct FRSTBloomBlendState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Source;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    OMD4_API FRSTBloomBlendState();
};


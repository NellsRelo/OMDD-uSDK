#pragma once
#include "CoreMinimal.h"
#include "CommonInputTypeEnum.h"
#include "RSTLoadedMappableConfigPair.generated.h"

class UPlayerMappableInputConfig;

USTRUCT(BlueprintType)
struct FRSTLoadedMappableConfigPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayerMappableInputConfig* Config;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECommonInputType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsActive;
    
    OMD4_API FRSTLoadedMappableConfigPair();
};


#pragma once
#include "CoreMinimal.h"
#include "RSTSubmixEffectChainMap.generated.h"

class USoundEffectSubmixPreset;
class USoundSubmix;

USTRUCT(BlueprintType)
struct OMD4_API FRSTSubmixEffectChainMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundSubmix> Submix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<USoundEffectSubmixPreset>> SubmixEffectChain;
    
    FRSTSubmixEffectChainMap();
};


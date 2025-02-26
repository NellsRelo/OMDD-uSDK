#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RSTPlayerStatusEffectDataRepl.generated.h"

USTRUCT(BlueprintType)
struct FRSTPlayerStatusEffectDataRepl {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag StatusEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ServerStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    OMD4_API FRSTPlayerStatusEffectDataRepl();
};


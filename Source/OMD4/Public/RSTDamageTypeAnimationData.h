#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RSTDamageTypeAnimationData.generated.h"

USTRUCT(BlueprintType)
struct FRSTDamageTypeAnimationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag DamageTypeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag DeathAnimationTag;
    
    OMD4_API FRSTDamageTypeAnimationData();
};


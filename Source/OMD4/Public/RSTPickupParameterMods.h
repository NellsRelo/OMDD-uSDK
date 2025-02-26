#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RSTPickupParameterMods.generated.h"

USTRUCT(BlueprintType)
struct OMD4_API FRSTPickupParameterMods {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery TargetPickupTagQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeightMultiplier;
    
    FRSTPickupParameterMods();
};


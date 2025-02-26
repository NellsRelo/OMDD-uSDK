#pragma once
#include "CoreMinimal.h"
#include "RSTAbilityGrant.generated.h"

class UGameplayAbility;

USTRUCT(BlueprintType)
struct FRSTAbilityGrant {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UGameplayAbility> AbilityType;
    
    OMD4_API FRSTAbilityGrant();
};


#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RSTModifierSubobjectTargetData.generated.h"

USTRUCT(BlueprintType)
struct FRSTModifierSubobjectTargetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Identifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequireExact;
    
    OMD4_API FRSTModifierSubobjectTargetData();
};


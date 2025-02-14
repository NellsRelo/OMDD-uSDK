#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RSTTrapDiscount.generated.h"

USTRUCT(BlueprintType)
struct OMD4_API FRSTTrapDiscount {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DiscountPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery ItemTagFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsed;
    
    FRSTTrapDiscount();
};


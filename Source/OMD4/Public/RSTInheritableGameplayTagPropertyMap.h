#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RSTGameplayTagPropertyMap.h"
#include "RSTInheritableGameplayTagPropertyMap.generated.h"

USTRUCT(BlueprintType)
struct OMD4_API FRSTInheritableGameplayTagPropertyMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTGameplayTagPropertyMap CombinedMapping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTGameplayTagPropertyMap AddedProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> RemovedProperties;
    
    FRSTInheritableGameplayTagPropertyMap();
};


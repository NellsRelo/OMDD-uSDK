#pragma once
#include "CoreMinimal.h"
#include "RSTGameplayTagPropertyMapping.h"
#include "RSTGameplayTagPropertyMap.generated.h"

USTRUCT(BlueprintType)
struct OMD4_API FRSTGameplayTagPropertyMap {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRSTGameplayTagPropertyMapping> PropertyMappings;
    
public:
    FRSTGameplayTagPropertyMap();
};


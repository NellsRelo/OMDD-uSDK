#pragma once
#include "CoreMinimal.h"
#include "RSTAttributeSetGrant.generated.h"

class UAttributeSet;
class UDataTable;

USTRUCT(BlueprintType)
struct FRSTAttributeSetGrant {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UAttributeSet> AttributeSetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> InitializationData;
    
    OMD4_API FRSTAttributeSetGrant();
};


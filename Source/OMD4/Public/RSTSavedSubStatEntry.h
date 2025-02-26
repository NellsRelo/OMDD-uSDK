#pragma once
#include "CoreMinimal.h"
#include "RSTSavedSubStatEntry.generated.h"

USTRUCT(BlueprintType)
struct OMD4_API FRSTSavedSubStatEntry {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 StatVal;
    
    FRSTSavedSubStatEntry();
};


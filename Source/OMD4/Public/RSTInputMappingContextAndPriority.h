#pragma once
#include "CoreMinimal.h"
#include "RSTInputMappingContextAndPriority.generated.h"

class UInputMappingContext;

USTRUCT(BlueprintType)
struct FRSTInputMappingContextAndPriority {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UInputMappingContext> InputMapping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRegisterWithSettings;
    
    OMD4_API FRSTInputMappingContextAndPriority();
};


#pragma once
#include "CoreMinimal.h"
#include "RSTThreadOption.generated.h"

class URSTMetaThreadDefinition;

USTRUCT(BlueprintType)
struct FRSTThreadOption {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URSTMetaThreadDefinition* Thread;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNotInLoadout;
    
    OMD4_API FRSTThreadOption();
};


#pragma once
#include "CoreMinimal.h"
#include "RSTSettingsStringOption.generated.h"

USTRUCT(BlueprintType)
struct FRSTSettingsStringOption {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BackingValue;
    
    OMD4_API FRSTSettingsStringOption();
};


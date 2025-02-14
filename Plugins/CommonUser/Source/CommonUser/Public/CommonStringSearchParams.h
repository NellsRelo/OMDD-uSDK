#pragma once
#include "CoreMinimal.h"
#include "CommonStringSearchParams.generated.h"

USTRUCT(BlueprintType)
struct COMMONUSER_API FCommonStringSearchParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SettingName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SettingValue;
    
    FCommonStringSearchParams();
};


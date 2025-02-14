#pragma once
#include "CoreMinimal.h"
#include "CommonInt64SearchParams.generated.h"

USTRUCT(BlueprintType)
struct COMMONUSER_API FCommonInt64SearchParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SettingName;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 SettingValue;
    
    FCommonInt64SearchParams();
};


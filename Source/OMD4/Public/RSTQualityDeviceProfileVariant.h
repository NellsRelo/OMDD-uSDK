#pragma once
#include "CoreMinimal.h"
#include "RSTQualityDeviceProfileVariant.generated.h"

USTRUCT(BlueprintType)
struct FRSTQualityDeviceProfileVariant {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DeviceProfileSuffix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinRefreshRate;
    
    OMD4_API FRSTQualityDeviceProfileVariant();
};


#pragma once
#include "CoreMinimal.h"
#include "Engine/PlatformSettings.h"
#include "ERSTFramePacingMode.h"
#include "RSTQualityDeviceProfileVariant.h"
#include "RSTPlatformSpecificRenderingSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class URSTPlatformSpecificRenderingSettings : public UPlatformSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DefaultDeviceProfileSuffix;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRSTQualityDeviceProfileVariant> UserFacingDeviceProfileOptions;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSupportsGranularVideoQualitySettings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSupportsAutomaticVideoQualityBenchmark;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERSTFramePacingMode FramePacingMode;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> MobileFrameRateLimits;
    
    URSTPlatformSpecificRenderingSettings();

};


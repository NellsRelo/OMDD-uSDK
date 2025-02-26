#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettingsBackedByCVars.h"
#include "Engine/PlatformSettings.h"
#include "RSTPerformanceStatGroup.h"
#include "RSTPerformanceSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class URSTPerformanceSettings : public UDeveloperSettingsBackedByCVars {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerPlatformSettings PerPlatformSettings;
    
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> DesktopFrameRateLimits;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRSTPerformanceStatGroup> UserFacingPerformanceStats;
    
    URSTPerformanceSettings();

};


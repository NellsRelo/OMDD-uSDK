#pragma once
#include "CoreMinimal.h"
#include "Engine/PlatformSettings.h"
#include "RSTPlatformSharedIconSettings.generated.h"

class UTexture2D;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class URSTPlatformSharedIconSettings : public UPlatformSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> NativePlatformIcon;
    
    URSTPlatformSharedIconSettings();

};


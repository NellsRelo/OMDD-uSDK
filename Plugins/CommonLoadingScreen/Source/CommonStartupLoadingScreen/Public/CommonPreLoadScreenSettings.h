#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettingsBackedByCVars.h"
#include "Styling/SlateBrush.h"
#include "CommonPreLoadScreenSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class UCommonPreLoadScreenSettings : public UDeveloperSettingsBackedByCVars {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush BackgroundBrush;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush ForegroundBrush;
    
    UCommonPreLoadScreenSettings();

};


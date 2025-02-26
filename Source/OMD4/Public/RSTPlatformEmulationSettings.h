#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettingsBackedByCVars.h"
#include "GameplayTagContainer.h"
#include "RSTPlatformEmulationSettings.generated.h"

UCLASS(Blueprintable, MinimalAPI, Config=EditorPerProjectUserSettings)
class URSTPlatformEmulationSettings : public UDeveloperSettingsBackedByCVars {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AdditionalPlatformTraitsToEnable;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AdditionalPlatformTraitsToSuppress;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PretendPlatform;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PretendBaseDeviceProfile;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyFrameRateSettingsInPIE;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyFrontEndPerformanceOptionsInPIE;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyDeviceProfilesInPIE;
    
public:
    URSTPlatformEmulationSettings();

private:
    UFUNCTION(BlueprintCallable)
    TArray<FName> GetKnownPlatformIds() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FName> GetKnownDeviceProfiles() const;
    
};


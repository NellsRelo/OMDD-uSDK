#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DLSSLibrary.h"
#include "GameFramework/GameUserSettings.h"
#include "ERSTDisplayablePerformanceStat.h"
#include "ERSTStatDisplayMode.h"
#include "RSTSettingsStringOption.h"
#include "RSTSettingsLocal.generated.h"

class ULocalPlayer;
class UPlayerMappableInputConfig;
class USoundControlBus;
class USoundControlBusMix;

UCLASS(Blueprintable, Config=Engine)
class URSTSettingsLocal : public UGameUserSettings {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ERSTDisplayablePerformanceStat, ERSTStatDisplayMode> DisplayStatList;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisplayGamma;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FrameRateLimit_OnBattery;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FrameRateLimit_InMenu;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FrameRateLimit_WhenBackgrounded;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MobileFrameRateLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString DesiredUserChosenDeviceProfileSuffix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString CurrentAppliedDeviceProfileOverrideSuffix;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserChosenDeviceProfileSuffix;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDesiredHeadphoneMode;
    
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseHeadphoneMode;
    
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseHDRAudioMode;
    
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AudioOutputDeviceId;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverallVolume;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MusicVolume;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SoundFXVolume;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DialogueVolume;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EnemyDialogueVolume;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VoiceChatInputVolume;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VoiceChatOutputVolume;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVoiceChatPushToTalk;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVoiceChatEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bVoiceChatPermissionAvailable;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString VoiceChatInputDeviceId;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString VoiceChatOutputDeviceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, USoundControlBus*> ControlBusMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USoundControlBusMix* ControlBusMix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bSoundControlBusMixLoaded;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SafeZoneScale;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ControllerPlatform;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ControllerPreset;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InputConfigName;
    
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLookInvert;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LookSensitivity;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D SplitLookSensitivity;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSplitLookSensitivity;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ADSLookSensitivity;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D SplitADSLookSensitivity;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSplitADSLookSensitivity;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGamepadAimAssistEnabled;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseGamepadAsCursor;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GamepadCursorSpeed;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GamepadCursorDeadzone;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSubtitlesEnabled;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDLSSMode DLSSMode;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScreenPercentage;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AntiAliasingMethod;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GlobalIlluminationMethod;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ReflectionMethod;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FoliageDensity;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FoliageCullDistance;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bNaniteEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseVirtualShadowMaps: 1;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bLumenHardwareRayTracing: 1;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bNavWalking: 1;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOptimizedHitDetectionFull: 1;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOptimizedHitDetectionPartial: 1;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOctreeTriggerVolumes: 1;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseHealthBars: 1;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDrawMapWidgets: 1;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnableGlobalInvalidation: 1;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LastSeenPatchNotesVersion;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowBreakableObjects;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLinkToExternalAccount;
    
public:
    URSTSettingsLocal();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldShowBreakableObjects() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldRunAutoBenchmarkAtStartup() const;
    
    UFUNCTION(BlueprintCallable)
    void SetVoiceChatPushToTalk(ULocalPlayer* LocalPlayer, bool InEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetVoiceChatPermissionAvailable(ULocalPlayer* LocalPlayer, bool bInVerified);
    
    UFUNCTION(BlueprintCallable)
    void SetVoiceChatOutputVolume(ULocalPlayer* LocalPlayer, float InVolume);
    
    UFUNCTION(BlueprintCallable)
    void SetVoiceChatOutputDeviceId(ULocalPlayer* LocalPlayer, const FString& DeviceID);
    
    UFUNCTION(BlueprintCallable)
    void SetVoiceChatInputVolume(ULocalPlayer* LocalPlayer, float InVolume);
    
    UFUNCTION(BlueprintCallable)
    void SetVoiceChatInputDeviceId(ULocalPlayer* LocalPlayer, const FString& DeviceID);
    
    UFUNCTION(BlueprintCallable)
    void SetVoiceChatEnabled(ULocalPlayer* LocalPlayer, bool InEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetUseVirtualShadowMaps(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetUseHealthBars(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetUseGamepadAsCursor(bool ShouldUseCursor);
    
    UFUNCTION(BlueprintCallable)
    void SetSubtitlesEnabled(bool AreSubtitlesEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetSplitLookSensitivityY(float Sens);
    
    UFUNCTION(BlueprintCallable)
    void SetSplitLookSensitivityX(float Sens);
    
    UFUNCTION(BlueprintCallable)
    void SetSoundFXVolume(float InVolume);
    
    UFUNCTION(BlueprintCallable)
    void SetShowBreakableObjects(bool bInShowBreakableObjects);
    
    UFUNCTION(BlueprintCallable)
    void SetScreenPercentage(float InScreenPercentage);
    
    UFUNCTION(BlueprintCallable)
    void SetSafeZone(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetReflectionMethod(const FString& InMethod);
    
    UFUNCTION(BlueprintCallable)
    void SetOverallVolume(float InVolume);
    
    UFUNCTION(BlueprintCallable)
    void SetOptimizedHitDetectionPartial(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetOptimizedHitDetectionFull(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetOctreeTriggerVolumes(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetNavWalking(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetNaniteEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetMusicVolume(float InVolume);
    
    UFUNCTION(BlueprintCallable)
    void SetLumenHardwareRayTracing(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetLookSensitivity(float Sens);
    
    UFUNCTION(BlueprintCallable)
    void SetLinkToExternalAccount(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetLastSeenPatchNotesVersion(const FString& InLastSeenPatchNotesVersion);
    
    UFUNCTION(BlueprintCallable)
    void SetIsSplitLookSensitivity(bool IsSplitLookSens);
    
    UFUNCTION(BlueprintCallable)
    void SetIsLookInvert(bool IsLookInvert);
    
    UFUNCTION(BlueprintCallable)
    void SetIsADSSplitLookSensitivity(bool IsSplitLookSens);
    
    UFUNCTION(BlueprintCallable)
    void SetHeadphoneModeEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetHDRAudioModeEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetGraphicsQuality(int32 InGraphicsQuality);
    
    UFUNCTION(BlueprintCallable)
    void SetGlobalIlluminationMethod(const FString& InMethod);
    
    UFUNCTION(BlueprintCallable)
    void SetGamepadCursorSpeed(float NewSpeedNormalized);
    
    UFUNCTION(BlueprintCallable)
    void SetGamepadCursorDeadzone(float DeadZone);
    
    UFUNCTION(BlueprintCallable)
    void SetGamepadAimAssistEnabled(bool GamepadAimAssistEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetFrameRateLimit_WhenBackgrounded(float NewLimitFPS);
    
    UFUNCTION(BlueprintCallable)
    void SetFrameRateLimit_OnBattery(float NewLimitFPS);
    
    UFUNCTION(BlueprintCallable)
    void SetFrameRateLimit_InMenu(float NewLimitFPS);
    
    UFUNCTION(BlueprintCallable)
    void SetFrameRateLimit_Always(float NewLimitFPS);
    
    UFUNCTION(BlueprintCallable)
    void SetFoliageDensity(float InDensity);
    
    UFUNCTION(BlueprintCallable)
    void SetFoliageCullDistance(float InCullDistance);
    
    UFUNCTION(BlueprintCallable)
    void SetEnemyDialogueVolume(float InVolume);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableGlobalInvalidation(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetDrawMapWidgets(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetDLSSMode(UDLSSMode InDLSSMode);
    
    UFUNCTION(BlueprintCallable)
    void SetDisplayGamma(float InGamma);
    
    UFUNCTION(BlueprintCallable)
    void SetDialogueVolume(float InVolume);
    
    UFUNCTION(BlueprintCallable)
    void SetDesiredDeviceProfileQualitySuffix(const FString& InDesiredSuffix);
    
    UFUNCTION(BlueprintCallable)
    void SetControllerPlatform(const FName InControllerPlatform);
    
    UFUNCTION(BlueprintCallable)
    void SetAudioOutputDeviceId(const FString& InAudioOutputDeviceId);
    
    UFUNCTION(BlueprintCallable)
    void SetAntiAliasingMethod(const FString& InAntiAliasingMethod);
    
    UFUNCTION(BlueprintCallable)
    void SetADSSplitLookSensitivityY(float Sens);
    
    UFUNCTION(BlueprintCallable)
    void SetADSSplitLookSensitivityX(float Sens);
    
    UFUNCTION(BlueprintCallable)
    void SetADSLookSensitivity(float Sens);
    
    UFUNCTION(BlueprintCallable)
    void RunAutoBenchmark(bool bSaveImmediately);
    
    UFUNCTION(BlueprintCallable)
    bool IsSafeZoneSet() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsHeadphoneModeEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsHDRAudioModeEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDLSSSupported() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDLSSEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetVoiceChatPushToTalk() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetVoiceChatPermissionAvailable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetVoiceChatOutputVolume() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetVoiceChatOutputDeviceId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetVoiceChatInputVolume() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetVoiceChatInputDeviceId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetVoiceChatEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUseVirtualShadowMaps() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUseHealthBars() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUseGamepadAsCursor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSplitLookSensivityY();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSplitLookSensivityX();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSoundFXVolume() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetShadowsQualtiyOptions(TArray<FRSTSettingsStringOption>& OutOptions) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetScreenPercentage() const;
    
    UFUNCTION(BlueprintCallable)
    float GetSafeZone() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void GetReflectionMethodOptions(TArray<FString>& OutOptions) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetReflectionMethod() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetOverallVolume() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetOverallGraphicsQualityOptions(TArray<FRSTSettingsStringOption>& OutOptions) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetOptimizedHitDetectionPartial() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetOptimizedHitDetectionFull() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetOctreeTriggerVolumes() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetNavWalking() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetNaniteEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMusicVolume() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetLumenHardwareRayTracing() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLookSensivity();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetLinkToExternalAccount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetLastSeenPatchNotesVersion() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsSplitLookSensitivity();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsLookInvert();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsADSSplitLookSensitivity();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPlayerMappableInputConfig* GetInputConfigByName(FName ConfigName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetGraphicsQualityOptions(TArray<FRSTSettingsStringOption>& OutOptions) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetGraphicsQuality() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void GetGlobalIlluminationMethodOptions(TArray<FString>& OutOptions) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetGlobalIlluminationMethod() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGamepadCursorSpeedNormalized();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGamepadCursorSpeed();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGamepadCursorDeadzone();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetGamepadAimAssistEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetFrameRateLimitOptions(TArray<FRSTSettingsStringOption>& OutOptions) const;
    
    UFUNCTION(BlueprintCallable)
    float GetFrameRateLimit_WhenBackgrounded() const;
    
    UFUNCTION(BlueprintCallable)
    float GetFrameRateLimit_OnBattery() const;
    
    UFUNCTION(BlueprintCallable)
    float GetFrameRateLimit_InMenu() const;
    
    UFUNCTION(BlueprintCallable)
    float GetFrameRateLimit_Always() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFoliageDensity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFoliageCullDistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEnemyDialogueVolume() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetEnableGlobalInvalidation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDrawMapWidgets() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDLSSMode GetDLSSMode() const;
    
    UFUNCTION(BlueprintCallable)
    float GetDisplayGamma() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDialogueVolume() const;
    
    UFUNCTION(BlueprintCallable)
    FString GetDesiredDeviceProfileQualitySuffix() const;
    
    UFUNCTION(BlueprintCallable)
    FName GetControllerPlatform() const;
    
    UFUNCTION(BlueprintCallable)
    FString GetAudioOutputDeviceId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAreSubtitlesEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> GetAntiAliasingMethods() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetAntiAliasingMethod() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetADSSplitLookSensivityY();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetADSSplitLookSensivityX();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetADSLookSensivity();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanRunAutoBenchmark() const;
    
    UFUNCTION(BlueprintCallable)
    bool CanModifyHeadphoneModeEnabled() const;
    
};


#include "RSTSettingsLocal.h"

URSTSettingsLocal::URSTSettingsLocal() {
    this->DisplayGamma = 2.20f;
    this->FrameRateLimit_OnBattery = 60.00f;
    this->FrameRateLimit_InMenu = 144.00f;
    this->FrameRateLimit_WhenBackgrounded = 30.00f;
    this->MobileFrameRateLimit = 30;
    this->bDesiredHeadphoneMode = false;
    this->bUseHeadphoneMode = false;
    this->bUseHDRAudioMode = false;
    this->OverallVolume = 1.00f;
    this->MusicVolume = 0.57f;
    this->SoundFXVolume = 0.20f;
    this->DialogueVolume = 0.47f;
    this->EnemyDialogueVolume = 1.00f;
    this->VoiceChatInputVolume = 0.80f;
    this->VoiceChatOutputVolume = 0.80f;
    this->bVoiceChatPushToTalk = false;
    this->bVoiceChatEnabled = true;
    this->bVoiceChatPermissionAvailable = false;
    this->ControlBusMix = NULL;
    this->bSoundControlBusMixLoaded = false;
    this->SafeZoneScale = -1.00f;
    this->ControllerPreset = TEXT("Default");
    this->InputConfigName = TEXT("Default");
    this->bIsLookInvert = false;
    this->LookSensitivity = 1.00f;
    this->bSplitLookSensitivity = false;
    this->ADSLookSensitivity = 0.40f;
    this->bSplitADSLookSensitivity = false;
    this->bGamepadAimAssistEnabled = true;
    this->bUseGamepadAsCursor = true;
    this->GamepadCursorSpeed = 2200.00f;
    this->GamepadCursorDeadzone = 0.10f;
    this->bSubtitlesEnabled = true;
    this->DLSSMode = UDLSSMode::Balanced;
    this->ScreenPercentage = 100.00f;
    this->AntiAliasingMethod = TEXT("TSR");
    this->GlobalIlluminationMethod = TEXT("Lumen");
    this->ReflectionMethod = TEXT("Lumen");
    this->FoliageDensity = 1.00f;
    this->FoliageCullDistance = 0.75f;
    this->bNaniteEnabled = true;
    this->bUseVirtualShadowMaps = true;
    this->bLumenHardwareRayTracing = false;
    this->bNavWalking = true;
    this->bOptimizedHitDetectionFull = false;
    this->bOptimizedHitDetectionPartial = true;
    this->bOctreeTriggerVolumes = false;
    this->bUseHealthBars = true;
    this->bDrawMapWidgets = true;
    this->bEnableGlobalInvalidation = true;
    this->LastSeenPatchNotesVersion = TEXT("TT2");
    this->bShowBreakableObjects = true;
    this->bLinkToExternalAccount = false;
}

bool URSTSettingsLocal::ShouldShowBreakableObjects() const {
    return false;
}

bool URSTSettingsLocal::ShouldRunAutoBenchmarkAtStartup() const {
    return false;
}

void URSTSettingsLocal::SetVoiceChatPushToTalk(ULocalPlayer* LocalPlayer, bool InEnabled) {
}

void URSTSettingsLocal::SetVoiceChatPermissionAvailable(ULocalPlayer* LocalPlayer, bool bInVerified) {
}

void URSTSettingsLocal::SetVoiceChatOutputVolume(ULocalPlayer* LocalPlayer, float InVolume) {
}

void URSTSettingsLocal::SetVoiceChatOutputDeviceId(ULocalPlayer* LocalPlayer, const FString& DeviceID) {
}

void URSTSettingsLocal::SetVoiceChatInputVolume(ULocalPlayer* LocalPlayer, float InVolume) {
}

void URSTSettingsLocal::SetVoiceChatInputDeviceId(ULocalPlayer* LocalPlayer, const FString& DeviceID) {
}

void URSTSettingsLocal::SetVoiceChatEnabled(ULocalPlayer* LocalPlayer, bool InEnabled) {
}

void URSTSettingsLocal::SetUseVirtualShadowMaps(bool bEnabled) {
}

void URSTSettingsLocal::SetUseHealthBars(bool bEnabled) {
}

void URSTSettingsLocal::SetUseGamepadAsCursor(bool ShouldUseCursor) {
}

void URSTSettingsLocal::SetSubtitlesEnabled(bool AreSubtitlesEnabled) {
}

void URSTSettingsLocal::SetSplitLookSensitivityY(float Sens) {
}

void URSTSettingsLocal::SetSplitLookSensitivityX(float Sens) {
}

void URSTSettingsLocal::SetSoundFXVolume(float InVolume) {
}

void URSTSettingsLocal::SetShowBreakableObjects(bool bInShowBreakableObjects) {
}

void URSTSettingsLocal::SetScreenPercentage(float InScreenPercentage) {
}

void URSTSettingsLocal::SetSafeZone(float Value) {
}

void URSTSettingsLocal::SetReflectionMethod(const FString& InMethod) {
}

void URSTSettingsLocal::SetOverallVolume(float InVolume) {
}

void URSTSettingsLocal::SetOptimizedHitDetectionPartial(bool bEnabled) {
}

void URSTSettingsLocal::SetOptimizedHitDetectionFull(bool bEnabled) {
}

void URSTSettingsLocal::SetOctreeTriggerVolumes(bool bEnabled) {
}

void URSTSettingsLocal::SetNavWalking(bool bEnabled) {
}

void URSTSettingsLocal::SetNaniteEnabled(bool bEnabled) {
}

void URSTSettingsLocal::SetMusicVolume(float InVolume) {
}

void URSTSettingsLocal::SetLumenHardwareRayTracing(bool bEnabled) {
}

void URSTSettingsLocal::SetLookSensitivity(float Sens) {
}

void URSTSettingsLocal::SetLinkToExternalAccount(bool Value) {
}

void URSTSettingsLocal::SetLastSeenPatchNotesVersion(const FString& InLastSeenPatchNotesVersion) {
}

void URSTSettingsLocal::SetIsSplitLookSensitivity(bool IsSplitLookSens) {
}

void URSTSettingsLocal::SetIsLookInvert(bool IsLookInvert) {
}

void URSTSettingsLocal::SetIsADSSplitLookSensitivity(bool IsSplitLookSens) {
}

void URSTSettingsLocal::SetHeadphoneModeEnabled(bool bEnabled) {
}

void URSTSettingsLocal::SetHDRAudioModeEnabled(bool bEnabled) {
}

void URSTSettingsLocal::SetGraphicsQuality(int32 InGraphicsQuality) {
}

void URSTSettingsLocal::SetGlobalIlluminationMethod(const FString& InMethod) {
}

void URSTSettingsLocal::SetGamepadCursorSpeed(float NewSpeedNormalized) {
}

void URSTSettingsLocal::SetGamepadCursorDeadzone(float DeadZone) {
}

void URSTSettingsLocal::SetGamepadAimAssistEnabled(bool GamepadAimAssistEnabled) {
}

void URSTSettingsLocal::SetFrameRateLimit_WhenBackgrounded(float NewLimitFPS) {
}

void URSTSettingsLocal::SetFrameRateLimit_OnBattery(float NewLimitFPS) {
}

void URSTSettingsLocal::SetFrameRateLimit_InMenu(float NewLimitFPS) {
}

void URSTSettingsLocal::SetFrameRateLimit_Always(float NewLimitFPS) {
}

void URSTSettingsLocal::SetFoliageDensity(float InDensity) {
}

void URSTSettingsLocal::SetFoliageCullDistance(float InCullDistance) {
}

void URSTSettingsLocal::SetEnemyDialogueVolume(float InVolume) {
}

void URSTSettingsLocal::SetEnableGlobalInvalidation(bool bEnabled) {
}

void URSTSettingsLocal::SetDrawMapWidgets(bool bEnabled) {
}

void URSTSettingsLocal::SetDLSSMode(UDLSSMode InDLSSMode) {
}

void URSTSettingsLocal::SetDisplayGamma(float InGamma) {
}

void URSTSettingsLocal::SetDialogueVolume(float InVolume) {
}

void URSTSettingsLocal::SetDesiredDeviceProfileQualitySuffix(const FString& InDesiredSuffix) {
}

void URSTSettingsLocal::SetControllerPlatform(const FName InControllerPlatform) {
}

void URSTSettingsLocal::SetAudioOutputDeviceId(const FString& InAudioOutputDeviceId) {
}

void URSTSettingsLocal::SetAntiAliasingMethod(const FString& InAntiAliasingMethod) {
}

void URSTSettingsLocal::SetADSSplitLookSensitivityY(float Sens) {
}

void URSTSettingsLocal::SetADSSplitLookSensitivityX(float Sens) {
}

void URSTSettingsLocal::SetADSLookSensitivity(float Sens) {
}

void URSTSettingsLocal::RunAutoBenchmark(bool bSaveImmediately) {
}

bool URSTSettingsLocal::IsSafeZoneSet() const {
    return false;
}

bool URSTSettingsLocal::IsHeadphoneModeEnabled() const {
    return false;
}

bool URSTSettingsLocal::IsHDRAudioModeEnabled() const {
    return false;
}

bool URSTSettingsLocal::IsDLSSSupported() const {
    return false;
}

bool URSTSettingsLocal::IsDLSSEnabled() const {
    return false;
}

bool URSTSettingsLocal::GetVoiceChatPushToTalk() const {
    return false;
}

bool URSTSettingsLocal::GetVoiceChatPermissionAvailable() const {
    return false;
}

float URSTSettingsLocal::GetVoiceChatOutputVolume() const {
    return 0.0f;
}

FString URSTSettingsLocal::GetVoiceChatOutputDeviceId() const {
    return TEXT("");
}

float URSTSettingsLocal::GetVoiceChatInputVolume() const {
    return 0.0f;
}

FString URSTSettingsLocal::GetVoiceChatInputDeviceId() const {
    return TEXT("");
}

bool URSTSettingsLocal::GetVoiceChatEnabled() const {
    return false;
}

bool URSTSettingsLocal::GetUseVirtualShadowMaps() const {
    return false;
}

bool URSTSettingsLocal::GetUseHealthBars() const {
    return false;
}

bool URSTSettingsLocal::GetUseGamepadAsCursor() {
    return false;
}

float URSTSettingsLocal::GetSplitLookSensivityY() {
    return 0.0f;
}

float URSTSettingsLocal::GetSplitLookSensivityX() {
    return 0.0f;
}

float URSTSettingsLocal::GetSoundFXVolume() const {
    return 0.0f;
}

void URSTSettingsLocal::GetShadowsQualtiyOptions(TArray<FRSTSettingsStringOption>& OutOptions) const {
}

float URSTSettingsLocal::GetScreenPercentage() const {
    return 0.0f;
}

float URSTSettingsLocal::GetSafeZone() const {
    return 0.0f;
}

void URSTSettingsLocal::GetReflectionMethodOptions(TArray<FString>& OutOptions) const {
}

FString URSTSettingsLocal::GetReflectionMethod() const {
    return TEXT("");
}

float URSTSettingsLocal::GetOverallVolume() const {
    return 0.0f;
}

void URSTSettingsLocal::GetOverallGraphicsQualityOptions(TArray<FRSTSettingsStringOption>& OutOptions) const {
}

bool URSTSettingsLocal::GetOptimizedHitDetectionPartial() const {
    return false;
}

bool URSTSettingsLocal::GetOptimizedHitDetectionFull() const {
    return false;
}

bool URSTSettingsLocal::GetOctreeTriggerVolumes() const {
    return false;
}

bool URSTSettingsLocal::GetNavWalking() const {
    return false;
}

bool URSTSettingsLocal::GetNaniteEnabled() const {
    return false;
}

float URSTSettingsLocal::GetMusicVolume() const {
    return 0.0f;
}

bool URSTSettingsLocal::GetLumenHardwareRayTracing() const {
    return false;
}

float URSTSettingsLocal::GetLookSensivity() {
    return 0.0f;
}

bool URSTSettingsLocal::GetLinkToExternalAccount() const {
    return false;
}

FString URSTSettingsLocal::GetLastSeenPatchNotesVersion() const {
    return TEXT("");
}

bool URSTSettingsLocal::GetIsSplitLookSensitivity() {
    return false;
}

bool URSTSettingsLocal::GetIsLookInvert() {
    return false;
}

bool URSTSettingsLocal::GetIsADSSplitLookSensitivity() {
    return false;
}

UPlayerMappableInputConfig* URSTSettingsLocal::GetInputConfigByName(FName ConfigName) const {
    return NULL;
}

void URSTSettingsLocal::GetGraphicsQualityOptions(TArray<FRSTSettingsStringOption>& OutOptions) const {
}

int32 URSTSettingsLocal::GetGraphicsQuality() const {
    return 0;
}

void URSTSettingsLocal::GetGlobalIlluminationMethodOptions(TArray<FString>& OutOptions) const {
}

FString URSTSettingsLocal::GetGlobalIlluminationMethod() const {
    return TEXT("");
}

float URSTSettingsLocal::GetGamepadCursorSpeedNormalized() {
    return 0.0f;
}

float URSTSettingsLocal::GetGamepadCursorSpeed() {
    return 0.0f;
}

float URSTSettingsLocal::GetGamepadCursorDeadzone() {
    return 0.0f;
}

bool URSTSettingsLocal::GetGamepadAimAssistEnabled() {
    return false;
}

void URSTSettingsLocal::GetFrameRateLimitOptions(TArray<FRSTSettingsStringOption>& OutOptions) const {
}

float URSTSettingsLocal::GetFrameRateLimit_WhenBackgrounded() const {
    return 0.0f;
}

float URSTSettingsLocal::GetFrameRateLimit_OnBattery() const {
    return 0.0f;
}

float URSTSettingsLocal::GetFrameRateLimit_InMenu() const {
    return 0.0f;
}

float URSTSettingsLocal::GetFrameRateLimit_Always() const {
    return 0.0f;
}

float URSTSettingsLocal::GetFoliageDensity() const {
    return 0.0f;
}

float URSTSettingsLocal::GetFoliageCullDistance() const {
    return 0.0f;
}

float URSTSettingsLocal::GetEnemyDialogueVolume() const {
    return 0.0f;
}

bool URSTSettingsLocal::GetEnableGlobalInvalidation() const {
    return false;
}

bool URSTSettingsLocal::GetDrawMapWidgets() const {
    return false;
}

UDLSSMode URSTSettingsLocal::GetDLSSMode() const {
    return UDLSSMode::Off;
}

float URSTSettingsLocal::GetDisplayGamma() const {
    return 0.0f;
}

float URSTSettingsLocal::GetDialogueVolume() const {
    return 0.0f;
}

FString URSTSettingsLocal::GetDesiredDeviceProfileQualitySuffix() const {
    return TEXT("");
}

FName URSTSettingsLocal::GetControllerPlatform() const {
    return NAME_None;
}

FString URSTSettingsLocal::GetAudioOutputDeviceId() const {
    return TEXT("");
}

bool URSTSettingsLocal::GetAreSubtitlesEnabled() {
    return false;
}

TArray<FString> URSTSettingsLocal::GetAntiAliasingMethods() const {
    return TArray<FString>();
}

FString URSTSettingsLocal::GetAntiAliasingMethod() const {
    return TEXT("");
}

float URSTSettingsLocal::GetADSSplitLookSensivityY() {
    return 0.0f;
}

float URSTSettingsLocal::GetADSSplitLookSensivityX() {
    return 0.0f;
}

float URSTSettingsLocal::GetADSLookSensivity() {
    return 0.0f;
}

bool URSTSettingsLocal::CanRunAutoBenchmark() const {
    return false;
}

bool URSTSettingsLocal::CanModifyHeadphoneModeEnabled() const {
    return false;
}



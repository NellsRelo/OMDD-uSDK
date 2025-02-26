#include "RSTSettingsShared.h"

URSTSettingsShared::URSTSettingsShared() {
    this->PlayerProfileIndex = 0;
    this->ColorBlindMode = ERSTColorBlindMode::Off;
    this->ColorBlindStrength = 10;
    this->bForceFeedbackEnabled = true;
    this->GamepadMoveStickDeadZone = 0.25f;
    this->GamepadLookStickDeadZone = 0.25f;
    this->bTriggerHapticsEnabled = false;
    this->bTriggerPullUsesHapticThreshold = true;
    this->TriggerHapticStrength = 8;
    this->TriggerHapticStartPosition = 0;
    this->bEnableSubtitles = true;
    this->SubtitleTextSize = ESubtitleDisplayTextSize::Medium;
    this->SubtitleTextColor = ESubtitleDisplayTextColor::White;
    this->SubtitleTextBorder = ESubtitleDisplayTextBorder::Outline;
    this->SubtitleBackgroundOpacity = ESubtitleDisplayBackgroundOpacity::Medium;
    this->AllowAudioInBackground = ERSTAllowBackgroundAudioSetting::Off;
    this->MouseSensitivityX = 1.00f;
    this->MouseSensitivityY = 1.00f;
    this->TargetingMultiplier = 0.50f;
    this->bInvertVerticalAxis = false;
    this->bInvertHorizontalAxis = false;
    this->GamepadLookSensitivityPreset = ERSTGamepadSensitivity::Normal;
    this->GamepadTargetingSensitivityPreset = ERSTGamepadSensitivity::Normal;
    this->bIsSprintToggle = true;
    this->bIsADSToggle = false;
    this->bCanCollectAnalytics = false;
    this->bHasSeenAnalyticsPopup = false;
    this->bAllowGore = true;
    this->PreferredRegion = 0;
    this->bHasSeenRegionPopup = false;
    this->FieldOfViewModifier = 0.00f;
    this->ADSFieldOfViewModifier = 0.00f;
    this->SessionVisibility = ECommonSessionVisibility::FriendsOnly;
    this->bCrossplayEnabled = true;
    this->bIsCameraShakeEnabled = true;
    this->bShowFlyoffs = true;
}

void URSTSettingsShared::SetTriggerPullUsesHapticThreshold(const bool NewValue) {
}

void URSTSettingsShared::SetTriggerHapticStrength(const uint8 NewValue) {
}

void URSTSettingsShared::SetTriggerHapticStartPosition(const uint8 NewValue) {
}

void URSTSettingsShared::SetTriggerHapticsEnabled(const bool NewValue) {
}

void URSTSettingsShared::SetTargetingMultiplier(double NewValue) {
}

void URSTSettingsShared::SetSubtitlesTextSize(ESubtitleDisplayTextSize Value) {
}

void URSTSettingsShared::SetSubtitlesTextColor(ESubtitleDisplayTextColor Value) {
}

void URSTSettingsShared::SetSubtitlesTextBorder(ESubtitleDisplayTextBorder Value) {
}

void URSTSettingsShared::SetSubtitlesEnabled(bool Value) {
}

void URSTSettingsShared::SetSubtitlesBackgroundOpacity(ESubtitleDisplayBackgroundOpacity Value) {
}

void URSTSettingsShared::SetShowFlyoffs(bool bEnabled) {
}

void URSTSettingsShared::SetSessionVisiblity(ECommonSessionVisibility InSessionVisibility) {
}

void URSTSettingsShared::SetPreferredRegion(int32 InPreferredRegion) {
}

void URSTSettingsShared::SetMouseSensitivityY(double NewValue) {
}

void URSTSettingsShared::SetMouseSensitivityX(double NewValue) {
}

void URSTSettingsShared::SetLookSensitivityPreset(ERSTGamepadSensitivity NewValue) {
}

void URSTSettingsShared::SetIsSprintToggle(bool IsSprintToggle) {
}

void URSTSettingsShared::SetIsCameraShakeEnabled(bool bEnabled) {
}

void URSTSettingsShared::SetIsADSToggle(bool IsADSToggle) {
}

void URSTSettingsShared::SetInvertVerticalAxis(bool NewValue) {
}

void URSTSettingsShared::SetInvertHorizontalAxis(bool NewValue) {
}

void URSTSettingsShared::SetHasSeenRegionPopup(bool bHasSeen) {
}

void URSTSettingsShared::SetHasSeenAnalyticsPopup(bool bHasSeen) {
}

void URSTSettingsShared::SetGamepadTargetingSensitivityPreset(ERSTGamepadSensitivity NewValue) {
}

void URSTSettingsShared::SetGamepadMoveStickDeadZone(const float NewValue) {
}

void URSTSettingsShared::SetGamepadLookStickDeadZone(const float NewValue) {
}

void URSTSettingsShared::SetForceFeedbackEnabled(const bool NewValue) {
}

void URSTSettingsShared::SetFieldOfViewModifier(float InFieldOfViewModifier) {
}

void URSTSettingsShared::SetCrossplayEnabled(bool bInCrossplayEnabled) {
}

void URSTSettingsShared::SetColorBlindStrength(int32 InColorBlindStrength) {
}

void URSTSettingsShared::SetColorBlindMode(ERSTColorBlindMode InMode) {
}

void URSTSettingsShared::SetCanCollectAnalytics(bool bCanCollect) {
}

void URSTSettingsShared::SetAllowGore(bool AllowGore) {
}

void URSTSettingsShared::SetAllowAudioInBackgroundSetting(ERSTAllowBackgroundAudioSetting NewValue) {
}

void URSTSettingsShared::SetADSFieldOfViewModifier(float InADSFieldOfViewModifier) {
}

bool URSTSettingsShared::HasSeenRegionPopup() const {
    return false;
}

bool URSTSettingsShared::HasSeenAnalyticsPopup() const {
    return false;
}

bool URSTSettingsShared::GetTriggerPullUsesHapticThreshold() const {
    return false;
}

uint8 URSTSettingsShared::GetTriggerHapticStrength() const {
    return 0;
}

uint8 URSTSettingsShared::GetTriggerHapticStartPosition() const {
    return 0;
}

bool URSTSettingsShared::GetTriggerHapticsEnabled() const {
    return false;
}

double URSTSettingsShared::GetTargetingMultiplier() const {
    return 0.0;
}

ESubtitleDisplayTextSize URSTSettingsShared::GetSubtitlesTextSize() const {
    return ESubtitleDisplayTextSize::ExtraSmall;
}

ESubtitleDisplayTextColor URSTSettingsShared::GetSubtitlesTextColor() const {
    return ESubtitleDisplayTextColor::White;
}

ESubtitleDisplayTextBorder URSTSettingsShared::GetSubtitlesTextBorder() const {
    return ESubtitleDisplayTextBorder::None;
}

bool URSTSettingsShared::GetSubtitlesEnabled() const {
    return false;
}

ESubtitleDisplayBackgroundOpacity URSTSettingsShared::GetSubtitlesBackgroundOpacity() const {
    return ESubtitleDisplayBackgroundOpacity::Clear;
}

bool URSTSettingsShared::GetShowFlyoffs() const {
    return false;
}

ECommonSessionVisibility URSTSettingsShared::GetSessionVisibility() const {
    return ECommonSessionVisibility::FriendsOnly;
}

int32 URSTSettingsShared::GetPreferredRegion() const {
    return 0;
}

double URSTSettingsShared::GetMouseSensitivityY() const {
    return 0.0;
}

double URSTSettingsShared::GetMouseSensitivityX() const {
    return 0.0;
}

bool URSTSettingsShared::GetIsSprintToggle() const {
    return false;
}

bool URSTSettingsShared::GetIsCameraShakeEnabled() const {
    return false;
}

bool URSTSettingsShared::GetIsADSToggle() const {
    return false;
}

bool URSTSettingsShared::GetInvertVerticalAxis() const {
    return false;
}

bool URSTSettingsShared::GetInvertHorizontalAxis() const {
    return false;
}

ERSTGamepadSensitivity URSTSettingsShared::GetGamepadTargetingSensitivityPreset() const {
    return ERSTGamepadSensitivity::Invalid;
}

float URSTSettingsShared::GetGamepadMoveStickDeadZone() const {
    return 0.0f;
}

float URSTSettingsShared::GetGamepadLookStickDeadZone() const {
    return 0.0f;
}

ERSTGamepadSensitivity URSTSettingsShared::GetGamepadLookSensitivityPreset() const {
    return ERSTGamepadSensitivity::Invalid;
}

bool URSTSettingsShared::GetForceFeedbackEnabled() const {
    return false;
}

float URSTSettingsShared::GetFieldOfViewModifier() const {
    return 0.0f;
}

bool URSTSettingsShared::GetCrossplayEnabled() const {
    return false;
}

int32 URSTSettingsShared::GetColorBlindStrength() const {
    return 0;
}

ERSTColorBlindMode URSTSettingsShared::GetColorBlindMode() const {
    return ERSTColorBlindMode::Off;
}

bool URSTSettingsShared::GetAllowGore() const {
    return false;
}

ERSTAllowBackgroundAudioSetting URSTSettingsShared::GetAllowAudioInBackgroundSetting() const {
    return ERSTAllowBackgroundAudioSetting::Off;
}

float URSTSettingsShared::GetADSFieldOfViewModifier() const {
    return 0.0f;
}

bool URSTSettingsShared::CanCollectAnalytics() const {
    return false;
}



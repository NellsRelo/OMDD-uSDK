#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "SubtitleDisplayOptions.h"
#include "ERSTAllowBackgroundAudioSetting.h"
#include "ERSTColorBlindMode.h"
#include "ERSTGamepadSensitivity.h"
#include "ECommonSessionVisibility.h"
#include "CommonUserTypes.h"
#include "RSTSettingsShared.generated.h"

UCLASS(Blueprintable)
class URSTSettingsShared : public ULocalPlayerSaveGame {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerProfileIndex;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, double> PlayerProfilePlayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FString> PlayerProfileName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERSTColorBlindMode ColorBlindMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ColorBlindStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceFeedbackEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GamepadMoveStickDeadZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GamepadLookStickDeadZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTriggerHapticsEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTriggerPullUsesHapticThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 TriggerHapticStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 TriggerHapticStartPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableSubtitles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESubtitleDisplayTextSize SubtitleTextSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESubtitleDisplayTextColor SubtitleTextColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESubtitleDisplayTextBorder SubtitleTextBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESubtitleDisplayBackgroundOpacity SubtitleBackgroundOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERSTAllowBackgroundAudioSetting AllowAudioInBackground;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString PendingCulture;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MouseSensitivityX;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MouseSensitivityY;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double TargetingMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvertVerticalAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvertHorizontalAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERSTGamepadSensitivity GamepadLookSensitivityPreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERSTGamepadSensitivity GamepadTargetingSensitivityPreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSprintToggle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsADSToggle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanCollectAnalytics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasSeenAnalyticsPopup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowGore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PreferredRegion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasSeenRegionPopup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FieldOfViewModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ADSFieldOfViewModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECommonSessionVisibility SessionVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCrossplayEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCameraShakeEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowFlyoffs;
    
public:
    URSTSettingsShared();

    UFUNCTION(BlueprintCallable)
    void SetTriggerPullUsesHapticThreshold(const bool NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetTriggerHapticStrength(const uint8 NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetTriggerHapticStartPosition(const uint8 NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetTriggerHapticsEnabled(const bool NewValue);
    
    UFUNCTION()
    void SetTargetingMultiplier(double NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetSubtitlesTextSize(ESubtitleDisplayTextSize Value);
    
    UFUNCTION(BlueprintCallable)
    void SetSubtitlesTextColor(ESubtitleDisplayTextColor Value);
    
    UFUNCTION(BlueprintCallable)
    void SetSubtitlesTextBorder(ESubtitleDisplayTextBorder Value);
    
    UFUNCTION(BlueprintCallable)
    void SetSubtitlesEnabled(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetSubtitlesBackgroundOpacity(ESubtitleDisplayBackgroundOpacity Value);
    
    UFUNCTION(BlueprintCallable)
    void SetShowFlyoffs(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetSessionVisiblity(ECommonSessionVisibility InSessionVisibility);
    
    UFUNCTION(BlueprintCallable)
    void SetPreferredRegion(int32 InPreferredRegion);
    
    UFUNCTION()
    void SetMouseSensitivityY(double NewValue);
    
    UFUNCTION()
    void SetMouseSensitivityX(double NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetLookSensitivityPreset(ERSTGamepadSensitivity NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetIsSprintToggle(bool IsSprintToggle);
    
    UFUNCTION(BlueprintCallable)
    void SetIsCameraShakeEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetIsADSToggle(bool IsADSToggle);
    
    UFUNCTION(BlueprintCallable)
    void SetInvertVerticalAxis(bool NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetInvertHorizontalAxis(bool NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetHasSeenRegionPopup(bool bHasSeen);
    
    UFUNCTION(BlueprintCallable)
    void SetHasSeenAnalyticsPopup(bool bHasSeen);
    
    UFUNCTION(BlueprintCallable)
    void SetGamepadTargetingSensitivityPreset(ERSTGamepadSensitivity NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetGamepadMoveStickDeadZone(const float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetGamepadLookStickDeadZone(const float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetForceFeedbackEnabled(const bool NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetFieldOfViewModifier(float InFieldOfViewModifier);
    
    UFUNCTION(BlueprintCallable)
    void SetCrossplayEnabled(bool bInCrossplayEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetColorBlindStrength(int32 InColorBlindStrength);
    
    UFUNCTION(BlueprintCallable)
    void SetColorBlindMode(ERSTColorBlindMode InMode);
    
    UFUNCTION(BlueprintCallable)
    void SetCanCollectAnalytics(bool bCanCollect);
    
    UFUNCTION(BlueprintCallable)
    void SetAllowGore(bool AllowGore);
    
    UFUNCTION(BlueprintCallable)
    void SetAllowAudioInBackgroundSetting(ERSTAllowBackgroundAudioSetting NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetADSFieldOfViewModifier(float InADSFieldOfViewModifier);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasSeenRegionPopup() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasSeenAnalyticsPopup() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetTriggerPullUsesHapticThreshold() const;
    
    UFUNCTION(BlueprintCallable)
    uint8 GetTriggerHapticStrength() const;
    
    UFUNCTION(BlueprintCallable)
    uint8 GetTriggerHapticStartPosition() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetTriggerHapticsEnabled() const;
    
    UFUNCTION()
    double GetTargetingMultiplier() const;
    
    UFUNCTION(BlueprintCallable)
    ESubtitleDisplayTextSize GetSubtitlesTextSize() const;
    
    UFUNCTION(BlueprintCallable)
    ESubtitleDisplayTextColor GetSubtitlesTextColor() const;
    
    UFUNCTION(BlueprintCallable)
    ESubtitleDisplayTextBorder GetSubtitlesTextBorder() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetSubtitlesEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    ESubtitleDisplayBackgroundOpacity GetSubtitlesBackgroundOpacity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetShowFlyoffs() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECommonSessionVisibility GetSessionVisibility() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPreferredRegion() const;
    
    UFUNCTION()
    double GetMouseSensitivityY() const;
    
    UFUNCTION()
    double GetMouseSensitivityX() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsSprintToggle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsCameraShakeEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsADSToggle() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetInvertVerticalAxis() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetInvertHorizontalAxis() const;
    
    UFUNCTION(BlueprintCallable)
    ERSTGamepadSensitivity GetGamepadTargetingSensitivityPreset() const;
    
    UFUNCTION(BlueprintCallable)
    float GetGamepadMoveStickDeadZone() const;
    
    UFUNCTION(BlueprintCallable)
    float GetGamepadLookStickDeadZone() const;
    
    UFUNCTION(BlueprintCallable)
    ERSTGamepadSensitivity GetGamepadLookSensitivityPreset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetForceFeedbackEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFieldOfViewModifier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCrossplayEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetColorBlindStrength() const;
    
    UFUNCTION(BlueprintCallable)
    ERSTColorBlindMode GetColorBlindMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAllowGore() const;
    
    UFUNCTION(BlueprintCallable)
    ERSTAllowBackgroundAudioSetting GetAllowAudioInBackgroundSetting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetADSFieldOfViewModifier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanCollectAnalytics() const;
    
};


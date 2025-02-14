#pragma once
#include "CoreMinimal.h"
#include "AudioMixerBlueprintLibrary.h"
#include "CommonLocalPlayer.h"
#include "RSTOnVoiceChatPlayerTalkingUpdatedDelegate.h"
#include "RSTLocalPlayer.generated.h"

class UInputMappingContext;
class URSTPlayerProfile;
class URSTSettingsLocal;
class URSTSettingsShared;

UCLASS(Blueprintable, NonTransient)
class OMD4_API URSTLocalPlayer : public UCommonLocalPlayer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTOnVoiceChatPlayerTalkingUpdated OnVoiceChatPlayerTalkingUpdatedDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URSTSettingsShared* SharedSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URSTPlayerProfile* PlayerProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UInputMappingContext* InputMappingContext;
    
public:
    URSTLocalPlayer();

protected:
    UFUNCTION(BlueprintCallable)
    void OnCompletedAudioDeviceSwap(const FSwapAudioOutputResult& SwapResult);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URSTSettingsShared* GetSharedSettings() const;
    
    UFUNCTION(BlueprintCallable)
    URSTPlayerProfile* GetPlayerProfile() const;
    
    UFUNCTION(BlueprintCallable)
    URSTSettingsLocal* GetLocalSettings() const;
    
};


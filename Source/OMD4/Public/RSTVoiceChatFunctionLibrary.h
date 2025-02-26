#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RSTVoiceChatDeviceInfo.h"
#include "RSTVoiceChatFunctionLibrary.generated.h"

class APlayerState;
class ULocalPlayer;

UCLASS(Blueprintable)
class OMD4_API URSTVoiceChatFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URSTVoiceChatFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void ToggleMutePlayer(ULocalPlayer* LocalPlayer, APlayerState* MutedPlayer);
    
    UFUNCTION(BlueprintCallable)
    static void ToggleBlockPlayer(ULocalPlayer* LocalPlayer, APlayerState* MutedPlayer);
    
    UFUNCTION(BlueprintCallable)
    static bool IsVoiceChatEnabled(ULocalPlayer* LocalPlayer);
    
    UFUNCTION(BlueprintCallable)
    static bool IsPlayerTalking(ULocalPlayer* LocalPlayer, APlayerState* PlayerToCheck);
    
    UFUNCTION(BlueprintCallable)
    static bool IsPlayerMuted(ULocalPlayer* LocalPlayer, APlayerState* MutedPlayer);
    
    UFUNCTION(BlueprintCallable)
    static bool IsPlayerConnected(ULocalPlayer* LocalPlayer, APlayerState* PlayerToCheck);
    
    UFUNCTION(BlueprintCallable)
    static bool IsPlayerBlocked(ULocalPlayer* LocalPlayer, APlayerState* MutedPlayer);
    
    UFUNCTION(BlueprintCallable)
    static void GetAvailableVoiceOutputDevices(ULocalPlayer* LocalPlayer, TArray<FRSTVoiceChatDeviceInfo>& OutDeviceInfos);
    
    UFUNCTION(BlueprintCallable)
    static void GetAvailableVoiceInputDevices(ULocalPlayer* LocalPlayer, TArray<FRSTVoiceChatDeviceInfo>& OutDeviceInfos);
    
    UFUNCTION(BlueprintCallable)
    static bool CanCommunicateWithPlayer(ULocalPlayer* LocalPlayer, APlayerState* PlayerToCheck);
    
};


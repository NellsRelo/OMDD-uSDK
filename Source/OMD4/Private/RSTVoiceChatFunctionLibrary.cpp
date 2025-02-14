#include "RSTVoiceChatFunctionLibrary.h"

URSTVoiceChatFunctionLibrary::URSTVoiceChatFunctionLibrary() {
}

void URSTVoiceChatFunctionLibrary::ToggleMutePlayer(ULocalPlayer* LocalPlayer, APlayerState* MutedPlayer) {
}

void URSTVoiceChatFunctionLibrary::ToggleBlockPlayer(ULocalPlayer* LocalPlayer, APlayerState* MutedPlayer) {
}

bool URSTVoiceChatFunctionLibrary::IsVoiceChatEnabled(ULocalPlayer* LocalPlayer) {
    return false;
}

bool URSTVoiceChatFunctionLibrary::IsPlayerTalking(ULocalPlayer* LocalPlayer, APlayerState* PlayerToCheck) {
    return false;
}

bool URSTVoiceChatFunctionLibrary::IsPlayerMuted(ULocalPlayer* LocalPlayer, APlayerState* MutedPlayer) {
    return false;
}

bool URSTVoiceChatFunctionLibrary::IsPlayerConnected(ULocalPlayer* LocalPlayer, APlayerState* PlayerToCheck) {
    return false;
}

bool URSTVoiceChatFunctionLibrary::IsPlayerBlocked(ULocalPlayer* LocalPlayer, APlayerState* MutedPlayer) {
    return false;
}

void URSTVoiceChatFunctionLibrary::GetAvailableVoiceOutputDevices(ULocalPlayer* LocalPlayer, TArray<FRSTVoiceChatDeviceInfo>& OutDeviceInfos) {
}

void URSTVoiceChatFunctionLibrary::GetAvailableVoiceInputDevices(ULocalPlayer* LocalPlayer, TArray<FRSTVoiceChatDeviceInfo>& OutDeviceInfos) {
}

bool URSTVoiceChatFunctionLibrary::CanCommunicateWithPlayer(ULocalPlayer* LocalPlayer, APlayerState* PlayerToCheck) {
    return false;
}



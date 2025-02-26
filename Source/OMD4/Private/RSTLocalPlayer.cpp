#include "RSTLocalPlayer.h"

URSTLocalPlayer::URSTLocalPlayer() {
    this->SharedSettings = NULL;
    this->PlayerProfile = NULL;
    this->InputMappingContext = NULL;
}

void URSTLocalPlayer::OnCompletedAudioDeviceSwap(const FSwapAudioOutputResult& SwapResult) {
}

URSTSettingsShared* URSTLocalPlayer::GetSharedSettings() const {
    return NULL;
}

URSTPlayerProfile* URSTLocalPlayer::GetPlayerProfile() const {
    return NULL;
}

URSTSettingsLocal* URSTLocalPlayer::GetLocalSettings() const {
    return NULL;
}



#include "RSTAudioMixEffectsSubsystem.h"

URSTAudioMixEffectsSubsystem::URSTAudioMixEffectsSubsystem() {
    this->DefaultBaseMix = NULL;
    this->LoadingScreenMix = NULL;
    this->UserMix = NULL;
    this->OverallControlBus = NULL;
    this->MusicControlBus = NULL;
    this->SoundFXControlBus = NULL;
    this->DialogueControlBus = NULL;
    this->VoiceChatControlBus = NULL;
}



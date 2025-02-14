#include "RSTVerbMessageHelpers.h"

URSTVerbMessageHelpers::URSTVerbMessageHelpers() {
}

FGameplayCueParameters URSTVerbMessageHelpers::VerbMessageToCueParameters(const FRSTVerbMessage& Message) {
    return FGameplayCueParameters{};
}

APlayerState* URSTVerbMessageHelpers::GetPlayerStateFromObject(UObject* Object) {
    return NULL;
}

APlayerController* URSTVerbMessageHelpers::GetPlayerControllerFromObject(UObject* Object) {
    return NULL;
}

UGameplayAbility* URSTVerbMessageHelpers::GetAbilityFromDamageMessage(const FRSTDamageMessage& Message, bool& bOutSuccess) {
    return NULL;
}

FRSTVerbMessage URSTVerbMessageHelpers::CueParametersToVerbMessage(const FGameplayCueParameters& Params) {
    return FRSTVerbMessage{};
}



#include "RSTGameplayAbility_CommunicationWheel.h"

URSTGameplayAbility_CommunicationWheel::URSTGameplayAbility_CommunicationWheel() {
    this->DefaultPing = NULL;
    this->bWidgetCancelled = false;
}

void URSTGameplayAbility_CommunicationWheel::SetWidgetCancelled(bool WasCancelled) {
}

TArray<URSTCommunicationDefinition*> URSTGameplayAbility_CommunicationWheel::GetCommunicationWheelOptions() const {
    return TArray<URSTCommunicationDefinition*>();
}



#include "RSTGameplayAbility_InteractRsp.h"

URSTGameplayAbility_InteractRsp::URSTGameplayAbility_InteractRsp() {
    this->ResponseMontage = NULL;
    this->ResponseDuration = 0.00f;
}

void URSTGameplayAbility_InteractRsp::PlayResponseDialog(AActor* InstigatorActor, bool bExitingInteraction) {
}

float URSTGameplayAbility_InteractRsp::GetResponseDuration() {
    return 0.0f;
}



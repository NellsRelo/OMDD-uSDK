#include "RSTSkinFragment_ActorBinding.h"
#include "Templates/SubclassOf.h"

URSTSkinFragment_ActorBinding::URSTSkinFragment_ActorBinding() {
}

TSubclassOf<AActor> URSTSkinFragment_ActorBinding::GetActorClass(FGameplayTag Identifier, bool& bOutSuccess) const {
    return NULL;
}



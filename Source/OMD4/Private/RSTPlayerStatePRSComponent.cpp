#include "RSTPlayerStatePRSComponent.h"

URSTPlayerStatePRSComponent::URSTPlayerStatePRSComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void URSTPlayerStatePRSComponent::SetIsReadyStateForTag(FGameplayTag PRSTag, bool bIsReady) {
}

void URSTPlayerStatePRSComponent::Server_SetIsReadyStateForTag_Implementation(FGameplayTag PRSTag, bool bIsReady) {
}

FUniqueNetIdRepl URSTPlayerStatePRSComponent::GetUniqueNetIdRepl() {
    return FUniqueNetIdRepl{};
}

bool URSTPlayerStatePRSComponent::GetIsReadyStateForTag(FGameplayTag PRSTag) {
    return false;
}



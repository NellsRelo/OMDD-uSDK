#include "RSTTransitionManagerComponent.h"
#include "Net/UnrealNetwork.h"

URSTTransitionManagerComponent::URSTTransitionManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void URSTTransitionManagerComponent::StartTransition(FGameplayTag TransitionTag, const FRSTTransitionDelegate_Dynamic& FinishedDelegate) {
}

void URSTTransitionManagerComponent::OnTransitionLoaded(FGameplayTag Tag) {
}

void URSTTransitionManagerComponent::OnResourcesPrepared(URSTTransitionAction* Action) {
}

void URSTTransitionManagerComponent::OnRep_ServerState() {
}

void URSTTransitionManagerComponent::OnCleanedUp(URSTTransitionAction* Action) {
}

void URSTTransitionManagerComponent::OnActionFinished(URSTTransitionAction* Action) {
}

bool URSTTransitionManagerComponent::HasTransition(FGameplayTag Identifier) const {
    return false;
}

bool URSTTransitionManagerComponent::HasCurrentTransition() const {
    return false;
}

bool URSTTransitionManagerComponent::HasAdditionalTags(FGameplayTagContainer Tags) const {
    return false;
}

void URSTTransitionManagerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(URSTTransitionManagerComponent, ServerState);
}



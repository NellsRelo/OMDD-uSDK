#include "RSTGameStatePRSComponent.h"
#include "Net/UnrealNetwork.h"

URSTGameStatePRSComponent::URSTGameStatePRSComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicateUsingRegisteredSubObjectList = true;
}

bool URSTGameStatePRSComponent::StopPlayerReadySync(FGameplayTag PRSTag, int32 StopPriority) {
    return false;
}

void URSTGameStatePRSComponent::OnRep_PRSCollection() {
}

void URSTGameStatePRSComponent::OnPlayerStateRemovedCallback(APlayerState* PlayerStateRemoved) {
}

void URSTGameStatePRSComponent::OnPlayerStateAddedCallback(APlayerState* PlayerStateAdded) {
}

void URSTGameStatePRSComponent::NetMulticast_OnPRSTimerStart_Implementation(FGameplayTag PRSTag) {
}

void URSTGameStatePRSComponent::NetMulticast_OnPRSTimerShortStart_Implementation(FGameplayTag PRSTag) {
}

void URSTGameStatePRSComponent::NetMulticast_OnPRSTimerComplete_Implementation(FGameplayTag PRSTag) {
}

void URSTGameStatePRSComponent::NetMulticast_OnPRSPlayerReadyStateChanged_Implementation(FGameplayTag PRSTag, FUniqueNetIdRepl PlayerNetID, bool bIsReady) {
}

void URSTGameStatePRSComponent::NetMulticast_OnPRSInterruptOrComplete_Implementation(FGameplayTag PRSTag) {
}

void URSTGameStatePRSComponent::NetMulticast_OnPRSInterrupt_Implementation(FGameplayTag PRSTag) {
}

float URSTGameStatePRSComponent::GetTimeRemainingForTag(FGameplayTag ToCheck) const {
    return 0.0f;
}

int32 URSTGameStatePRSComponent::GetSyncCountForTag(FGameplayTag ToCheck) {
    return 0;
}

int32 URSTGameStatePRSComponent::GetNumPlayersReadyForTag(FGameplayTag ToCheck) {
    return 0;
}

bool URSTGameStatePRSComponent::GetIsSyncActiveForTag(FGameplayTag ToCheck, bool bUseExactMatch) {
    return false;
}

bool URSTGameStatePRSComponent::GetIsInShortTimerForTag(FGameplayTag ToCheck) {
    return false;
}

bool URSTGameStatePRSComponent::DidTimerBeginForTag(FGameplayTag ToCheck) const {
    return false;
}

bool URSTGameStatePRSComponent::BeginNewPlayerReadySync(FGameplayTag PRSTag, int32 SyncPriority) {
    return false;
}

void URSTGameStatePRSComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(URSTGameStatePRSComponent, PRSCollection);
}



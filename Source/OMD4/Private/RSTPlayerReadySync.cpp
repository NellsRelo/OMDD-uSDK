#include "RSTPlayerReadySync.h"
#include "Net/UnrealNetwork.h"

URSTPlayerReadySync::URSTPlayerReadySync() {
    this->CurrentData = NULL;
    this->Priority = 0;
    this->ServerTime_Begin = 0.00f;
    this->ServerTime_TimerStart = 0.00f;
    this->ServerTime_TimerEnd = 0.00f;
    this->bTimerHasBegun = false;
    this->GameStatePRSComponent = NULL;
}

void URSTPlayerReadySync::OnRep_PRSTag() {
}

float URSTPlayerReadySync::GetTimeRemaining() {
    return 0.0f;
}

int32 URSTPlayerReadySync::GetNumPlayersReady() {
    return 0;
}

bool URSTPlayerReadySync::GetIsInShortTimer() {
    return false;
}

bool URSTPlayerReadySync::GetAreMajorityOfPlayersReady() {
    return false;
}

bool URSTPlayerReadySync::GetAreAllPlayersReady() {
    return false;
}

void URSTPlayerReadySync::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(URSTPlayerReadySync, PRSTag);
    DOREPLIFETIME(URSTPlayerReadySync, Priority);
    DOREPLIFETIME(URSTPlayerReadySync, ServerTime_Begin);
    DOREPLIFETIME(URSTPlayerReadySync, ServerTime_TimerStart);
    DOREPLIFETIME(URSTPlayerReadySync, ServerTime_TimerEnd);
    DOREPLIFETIME(URSTPlayerReadySync, bTimerHasBegun);
    DOREPLIFETIME(URSTPlayerReadySync, ReadyPlayerCollection);
    DOREPLIFETIME(URSTPlayerReadySync, GameStatePRSComponent);
}



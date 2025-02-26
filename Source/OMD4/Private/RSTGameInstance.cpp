#include "RSTGameInstance.h"

//URSTGameInstance::URSTGameInstance() {
//   //this->RejoinCheck = NULL;
//   //this->SelectedExperience = NULL;
//   //this->VoiceManager = NULL;
//}

void URSTGameInstance::SetHasShownStartupVideo(bool bShown) {
}

void URSTGameInstance::RejoinLastSession(bool bRecordRejoin) {
}

void URSTGameInstance::RecreateSession(const FGameplayTag& MessageTag) {
}

void URSTGameInstance::OnJoinSessionComplete(const FOnlineResultInformation& Result) {
}

void URSTGameInstance::OnGameStateSet(AGameStateBase* GameState) {
}

void URSTGameInstance::OnCreateSessionComplete(const FOnlineResultInformation& Result) {
}

void URSTGameInstance::JoinRequestedSessionWithPassword(const FString& Password) {
}

bool URSTGameInstance::IsRejoinPending() const {
    return false;
}

bool URSTGameInstance::HasShownStartupVideo() const {
    return false;
}

URSTCommonSession_HostSessionRequest* URSTGameInstance::CreateHostingRequest(APlayerController* HostingPlayer, ECommonSessionOnlineMode OnlineMode, bool bCanUseCrossplay) {
    return NULL;
}

void URSTGameInstance::CheckRejoinStatus() {
}

bool URSTGameInstance::CanRejoinLastSession() const {
    return false;
}




void URSTGameInstance::AbandonRejoin(bool bRecordAbandon) {
}



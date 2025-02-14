#include "CommonSessionSubsystem.h"

UCommonSessionSubsystem::UCommonSessionSubsystem() {
    this->PendingJoinRequest = NULL;
}

void UCommonSessionSubsystem::SetSessionVisibility(ECommonSessionVisibility NewSessionVisibility) {
}

void UCommonSessionSubsystem::SetCrossplayEnabled(bool bInCrossplayEnabled) {
}

void UCommonSessionSubsystem::QuickPlaySession(APlayerController* JoiningOrHostingPlayer, UCommonSession_HostSessionRequest* Request) {
}

void UCommonSessionSubsystem::ParseSearchResult(const TArray<UCommonSession_SearchResult*>& InSearchResults, bool bCanUserCrossPlay, const FText& SearchText, TArray<UCommonSession_SearchResult*>& OutSearchResults) {
}

void UCommonSessionSubsystem::JoinSession(APlayerController* JoiningPlayer, UCommonSession_SearchResult* Request) {
}

bool UCommonSessionSubsystem::IsJoiningSession() const {
    return false;
}

bool UCommonSessionSubsystem::IsInSession() const {
    return false;
}

void UCommonSessionSubsystem::HostSession(APlayerController* HostingPlayer, UCommonSession_HostSessionRequest* Request) {
}

ECommonSessionVisibility UCommonSessionSubsystem::GetSessionVibility() const {
    return ECommonSessionVisibility::FriendsOnly;
}

FString UCommonSessionSubsystem::GetCrossplayPlatform() {
    return TEXT("");
}

bool UCommonSessionSubsystem::GetCrossplayEnabled() const {
    return false;
}

void UCommonSessionSubsystem::FindSessions(APlayerController* SearchingPlayer, UCommonSession_SearchSessionRequest* Request) {
}

UCommonSession_SearchSessionRequest* UCommonSessionSubsystem::CreateOnlineSearchSessionRequest() {
    return NULL;
}

UCommonSession_HostSessionRequest* UCommonSessionSubsystem::CreateOnlineHostSessionRequest() {
    return NULL;
}

void UCommonSessionSubsystem::CleanUpSessions() {
}

void UCommonSessionSubsystem::CancelFindSessions() {
}



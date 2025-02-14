#include "CommonSession_HostSessionRequest.h"

UCommonSession_HostSessionRequest::UCommonSession_HostSessionRequest() {
    this->OnlineMode = ECommonSessionOnlineMode::Offline;
    this->bUseLobbies = false;
    this->MaxPlayerCount = 16;
    this->SessionVisibility = ECommonSessionVisibility::FriendsOnly;
    this->HostLevel = 0;
    this->bCrossplayEnabled = false;
}



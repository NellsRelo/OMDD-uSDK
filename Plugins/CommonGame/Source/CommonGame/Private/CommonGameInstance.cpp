#include "CommonGameInstance.h"

UCommonGameInstance::UCommonGameInstance() {
    this->RequestedSession = NULL;
}

void UCommonGameInstance::HandleSystemMessage(FGameplayTag MessageType, FText Title, FText Message) {
}

void UCommonGameInstance::HandlerUserInitialized(const UCommonUserInfo* UserInfo, bool bSuccess, FText Error, ECommonUserPrivilege RequestedPrivilege, ECommonUserOnlineContext OnlineContext) {
}

void UCommonGameInstance::HandlePrivilegeChanged(const UCommonUserInfo* UserInfo, ECommonUserPrivilege Privilege, ECommonUserAvailability OldAvailability, ECommonUserAvailability NewAvailability) {
}



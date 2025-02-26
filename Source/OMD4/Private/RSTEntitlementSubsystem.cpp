#include "RSTEntitlementSubsystem.h"

URSTEntitlementSubsystem::URSTEntitlementSubsystem() {
}

bool URSTEntitlementSubsystem::IsEntitledToSkin(FGameplayTag Identifier) const {
    return false;
}

bool URSTEntitlementSubsystem::IsEntitledToHero(FGameplayTag Identifier) const {
    return false;
}

bool URSTEntitlementSubsystem::HasEntitlement(FGameplayTag Identifier) const {
    return false;
}

void URSTEntitlementSubsystem::HandlerUserInitialized(const UCommonUserInfo* UserInfo, bool bSuccess, FText Error, ECommonUserPrivilege RequestedPrivilege, ECommonUserOnlineContext OnlineContext) {
}

URSTEntitlementDefinition* URSTEntitlementSubsystem::GetEntitlementForSkin(FGameplayTag Identifier) const {
    return NULL;
}

URSTEntitlementDefinition* URSTEntitlementSubsystem::GetEntitlementForHero(FGameplayTag Identifier) const {
    return NULL;
}



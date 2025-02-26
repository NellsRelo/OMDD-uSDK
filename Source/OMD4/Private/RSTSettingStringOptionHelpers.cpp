#include "RSTSettingStringOptionHelpers.h"

URSTSettingStringOptionHelpers::URSTSettingStringOptionHelpers() {
}

void URSTSettingStringOptionHelpers::GetUIStrings(const TArray<FRSTSettingsStringOption>& Options, TArray<FString>& OutStrings) {
}

bool URSTSettingStringOptionHelpers::GetUIString(const TArray<FRSTSettingsStringOption>& Options, int32 BackingValue, FText& OutUIText) {
    return false;
}

FText URSTSettingStringOptionHelpers::GetText(const FRSTSettingsStringOption& Option) {
    return FText::GetEmpty();
}

bool URSTSettingStringOptionHelpers::GetBackingValue(const TArray<FRSTSettingsStringOption>& Options, const FString& UISelectedOption, int32& BackingValue) {
    return false;
}



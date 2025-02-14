#include "RSTStatBlueprintLibrary.h"

URSTStatBlueprintLibrary::URSTStatBlueprintLibrary() {
}

bool URSTStatBlueprintLibrary::GetStatValue(const URSTPlayerProfile* Profile, FGameplayTag StatTag, FGameplayTagContainer IncludeSubtags, FGameplayTagContainer IgnoreSubtags, int32& OutVal) {
    return false;
}

bool URSTStatBlueprintLibrary::GetMaxStatValue(const URSTPlayerProfile* Profile, FGameplayTag StatTag, FGameplayTagContainer IncludeSubtags, FGameplayTagContainer IgnoreSubtags, int32& OutVal, FGameplayTagContainer& OutMaxSubtags) {
    return false;
}



#include "RSTSavedRunFunctionLibrary.h"

URSTSavedRunFunctionLibrary::URSTSavedRunFunctionLibrary() {
}

bool URSTSavedRunFunctionLibrary::IsRunValid(const FRSTSavedRun& SavedRun) {
    return false;
}

float URSTSavedRunFunctionLibrary::GetStatValue(const FRSTSavedRun& SavedRun, int32 PlayerIndex, const FGameplayTag& StatTag) {
    return 0.0f;
}

int32 URSTSavedRunFunctionLibrary::GetNumSkullsEarned(const FRSTSavedRun& SavedRun) {
    return 0;
}

int32 URSTSavedRunFunctionLibrary::GetNumPlayers(const FRSTSavedRun& SavedRun) {
    return 0;
}

int32 URSTSavedRunFunctionLibrary::GetNumMissionsCompleted(const FRSTSavedRun& SavedRun) {
    return 0;
}

TArray<int32> URSTSavedRunFunctionLibrary::GetDisplayIndexOrder(const FRSTSavedRun& SavedRun) {
    return TArray<int32>();
}



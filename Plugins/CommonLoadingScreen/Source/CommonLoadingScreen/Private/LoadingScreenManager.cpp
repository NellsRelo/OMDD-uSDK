#include "LoadingScreenManager.h"

ULoadingScreenManager::ULoadingScreenManager() {
}

bool ULoadingScreenManager::GetLoadingScreenDisplayStatus() const {
    return false;
}

FString ULoadingScreenManager::GetDebugReasonForShowingOrHidingLoadingScreen() const {
    return TEXT("");
}



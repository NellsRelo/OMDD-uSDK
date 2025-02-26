#include "RSTGameMode_HUB.h"

ARSTGameMode_HUB::ARSTGameMode_HUB(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void ARSTGameMode_HUB::SetPassword(const FString& Password) {
}

bool ARSTGameMode_HUB::IsPasswordProtected() const {
    return false;
}

void ARSTGameMode_HUB::CacheWhitelistedPlayers() {
}



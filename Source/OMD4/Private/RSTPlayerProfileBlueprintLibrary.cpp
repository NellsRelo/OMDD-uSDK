#include "RSTPlayerProfileBlueprintLibrary.h"

URSTPlayerProfileBlueprintLibrary::URSTPlayerProfileBlueprintLibrary() {
}

void URSTPlayerProfileBlueprintLibrary::RenamePlayerProfile(APlayerController* Player, int32 SlotIndex, const FString& ProfileName) {
}

double URSTPlayerProfileBlueprintLibrary::GetPlayerProfilePlayTime(APlayerController* Player, int32 SlotIndex) {
    return 0.0;
}

FString URSTPlayerProfileBlueprintLibrary::GetPlayerProfileName(APlayerController* Player, int32 SlotIndex) {
    return TEXT("");
}

URSTPlayerProfile* URSTPlayerProfileBlueprintLibrary::GetPlayerProfile(APlayerController* Player) {
    return NULL;
}

void URSTPlayerProfileBlueprintLibrary::GetAllPlayerProfiles(UObject* WorldContextObject, FLatentActionInfo LatentInfo, APlayerController* Player, TArray<URSTPlayerProfileInfo*>& OutPlayerProfiles, bool& OutSuccess) {
}

void URSTPlayerProfileBlueprintLibrary::DeletePlayerProfile(UObject* WorldContextObject, FLatentActionInfo LatentInfo, APlayerController* Player, int32 SlotIndex, bool& OutSuccess) {
}

void URSTPlayerProfileBlueprintLibrary::CreatePlayerProfile(UObject* WorldContextObject, FLatentActionInfo LatentInfo, APlayerController* Player, const FString& ProfileName, bool& OutSuccess) {
}

void URSTPlayerProfileBlueprintLibrary::ChangePlayerProfile(UObject* WorldContextObject, FLatentActionInfo LatentInfo, APlayerController* Player, int32 SlotIndex, bool& OutSuccess, FText& OutErrorText) {
}



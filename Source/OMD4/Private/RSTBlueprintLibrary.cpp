#include "RSTBlueprintLibrary.h"
#include "Templates/SubclassOf.h"

URSTBlueprintLibrary::URSTBlueprintLibrary() {
}

void URSTBlueprintLibrary::ToTextBlockStyle(UCommonTextStyle* TextStyleClass, FTextBlockStyle& OutTextBlockStyle) {
}

bool URSTBlueprintLibrary::IsLoadingScreenVisible(const UObject* WorldContextObject) {
    return false;
}

bool URSTBlueprintLibrary::HasTrapPlacementFlag(ERSTTrapPlacementFlags Value, ERSTTrapPlacementFlags ToMatch) {
    return false;
}

int32 URSTBlueprintLibrary::GetTrapPlacementCost(const UUserWidget* UserWidget, const ARSTInventoryItemInstance* ItemInstance) {
    return 0;
}

TArray<ARSTPlayerState*> URSTBlueprintLibrary::GetSortedPlayerArray(const TArray<APlayerState*>& InPlayerArray) {
    return TArray<ARSTPlayerState*>();
}

TArray<FText> URSTBlueprintLibrary::GetSortedPeopleNamesArray(const TArray<FText>& InTextArray) {
    return TArray<FText>();
}

bool URSTBlueprintLibrary::GetMetaDataForAnim(const UAnimationAsset* AnimAsset, TSubclassOf<UAnimMetaData> MetadataClass, UAnimMetaData*& OutMetadata) {
    return false;
}

UObject* URSTBlueprintLibrary::GetDefaultObjectForClass(UClass* ObjectClass, bool& bSuccess) {
    return NULL;
}

void URSTBlueprintLibrary::GetCurrentInputDeviceForPlayer(const APlayerController* PlayerController, FHardwareDeviceIdentifier& OutHardwareDeviceIdentifier) {
}

FString URSTBlueprintLibrary::GetClientString(UObject* WorldContextObject) {
    return TEXT("");
}

void URSTBlueprintLibrary::GetAllActorsOfClass(const UObject* WorldContextObject, TSubclassOf<AActor> ActorClass, TArray<AActor*>& OutActors) {
}

void URSTBlueprintLibrary::GatherOnslaughtPawnsInRadius(FVector Location, float Radius, TArray<APawn*>& OutPawns) {
}

float URSTBlueprintLibrary::EvaluateRuntimeFloatCurve(const FRuntimeFloatCurve& Curve, float Time) {
    return 0.0f;
}

bool URSTBlueprintLibrary::DisableTrap(AActor* TrapToDisable, float Duration) {
    return false;
}



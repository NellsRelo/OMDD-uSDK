#include "RSTWidgetBlueprintLibrary.h"
#include "Templates/SubclassOf.h"

URSTWidgetBlueprintLibrary::URSTWidgetBlueprintLibrary() {
}

UCommonActivatableWidget* URSTWidgetBlueprintLibrary::GetLayerWidgetByClass(const ULocalPlayer* LocalPlayer, FGameplayTag LayerName, TSubclassOf<UCommonActivatableWidget> WidgetClass) {
    return NULL;
}

URSTSpellbookOperation* URSTWidgetBlueprintLibrary::GetCurrentSpellbookOperation(const ULocalPlayer* LocalPlayer) {
    return NULL;
}

TArray<FString> URSTWidgetBlueprintLibrary::GetCultureDisplayNames() {
    return TArray<FString>();
}

FString URSTWidgetBlueprintLibrary::GetCultureCodeFromName(const FString& Name) {
    return TEXT("");
}

UTexture2D* URSTWidgetBlueprintLibrary::GetAvatar(APlayerState* PlayerState, int32 AvatarSize) {
    return NULL;
}

bool URSTWidgetBlueprintLibrary::EndSpellbookOperation(const ULocalPlayer* LocalPlayer, URSTSpellbookOperation* SpellbookOperation) {
    return false;
}

bool URSTWidgetBlueprintLibrary::EndCurrentSpellbookOperation(const ULocalPlayer* LocalPlayer) {
    return false;
}

URSTSpellbookOperation* URSTWidgetBlueprintLibrary::BeginSpellbookOperation(const ULocalPlayer* LocalPlayer, ARSTInventoryItemInstance* InventoryItem) {
    return NULL;
}



#include "RSTUIExtensions.h"

URSTUIExtensions::URSTUIExtensions() {
}

void URSTUIExtensions::RSTPopContentFromLayer(URSTActivatableWidget* RSTActivatableWidget, bool bBypassAnimations) {
}

void URSTUIExtensions::RemoveAllWidgetsFromLayer(const UObject* WorldContextObject, FGameplayTag layerToRemove) {
}

int32 URSTUIExtensions::GetWidgetCountFromLayers(const UObject* WorldContextObject, FGameplayTagContainer LayerTags) {
    return 0;
}

int32 URSTUIExtensions::GetWidgetCountFromLayer(const UObject* WorldContextObject, FGameplayTag LayerTag) {
    return 0;
}

FSlateBrush URSTUIExtensions::GetTextureForActionForInputType(const UCommonInputSubsystem* CommonInputSubsystem, const FKey KeyToUse, ECommonInputType InputType, const FName GamepadName) {
    return FSlateBrush{};
}

URSTPrimaryGameLayout* URSTUIExtensions::GetPrimaryGameLayoutForController(APlayerController* PlayerController) {
    return NULL;
}

URSTPrimaryGameLayout* URSTUIExtensions::GetPrimaryGameLayout(const UObject* WorldContextObject) {
    return NULL;
}

UPlayerMappableKeySettings* URSTUIExtensions::GetPlayerMappableKeySettingsRespectOverride(FEnhancedActionKeyMapping GivenMapping) {
    return NULL;
}

bool URSTUIExtensions::GetIsHostPlayerController(const UObject* WorldContextObject, ARSTPlayerController* PlayerController) {
    return false;
}

URSTGameStatePRSComponent* URSTUIExtensions::GetGameStatePRSComponent(const UObject* WorldContextObject) {
    return NULL;
}

TArray<UCommonActivatableWidget*> URSTUIExtensions::GetAllWidgetsFromLayer(const UObject* WorldContextObject, FGameplayTag LayerTag) {
    return TArray<UCommonActivatableWidget*>();
}

TArray<UCommonActivatableWidget*> URSTUIExtensions::GetAllWidgets(const UObject* WorldContextObject) {
    return TArray<UCommonActivatableWidget*>();
}

URSTModal_Video* URSTUIExtensions::CreateModal_Video(const ULocalPlayer* LocalPlayer, FText textTitle, FText textDescription, URSTVideoDefinition* VideoDefinition, UBinkMediaPlayer* BinkMediaPlayer, bool bShouldDisplayCloseButton, const FRSTModalDeletage& delegateOnModalComplete) {
    return NULL;
}

URSTModal_TwoChoices* URSTUIExtensions::CreateModal_TwoChoices(const ULocalPlayer* LocalPlayer, FText textTitle, FText textDescription, FText actionOneText, FText actionTwoText, const FRSTModalDeletage& delegateOne, const FRSTModalDeletage& delegateTwo) {
    return NULL;
}

URSTModal_TextPrompt* URSTUIExtensions::CreateModal_TextPrompt(const ULocalPlayer* LocalPlayer, FText textTitle, FText textDescription, FText HintText, FText actionOneText, FText actionTwoText, int32 CharacterLimit, bool bIsPasswordField, const FRSTTextModalDeletage& delegateOne, const FRSTTextModalDeletage& delegateTwo) {
    return NULL;
}

URSTModal_OneChoice* URSTUIExtensions::CreateModal_OneChoice(const ULocalPlayer* LocalPlayer, FText textTitle, FText textDescription, FText actionOneText, const FRSTModalDeletage& delegateOne) {
    return NULL;
}

URSTModal_KeyMapping* URSTUIExtensions::CreateModal_KeyRemap(const ULocalPlayer* LocalPlayer, FText textTitle, FText textDescription, const FRSTModalDeletage& delegateOnRemap) {
    return NULL;
}



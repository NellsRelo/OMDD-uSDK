#include "UIExtensionSubsystem.h"
#include "Templates/SubclassOf.h"

UUIExtensionSubsystem::UUIExtensionSubsystem() {
}

void UUIExtensionSubsystem::UnregisterExtensionPoint(const FUIExtensionPointHandle& ExtensionPointHandle) {
}

void UUIExtensionSubsystem::UnregisterExtension(const FUIExtensionHandle& ExtensionHandle) {
}

FUIExtensionPointHandle UUIExtensionSubsystem::K2_RegisterExtensionPoint(FGameplayTag ExtensionPointTag, EUIExtensionPointMatch ExtensionPointTagMatchType, const TArray<UClass*>& AllowedDataClasses, FExtendExtensionPointDynamicDelegate ExtensionCallback) {
    return FUIExtensionPointHandle{};
}

FUIExtensionHandle UUIExtensionSubsystem::K2_RegisterExtensionAsWidgetForContext(FGameplayTag ExtensionPointTag, TSubclassOf<UUserWidget> WidgetClass, UObject* ContextObject, int32 Priority) {
    return FUIExtensionHandle{};
}

FUIExtensionHandle UUIExtensionSubsystem::K2_RegisterExtensionAsWidget(FGameplayTag ExtensionPointTag, TSubclassOf<UUserWidget> WidgetClass, int32 Priority) {
    return FUIExtensionHandle{};
}

FUIExtensionHandle UUIExtensionSubsystem::K2_RegisterExtensionAsDataForContext(FGameplayTag ExtensionPointTag, UObject* ContextObject, UObject* Data, int32 Priority) {
    return FUIExtensionHandle{};
}

FUIExtensionHandle UUIExtensionSubsystem::K2_RegisterExtensionAsData(FGameplayTag ExtensionPointTag, UObject* Data, int32 Priority) {
    return FUIExtensionHandle{};
}



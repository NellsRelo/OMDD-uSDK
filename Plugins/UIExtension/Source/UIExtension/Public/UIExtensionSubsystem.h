#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "GameplayTagContainer.h"
#include "EUIExtensionPointMatch.h"
#include "ExtendExtensionPointDynamicDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "UIExtensionHandle.h"
#include "UIExtensionPointHandle.h"
#include "UIExtensionSubsystem.generated.h"

class UObject;
class UUserWidget;

UCLASS(Blueprintable)
class UIEXTENSION_API UUIExtensionSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UUIExtensionSubsystem();

    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void UnregisterExtensionPoint(const FUIExtensionPointHandle& ExtensionPointHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void UnregisterExtension(const FUIExtensionHandle& ExtensionHandle);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    FUIExtensionPointHandle K2_RegisterExtensionPoint(FGameplayTag ExtensionPointTag, EUIExtensionPointMatch ExtensionPointTagMatchType, const TArray<UClass*>& AllowedDataClasses, FExtendExtensionPointDynamicDelegate ExtensionCallback);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    FUIExtensionHandle K2_RegisterExtensionAsWidgetForContext(FGameplayTag ExtensionPointTag, TSubclassOf<UUserWidget> WidgetClass, UObject* ContextObject, int32 Priority);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    FUIExtensionHandle K2_RegisterExtensionAsWidget(FGameplayTag ExtensionPointTag, TSubclassOf<UUserWidget> WidgetClass, int32 Priority);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    FUIExtensionHandle K2_RegisterExtensionAsDataForContext(FGameplayTag ExtensionPointTag, UObject* ContextObject, UObject* Data, int32 Priority);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    FUIExtensionHandle K2_RegisterExtensionAsData(FGameplayTag ExtensionPointTag, UObject* Data, int32 Priority);
    
};


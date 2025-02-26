#pragma once
#include "CoreMinimal.h"
#include "CommonInputTypeEnum.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EnhancedActionKeyMapping.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "InputCoreTypes.h"
#include "Styling/SlateBrush.h"
#include "RSTModalDeletageDelegate.h"
#include "RSTTextModalDeletageDelegate.h"
#include "RSTUIExtensions.generated.h"

class APlayerController;
class ARSTPlayerController;
class UBinkMediaPlayer;
class UCommonActivatableWidget;
class UCommonInputSubsystem;
class ULocalPlayer;
class UObject;
class UPlayerMappableKeySettings;
class URSTActivatableWidget;
class URSTGameStatePRSComponent;
class URSTModal_KeyMapping;
class URSTModal_OneChoice;
class URSTModal_TextPrompt;
class URSTModal_TwoChoices;
class URSTModal_Video;
class URSTPrimaryGameLayout;
class URSTVideoDefinition;

UCLASS(Blueprintable)
class OMD4_API URSTUIExtensions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URSTUIExtensions();

    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void RSTPopContentFromLayer(URSTActivatableWidget* RSTActivatableWidget, bool bBypassAnimations);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RemoveAllWidgetsFromLayer(const UObject* WorldContextObject, FGameplayTag layerToRemove);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetWidgetCountFromLayers(const UObject* WorldContextObject, FGameplayTagContainer LayerTags);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetWidgetCountFromLayer(const UObject* WorldContextObject, FGameplayTag LayerTag);
    
    UFUNCTION(BlueprintCallable)
    static FSlateBrush GetTextureForActionForInputType(const UCommonInputSubsystem* CommonInputSubsystem, const FKey KeyToUse, ECommonInputType InputType, const FName GamepadName);
    
    UFUNCTION(BlueprintCallable)
    static URSTPrimaryGameLayout* GetPrimaryGameLayoutForController(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static URSTPrimaryGameLayout* GetPrimaryGameLayout(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static UPlayerMappableKeySettings* GetPlayerMappableKeySettingsRespectOverride(FEnhancedActionKeyMapping GivenMapping);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetIsHostPlayerController(const UObject* WorldContextObject, ARSTPlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static URSTGameStatePRSComponent* GetGameStatePRSComponent(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<UCommonActivatableWidget*> GetAllWidgetsFromLayer(const UObject* WorldContextObject, FGameplayTag LayerTag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<UCommonActivatableWidget*> GetAllWidgets(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static URSTModal_Video* CreateModal_Video(const ULocalPlayer* LocalPlayer, FText textTitle, FText textDescription, URSTVideoDefinition* VideoDefinition, UBinkMediaPlayer* BinkMediaPlayer, bool bShouldDisplayCloseButton, const FRSTModalDeletage& delegateOnModalComplete);
    
    UFUNCTION(BlueprintCallable)
    static URSTModal_TwoChoices* CreateModal_TwoChoices(const ULocalPlayer* LocalPlayer, FText textTitle, FText textDescription, FText actionOneText, FText actionTwoText, const FRSTModalDeletage& delegateOne, const FRSTModalDeletage& delegateTwo);
    
    UFUNCTION(BlueprintCallable)
    static URSTModal_TextPrompt* CreateModal_TextPrompt(const ULocalPlayer* LocalPlayer, FText textTitle, FText textDescription, FText HintText, FText actionOneText, FText actionTwoText, int32 CharacterLimit, bool bIsPasswordField, const FRSTTextModalDeletage& delegateOne, const FRSTTextModalDeletage& delegateTwo);
    
    UFUNCTION(BlueprintCallable)
    static URSTModal_OneChoice* CreateModal_OneChoice(const ULocalPlayer* LocalPlayer, FText textTitle, FText textDescription, FText actionOneText, const FRSTModalDeletage& delegateOne);
    
    UFUNCTION(BlueprintCallable)
    static URSTModal_KeyMapping* CreateModal_KeyRemap(const ULocalPlayer* LocalPlayer, FText textTitle, FText textDescription, const FRSTModalDeletage& delegateOnRemap);
    
};


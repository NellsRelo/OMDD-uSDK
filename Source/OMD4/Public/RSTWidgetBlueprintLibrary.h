#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Blueprint/WidgetBlueprintLibrary.h"
#include "Templates/SubclassOf.h"
#include "RSTWidgetBlueprintLibrary.generated.h"

class APlayerState;
class ARSTInventoryItemInstance;
class UCommonActivatableWidget;
class ULocalPlayer;
class URSTSpellbookOperation;
class UTexture2D;

UCLASS(Blueprintable)
class OMD4_API URSTWidgetBlueprintLibrary : public UWidgetBlueprintLibrary {
    GENERATED_BODY()
public:
    URSTWidgetBlueprintLibrary();

    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static UCommonActivatableWidget* GetLayerWidgetByClass(const ULocalPlayer* LocalPlayer, FGameplayTag LayerName, TSubclassOf<UCommonActivatableWidget> WidgetClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static URSTSpellbookOperation* GetCurrentSpellbookOperation(const ULocalPlayer* LocalPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FString> GetCultureDisplayNames();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetCultureCodeFromName(const FString& Name);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UTexture2D* GetAvatar(APlayerState* PlayerState, int32 AvatarSize);
    
    UFUNCTION(BlueprintCallable)
    static bool EndSpellbookOperation(const ULocalPlayer* LocalPlayer, URSTSpellbookOperation* SpellbookOperation);
    
    UFUNCTION(BlueprintCallable)
    static bool EndCurrentSpellbookOperation(const ULocalPlayer* LocalPlayer);
    
    UFUNCTION(BlueprintCallable)
    static URSTSpellbookOperation* BeginSpellbookOperation(const ULocalPlayer* LocalPlayer, ARSTInventoryItemInstance* InventoryItem);
    
};


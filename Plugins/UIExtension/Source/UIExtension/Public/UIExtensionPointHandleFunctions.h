#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UIExtensionPointHandle.h"
#include "UIExtensionPointHandleFunctions.generated.h"

UCLASS(Blueprintable)
class UIEXTENSION_API UUIExtensionPointHandleFunctions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUIExtensionPointHandleFunctions();

    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void Unregister(UPARAM(Ref) FUIExtensionPointHandle& Handle);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static bool IsValid(UPARAM(Ref) FUIExtensionPointHandle& Handle);
    
};


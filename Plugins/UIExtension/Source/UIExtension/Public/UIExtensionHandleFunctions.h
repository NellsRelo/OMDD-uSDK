#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UIExtensionHandle.h"
#include "UIExtensionHandleFunctions.generated.h"

UCLASS(Blueprintable)
class UIEXTENSION_API UUIExtensionHandleFunctions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUIExtensionHandleFunctions();

    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void Unregister(UPARAM(Ref) FUIExtensionHandle& Handle);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static bool IsValid(UPARAM(Ref) FUIExtensionHandle& Handle);
    
};


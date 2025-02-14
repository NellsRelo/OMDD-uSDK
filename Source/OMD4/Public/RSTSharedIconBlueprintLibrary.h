#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/LatentActionManager.h"
#include "RSTSharedIconBlueprintLibrary.generated.h"

class APlayerState;
class UObject;
class UTexture2D;

UCLASS(Blueprintable)
class OMD4_API URSTSharedIconBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URSTSharedIconBlueprintLibrary();

    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void GetPlayerPlatformIcon(UObject* WorldContextObject, FLatentActionInfo LatentInfo, APlayerState* Player, UTexture2D*& OutTexture);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void GetCrossplayPlatformIcon(UObject* WorldContextObject, FLatentActionInfo LatentInfo, const FString& CrossplayPlatform, UTexture2D*& OutTexture);
    
};


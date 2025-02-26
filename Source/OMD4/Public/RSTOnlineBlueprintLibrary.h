#pragma once
#include "CoreMinimal.h"
#include "CommonUserTypes.h"
#include "CommonUserTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/LatentActionManager.h"
#include "RSTOnlineBlueprintLibrary.generated.h"

class APlayerController;
class UObject;

UCLASS(Blueprintable)
class OMD4_API URSTOnlineBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URSTOnlineBlueprintLibrary();

    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void ResolveUserPrivilegeWithUI(UObject* WorldContextObject, FLatentActionInfo LatentInfo, APlayerController* Player, ECommonUserPrivilege Privilege, bool& bOutSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsNetworkOnline();
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void GetUserPrivilegeWithResolveUI(UObject* WorldContextObject, FLatentActionInfo LatentInfo, APlayerController* Player, ECommonUserPrivilege Privilege, ECommonUserPrivilegeResult& OutResult);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void GetUserPrivilege(UObject* WorldContextObject, FLatentActionInfo LatentInfo, APlayerController* Player, ECommonUserPrivilege Privilege, ECommonUserPrivilegeResult& OutResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CanPlatformLinkAccount();
    
};


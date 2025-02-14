#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/LatentActionManager.h"
#include "RSTPlayerProfileBlueprintLibrary.generated.h"

class APlayerController;
class UObject;
class URSTPlayerProfile;
class URSTPlayerProfileInfo;

UCLASS(Blueprintable)
class OMD4_API URSTPlayerProfileBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URSTPlayerProfileBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static void RenamePlayerProfile(APlayerController* Player, int32 SlotIndex, const FString& ProfileName);
    
    UFUNCTION(BlueprintPure)
    static double GetPlayerProfilePlayTime(APlayerController* Player, int32 SlotIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetPlayerProfileName(APlayerController* Player, int32 SlotIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static URSTPlayerProfile* GetPlayerProfile(APlayerController* Player);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void GetAllPlayerProfiles(UObject* WorldContextObject, FLatentActionInfo LatentInfo, APlayerController* Player, TArray<URSTPlayerProfileInfo*>& OutPlayerProfiles, bool& OutSuccess);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void DeletePlayerProfile(UObject* WorldContextObject, FLatentActionInfo LatentInfo, APlayerController* Player, int32 SlotIndex, bool& OutSuccess);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void CreatePlayerProfile(UObject* WorldContextObject, FLatentActionInfo LatentInfo, APlayerController* Player, const FString& ProfileName, bool& OutSuccess);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void ChangePlayerProfile(UObject* WorldContextObject, FLatentActionInfo LatentInfo, APlayerController* Player, int32 SlotIndex, bool& OutSuccess, FText& OutErrorText);
    
};


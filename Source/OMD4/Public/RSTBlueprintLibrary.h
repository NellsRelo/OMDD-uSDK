#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameFramework/InputSettings.h"
#include "Curves/CurveFloat.h"
#include "Styling/SlateTypes.h"
#include "ERSTTrapPlacementFlags.h"
#include "Templates/SubclassOf.h"
#include "RSTBlueprintLibrary.generated.h"

class AActor;
class APawn;
class APlayerController;
class APlayerState;
class ARSTInventoryItemInstance;
class ARSTPlayerState;
class UAnimMetaData;
class UAnimationAsset;
class UCommonTextStyle;
class UObject;
class UUserWidget;

UCLASS(Blueprintable)
class OMD4_API URSTBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URSTBlueprintLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void ToTextBlockStyle(UCommonTextStyle* TextStyleClass, FTextBlockStyle& OutTextBlockStyle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsLoadingScreenVisible(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool HasTrapPlacementFlag(ERSTTrapPlacementFlags Value, ERSTTrapPlacementFlags ToMatch);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetTrapPlacementCost(const UUserWidget* UserWidget, const ARSTInventoryItemInstance* ItemInstance);
    
    UFUNCTION(BlueprintCallable)
    static TArray<ARSTPlayerState*> GetSortedPlayerArray(const TArray<APlayerState*>& InPlayerArray);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FText> GetSortedPeopleNamesArray(const TArray<FText>& InTextArray);
    
    UFUNCTION(BlueprintCallable)
    static bool GetMetaDataForAnim(const UAnimationAsset* AnimAsset, TSubclassOf<UAnimMetaData> MetadataClass, UAnimMetaData*& OutMetadata);
    
    UFUNCTION(BlueprintCallable)
    static UObject* GetDefaultObjectForClass(UClass* ObjectClass, bool& bSuccess);
    
    UFUNCTION(BlueprintCallable)
    static void GetCurrentInputDeviceForPlayer(const APlayerController* PlayerController, FHardwareDeviceIdentifier& OutHardwareDeviceIdentifier);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FString GetClientString(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetAllActorsOfClass(const UObject* WorldContextObject, TSubclassOf<AActor> ActorClass, TArray<AActor*>& OutActors);
    
    UFUNCTION(BlueprintCallable)
    static void GatherOnslaughtPawnsInRadius(FVector Location, float Radius, TArray<APawn*>& OutPawns);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float EvaluateRuntimeFloatCurve(const FRuntimeFloatCurve& Curve, float Time);
    
    UFUNCTION(BlueprintCallable)
    static bool DisableTrap(AActor* TrapToDisable, float Duration);
    
};


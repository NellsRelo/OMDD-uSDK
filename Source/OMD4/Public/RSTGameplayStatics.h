#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Kismet/GameplayStaticsTypes.h"
#include "Engine/LatentActionManager.h"
#include "GameFramework/OnlineReplStructs.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "ERSTInventoryItemFilter.h"
#include "ERSTThreadFilter.h"
#include "RSTGameplayStatics.generated.h"

class APlayerController;
class ARSTInventoryItemInstance;
class ARSTWorldSettings;
class ULevelStreaming;
class ULocalPlayer;
class UObject;
class URSTInventoryItemDefinition;
class URSTMetaModifierDefinition;
class URSTMetaThreadDefinition;
class URSTMilestone;
class URSTPlayerProfile;
class URSTPotionDefinition;
class URSTSkinUserFacingData;
class URSTVideoDefinition;
class USceneComponent;

UCLASS(Blueprintable)
class OMD4_API URSTGameplayStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URSTGameplayStatics();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool SuggestProjectileVelocity(const UObject* WorldContextObject, FVector& TossVelocity, FVector StartLocation, FVector EndLocation, float LaunchSpeed, float OverrideGravityZ, float ProjectileGravityScale, TEnumAsByte<ESuggestProjVelocityTraceOption::Type> TraceOption, float CollisionRadius, bool bFavorHighArc, bool bDrawDebug);
    
    UFUNCTION(BlueprintCallable)
    static void SortThreadDefinitions(const URSTPlayerProfile* Profile, const TArray<URSTMetaThreadDefinition*>& InMetaThreadDefinitions, TArray<URSTMetaThreadDefinition*>& OutMetaThreadDefinitions, bool bSortOwned);
    
    UFUNCTION(BlueprintCallable)
    static void SortPotions(const TArray<URSTPotionDefinition*>& InMetaPotionDefinitions, TArray<URSTPotionDefinition*>& OutMetaPotionDefinitions);
    
    UFUNCTION(BlueprintCallable)
    static void SortModifierDefinitions(const TArray<URSTMetaModifierDefinition*>& InMetaModifierDefinitions, TArray<URSTMetaModifierDefinition*>& OutMetaModifierDefinitions);
    
    UFUNCTION(BlueprintCallable)
    static void SortInventoryItemInstances(const TArray<ARSTInventoryItemInstance*>& InInventoryItems, TArray<ARSTInventoryItemInstance*>& OutFilteredItems);
    
    UFUNCTION(BlueprintCallable)
    static void SortInventoryItemDefinitions(const TArray<URSTInventoryItemDefinition*>& InInventoryItems, TArray<URSTInventoryItemDefinition*>& OutFilteredItems);
    
    UFUNCTION(BlueprintCallable)
    static void SortHeroArray(const TArray<FGameplayTag>& InHeroTags, TArray<FGameplayTag>& OutHeroTags);
    
    UFUNCTION(BlueprintCallable)
    static void RestartApplicationWithCmdLine(const FString& CmdLine);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NetIdEqual(const FUniqueNetIdRepl& A, const FUniqueNetIdRepl& B);
    
    UFUNCTION(BlueprintCallable)
    static void MarkLevelClientOnlyVisible(ULevelStreaming* InLevel);
    
    UFUNCTION(BlueprintCallable)
    static bool IsSkinValidForHero(const FGameplayTag& Hero, const FGameplayTag& Skin);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsSkinUnlocked(const UObject* WorldContextObject, const FGameplayTag& Skin);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsHeroValidForProfile(const UObject* WorldContextObject, const URSTPlayerProfile* Profile, FGameplayTag HeroTag);
    
    UFUNCTION(BlueprintCallable)
    static void InvalidateAllWidgets();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasPlatformTrait(FGameplayTag Trait);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasAllPlatformTraits(FGameplayTagContainer Traits);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ARSTWorldSettings* GetWorldSettings(const UObject* WorldContextObject, bool bCheckStreamingPersistent);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetValidHeroesForProfile(const UObject* WorldContextObject, const URSTPlayerProfile* Profile, FGameplayTagContainer& OutHeroTags);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetValidHeroArrayForProfile(const UObject* WorldContextObject, const URSTPlayerProfile* Profile, TArray<FGameplayTag>& OutHeroTags);
    
    UFUNCTION(BlueprintCallable)
    static bool GetThreadNameFromAssetData(FAssetData Data, FText& OutThreadName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTagQuery GetTagQueryFromAssetData(const FAssetData& Data, FName PropertyName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTag GetTagFromString(const FString& String);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTag GetTagFromAssetData(const FAssetData& Data, FName PropertyName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTagContainer GetTagContainerFromAssetData(const FAssetData& Data, FName PropertyName);
    
    UFUNCTION(BlueprintPure)
    static double GetSlateTime();
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void GetSkinUserFacingDataForHero(UObject* WorldContextObject, FLatentActionInfo LatentInfo, APlayerController* Player, FGameplayTag HeroTag, TArray<FName> LoadBundles, TArray<URSTSkinUserFacingData*>& OutSkins);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetSkinTagsForHero(UObject* WorldContextObject, FGameplayTag HeroTag, TArray<FGameplayTag>& OutSkinTags);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float GetServerTime(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetProjectVersion();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTagContainer GetPlatformTraits();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetPasswordHash(const FString& InputString, const FString& Salt);
    
    UFUNCTION(BlueprintPure)
    static int64 GetNetworkCompatibleChangelist();
    
    UFUNCTION(BlueprintCallable)
    static URSTMilestone* GetMilestoneFromTag(FGameplayTag MilestoneTag);
    
    UFUNCTION(BlueprintCallable)
    static bool GetMilestoneAssetDataFromTag(FGameplayTag MilestoneTag, FAssetData& OutData);
    
    UFUNCTION(BlueprintCallable)
    static void GetComponentBoundsMinMax(USceneComponent* SceneComponent, FVector& Min, FVector& Max);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void GetAllVideos(UObject* WorldContextObject, FLatentActionInfo LatentInfo, APlayerController* Player, TArray<URSTVideoDefinition*>& OutVideoDefinitions);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void GetAllThreads(UObject* WorldContextObject, FLatentActionInfo LatentInfo, APlayerController* Player, TArray<URSTMetaThreadDefinition*>& OutThreadDefinitions);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void GetAllPurchasableInventoryItems(UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<URSTInventoryItemDefinition*>& OutInventoryItems);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void GetAllPotions(UObject* WorldContextObject, FLatentActionInfo LatentInfo, APlayerController* Player, TArray<URSTPotionDefinition*>& OutPotionDefinitions);
    
    UFUNCTION(BlueprintCallable)
    static bool FindThreadWithMilestoneRequirement(FGameplayTag MilestoneTag, FAssetData& OutData);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void FilterThreads(UObject* WorldContextObject, ULocalPlayer* LocalPlayer, const TArray<URSTMetaThreadDefinition*>& InThreadDefinitions, ERSTThreadFilter Filter, TArray<URSTMetaThreadDefinition*>& OUtFilteredThreadDefinitions);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTagContainer FilterTagContainer(const FGameplayTagContainer& A, const FGameplayTagContainer& B, bool bExact);
    
    UFUNCTION(BlueprintCallable)
    static void FilterPotions(const TArray<URSTPotionDefinition*>& InPotionDefinitions, TArray<URSTPotionDefinition*>& OutFilteredPotionDefinitions);
    
    UFUNCTION(BlueprintCallable)
    static void FilterInventoryItemInstances(const TArray<ARSTInventoryItemInstance*>& InInventoryItems, ERSTInventoryItemFilter Filter, TArray<ARSTInventoryItemInstance*>& OutFilteredItems);
    
    UFUNCTION(BlueprintCallable)
    static void FilterInventoryItemDefinitions(const TArray<URSTInventoryItemDefinition*>& InInventoryItems, ERSTInventoryItemFilter Filter, TArray<URSTInventoryItemDefinition*>& OutFilteredItems);
    
    UFUNCTION(BlueprintCallable)
    static void FilterEnabledHeroes(const TArray<FGameplayTag>& InHeroTags, TArray<FGameplayTag>& OutHeroTags);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString ConvertTagToString(FGameplayTag Tag, FGameplayTag Root);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTag ConvertStringToTag(const FString& Leaf, FGameplayTag Root);
    
};


#include "RSTGameplayStatics.h"

URSTGameplayStatics::URSTGameplayStatics() {
}

bool URSTGameplayStatics::SuggestProjectileVelocity(const UObject* WorldContextObject, FVector& TossVelocity, FVector StartLocation, FVector EndLocation, float LaunchSpeed, float OverrideGravityZ, float ProjectileGravityScale, TEnumAsByte<ESuggestProjVelocityTraceOption::Type> TraceOption, float CollisionRadius, bool bFavorHighArc, bool bDrawDebug) {
    return false;
}

void URSTGameplayStatics::SortThreadDefinitions(const URSTPlayerProfile* Profile, const TArray<URSTMetaThreadDefinition*>& InMetaThreadDefinitions, TArray<URSTMetaThreadDefinition*>& OutMetaThreadDefinitions, bool bSortOwned) {
}

void URSTGameplayStatics::SortPotions(const TArray<URSTPotionDefinition*>& InMetaPotionDefinitions, TArray<URSTPotionDefinition*>& OutMetaPotionDefinitions) {
}

void URSTGameplayStatics::SortModifierDefinitions(const TArray<URSTMetaModifierDefinition*>& InMetaModifierDefinitions, TArray<URSTMetaModifierDefinition*>& OutMetaModifierDefinitions) {
}

void URSTGameplayStatics::SortInventoryItemInstances(const TArray<ARSTInventoryItemInstance*>& InInventoryItems, TArray<ARSTInventoryItemInstance*>& OutFilteredItems) {
}

void URSTGameplayStatics::SortInventoryItemDefinitions(const TArray<URSTInventoryItemDefinition*>& InInventoryItems, TArray<URSTInventoryItemDefinition*>& OutFilteredItems) {
}

void URSTGameplayStatics::SortHeroArray(const TArray<FGameplayTag>& InHeroTags, TArray<FGameplayTag>& OutHeroTags) {
}

void URSTGameplayStatics::RestartApplicationWithCmdLine(const FString& CmdLine) {
}

bool URSTGameplayStatics::NetIdEqual(const FUniqueNetIdRepl& A, const FUniqueNetIdRepl& B) {
    return false;
}

void URSTGameplayStatics::MarkLevelClientOnlyVisible(ULevelStreaming* InLevel) {
}

bool URSTGameplayStatics::IsSkinValidForHero(const FGameplayTag& Hero, const FGameplayTag& Skin) {
    return false;
}

bool URSTGameplayStatics::IsSkinUnlocked(const UObject* WorldContextObject, const FGameplayTag& Skin) {
    return false;
}

bool URSTGameplayStatics::IsHeroValidForProfile(const UObject* WorldContextObject, const URSTPlayerProfile* Profile, FGameplayTag HeroTag) {
    return false;
}

void URSTGameplayStatics::InvalidateAllWidgets() {
}

bool URSTGameplayStatics::HasPlatformTrait(FGameplayTag Trait) {
    return false;
}

bool URSTGameplayStatics::HasAllPlatformTraits(FGameplayTagContainer Traits) {
    return false;
}

ARSTWorldSettings* URSTGameplayStatics::GetWorldSettings(const UObject* WorldContextObject, bool bCheckStreamingPersistent) {
    return NULL;
}

void URSTGameplayStatics::GetValidHeroesForProfile(const UObject* WorldContextObject, const URSTPlayerProfile* Profile, FGameplayTagContainer& OutHeroTags) {
}

void URSTGameplayStatics::GetValidHeroArrayForProfile(const UObject* WorldContextObject, const URSTPlayerProfile* Profile, TArray<FGameplayTag>& OutHeroTags) {
}

bool URSTGameplayStatics::GetThreadNameFromAssetData(FAssetData Data, FText& OutThreadName) {
    return false;
}

FGameplayTagQuery URSTGameplayStatics::GetTagQueryFromAssetData(const FAssetData& Data, FName PropertyName) {
    return FGameplayTagQuery{};
}

FGameplayTag URSTGameplayStatics::GetTagFromString(const FString& String) {
    return FGameplayTag{};
}

FGameplayTag URSTGameplayStatics::GetTagFromAssetData(const FAssetData& Data, FName PropertyName) {
    return FGameplayTag{};
}

FGameplayTagContainer URSTGameplayStatics::GetTagContainerFromAssetData(const FAssetData& Data, FName PropertyName) {
    return FGameplayTagContainer{};
}

double URSTGameplayStatics::GetSlateTime() {
    return 0.0;
}

void URSTGameplayStatics::GetSkinUserFacingDataForHero(UObject* WorldContextObject, FLatentActionInfo LatentInfo, APlayerController* Player, FGameplayTag HeroTag, TArray<FName> LoadBundles, TArray<URSTSkinUserFacingData*>& OutSkins) {
}

void URSTGameplayStatics::GetSkinTagsForHero(UObject* WorldContextObject, FGameplayTag HeroTag, TArray<FGameplayTag>& OutSkinTags) {
}

float URSTGameplayStatics::GetServerTime(const UObject* WorldContextObject) {
    return 0.0f;
}

FString URSTGameplayStatics::GetProjectVersion() {
    return TEXT("");
}

FGameplayTagContainer URSTGameplayStatics::GetPlatformTraits() {
    return FGameplayTagContainer{};
}

FString URSTGameplayStatics::GetPasswordHash(const FString& InputString, const FString& Salt) {
    return TEXT("");
}

int64 URSTGameplayStatics::GetNetworkCompatibleChangelist() {
    return 0;
}

URSTMilestone* URSTGameplayStatics::GetMilestoneFromTag(FGameplayTag MilestoneTag) {
    return NULL;
}

bool URSTGameplayStatics::GetMilestoneAssetDataFromTag(FGameplayTag MilestoneTag, FAssetData& OutData) {
    return false;
}

void URSTGameplayStatics::GetComponentBoundsMinMax(USceneComponent* SceneComponent, FVector& Min, FVector& Max) {
}

void URSTGameplayStatics::GetAllVideos(UObject* WorldContextObject, FLatentActionInfo LatentInfo, APlayerController* Player, TArray<URSTVideoDefinition*>& OutVideoDefinitions) {
}

void URSTGameplayStatics::GetAllThreads(UObject* WorldContextObject, FLatentActionInfo LatentInfo, APlayerController* Player, TArray<URSTMetaThreadDefinition*>& OutThreadDefinitions) {
}

void URSTGameplayStatics::GetAllPurchasableInventoryItems(UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<URSTInventoryItemDefinition*>& OutInventoryItems) {
}

void URSTGameplayStatics::GetAllPotions(UObject* WorldContextObject, FLatentActionInfo LatentInfo, APlayerController* Player, TArray<URSTPotionDefinition*>& OutPotionDefinitions) {
}

bool URSTGameplayStatics::FindThreadWithMilestoneRequirement(FGameplayTag MilestoneTag, FAssetData& OutData) {
    return false;
}

void URSTGameplayStatics::FilterThreads(UObject* WorldContextObject, ULocalPlayer* LocalPlayer, const TArray<URSTMetaThreadDefinition*>& InThreadDefinitions, ERSTThreadFilter Filter, TArray<URSTMetaThreadDefinition*>& OUtFilteredThreadDefinitions) {
}

FGameplayTagContainer URSTGameplayStatics::FilterTagContainer(const FGameplayTagContainer& A, const FGameplayTagContainer& B, bool bExact) {
    return FGameplayTagContainer{};
}

void URSTGameplayStatics::FilterPotions(const TArray<URSTPotionDefinition*>& InPotionDefinitions, TArray<URSTPotionDefinition*>& OutFilteredPotionDefinitions) {
}

void URSTGameplayStatics::FilterInventoryItemInstances(const TArray<ARSTInventoryItemInstance*>& InInventoryItems, ERSTInventoryItemFilter Filter, TArray<ARSTInventoryItemInstance*>& OutFilteredItems) {
}

void URSTGameplayStatics::FilterInventoryItemDefinitions(const TArray<URSTInventoryItemDefinition*>& InInventoryItems, ERSTInventoryItemFilter Filter, TArray<URSTInventoryItemDefinition*>& OutFilteredItems) {
}

void URSTGameplayStatics::FilterEnabledHeroes(const TArray<FGameplayTag>& InHeroTags, TArray<FGameplayTag>& OutHeroTags) {
}

FString URSTGameplayStatics::ConvertTagToString(FGameplayTag Tag, FGameplayTag Root) {
    return TEXT("");
}

FGameplayTag URSTGameplayStatics::ConvertStringToTag(const FString& Leaf, FGameplayTag Root) {
    return FGameplayTag{};
}



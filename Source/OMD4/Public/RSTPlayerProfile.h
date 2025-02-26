#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/SaveGame.h"
#include "GameFramework/OnlineReplStructs.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "RSTSavedItemUpgradeData.h"
#include "RSTSavedRun.h"
#include "RSTSavedStatEntry.h"
#include "RSTPlayerProfile.generated.h"

class ARSTInventoryItemInstance;
class UObject;
class URSTInventoryItemDefinition;
class URSTMetaThreadDefinition;
class URSTUpgradeDefinition;

UCLASS(Blueprintable)
class OMD4_API URSTPlayerProfile : public ULocalPlayerSaveGame {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUniqueNetIdRepl PlayerNetIdOnLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FDateTime TimeAtSerialization;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 SlotIndex;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double TotalPlayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString LoadedBuildVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SavedBuildVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FGameplayTag> SkinSelections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<URSTUpgradeDefinition*> Upgrades;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<URSTMetaThreadDefinition*> Threads;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<URSTMetaThreadDefinition*> CachedNewUnlocks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<URSTInventoryItemDefinition*> InventoryItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<URSTInventoryItemDefinition*, FRSTSavedItemUpgradeData> ItemUpgrades;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<URSTInventoryItemDefinition*> HotbarItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Skulls;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastGrantSkullCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GoldSkulls;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer GrantedKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FRSTSavedStatEntry> PersistentStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FRSTSavedStatEntry> PreviousRunStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FRSTSavedStatEntry> PreviousMissionStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LobbyId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MissionSeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Password;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PreviousLostMap;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTSavedRun SavedRun;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer PendingHeroUnlocks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer HeroUnlocks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer PendingSkinUnlocks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer SkinUnlocks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DifficultyScaling;
    
public:
    URSTPlayerProfile();

    UFUNCTION(BlueprintCallable)
    void UnlockSkins(FGameplayTagContainer TagContainer);
    
    UFUNCTION(BlueprintCallable)
    void UnlockSkin(FGameplayTag Tag);
    
    UFUNCTION(BlueprintCallable)
    void UnlockHeroes(FGameplayTagContainer TagContainer);
    
    UFUNCTION(BlueprintCallable)
    void UnlockHero(FGameplayTag Tag);
    
    UFUNCTION(BlueprintCallable)
    bool SpendSkulls(int32 amount);
    
    UFUNCTION(BlueprintCallable)
    bool SpendGoldSkulls(int32 amount);
    
    UFUNCTION(BlueprintCallable)
    void SetSkin(const FGameplayTag& InCharacter, const FGameplayTag& InSkin);
    
    UFUNCTION(BlueprintCallable)
    void SetSavedRunCanBeRestored(bool bInCanBeRestored);
    
    UFUNCTION(BlueprintCallable)
    void SetPassword(const FString& InPassword);
    
    UFUNCTION(BlueprintCallable)
    void SetHotbarItems(TArray<ARSTInventoryItemInstance*> InHotbarItems);
    
    UFUNCTION(BlueprintCallable)
    void SetDifficultyScaling(int32 InDifficultyScaling);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacter(const FGameplayTag& InCharacter);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void SaveCurrentRun(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    bool RevokeKey(const FGameplayTag& KeyToRevoke);
    
    UFUNCTION(BlueprintCallable)
    void ResetKeys();
    
    UFUNCTION(BlueprintCallable)
    void ProcessSkinUnlocks(FGameplayTagContainer TagContainer);
    
    UFUNCTION(BlueprintCallable)
    void ProcessHeroUnlocks(FGameplayTagContainer TagContainer);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void LoadSavedRun(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsThreadOwnedByTag(FGameplayTag Tag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsThreadOwned(const URSTMetaThreadDefinition* Thread) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSkinUnlocked(FGameplayTag Tag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsQuicksaveAllowed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerProfileValid(FText& OutError) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInventoryItemOwnedByTag(FGameplayTag Tag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInventoryItemOwned(const URSTInventoryItemDefinition* InventoryItem) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHeroUnlocked(FGameplayTag Tag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasUpgrade(FGameplayTag UpgradeTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasGrantedKey(const FGameplayTag& KeyToCheck) const;
    
    UFUNCTION(BlueprintCallable)
    bool GrantSkulls(int32 amount);
    
    UFUNCTION(BlueprintCallable)
    void GrantKeys_RecordNewGrants(const FGameplayTagContainer& KeysToGrant, FGameplayTagContainer& OutNewGrants);
    
    UFUNCTION(BlueprintCallable)
    void GrantKeys(const FGameplayTagContainer& KeysToGrant);
    
    UFUNCTION(BlueprintCallable)
    bool GrantKey(const FGameplayTag& KeyToGrant);
    
    UFUNCTION(BlueprintCallable)
    bool GrantGoldSkulls(int32 amount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTagContainer GetUnlockedSkins() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FGameplayTag> GetUnlockedSkinArray() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTagContainer GetUnlockedHeroes() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FGameplayTag> GetUnlockedHeroArray() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSkulls() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FGameplayTag, FGameplayTag> GetSkinSelections() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetSkin(const FGameplayTag& InCharacter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRSTSavedRun GetSavedRun() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumUpgrades() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumThreads() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTagContainer GetGrantedKeys() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetGoldSkulls() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDifficultyScaling() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetCharacter();
    
    UFUNCTION(BlueprintCallable)
    void ClearSavedRun();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanUnlock(const URSTMetaThreadDefinition* InThread) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanResumeSavedRun() const;
    
    UFUNCTION(BlueprintCallable)
    bool AddThreads(const TArray<URSTMetaThreadDefinition*>& InThreads, TArray<URSTMetaThreadDefinition*>& OutGrantedThreads);
    
    UFUNCTION(BlueprintCallable)
    bool AddThread(const URSTMetaThreadDefinition* InThread);
    
    UFUNCTION(BlueprintCallable)
    void AddProfileStat(const FGameplayTag& Tag, int32 Value, const FGameplayTag& Subtag);
    
    UFUNCTION(BlueprintCallable)
    void AddInventoryItem(const URSTInventoryItemDefinition* InventoryItem);
    
};


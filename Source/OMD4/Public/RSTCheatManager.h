#pragma once
#include "CoreMinimal.h"
#include "GameFramework/CheatManager.h"
#include "GameplayTagContainer.h"
#include "ERSTStatType.h"
#include "RSTCheatManager.generated.h"

UCLASS(Blueprintable, MinimalAPI, Config=Game)
class URSTCheatManager : public UCheatManager {
    GENERATED_BODY()
public:
    URSTCheatManager();

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void WinGame();
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockMilestone(FGameplayTag MilestoneTag);
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockHero(FGameplayTag HeroTag);
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockAllThreads();
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockAllMilestones();
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockAllHeroes();
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlimitedAmmo();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleWisps();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void ToggleOneShot();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleHUD();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleHenry();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void ToggleFriendlyFire();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleAimAssistDebug();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SwapPlayerIndices(int32 IndexA, int32 IndexB);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void Suicide();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SpawnPickupFromTable(FGameplayTag PickupTableTag);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void SpawnAICharactersOfClassAtDoor(const FString& Name, int32 Index, int32 Count);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void SpawnAICharactersOfClass(const FString& Name, int32 Count);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowSkulls();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowDifficulty();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void SetSkinDefinition(const FString& TagName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetRiftPoints(int32 RiftPoints);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetProfileStat(FGameplayTag Tag, int32 Value, ERSTStatType StatType, FGameplayTag Subtag);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void SetPawnDefinition(const FString& TagName);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void SetNumPlayersDifficulty(uint8 numPlayersDifficulty);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetNextDistortion(const FString& DistortionName);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void SetNavRenderLayer(int32 NewLayer);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void SetInfiniteRift(bool isInfiniteRift);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void SetHotbarSize(int32 NumSlots);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetHealthDisplays(bool Enabled);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void SetGameDifficulty(uint8 GameDifficulty);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetDistortion(const FString& DistortionName, int32 missionIndex);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void SetAllAICharactersClass(const FString& Name);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void SetAllAICharactersAmount(int32 amount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void RevokeKey(FGameplayTag Key);
    
    UFUNCTION(BlueprintCallable, Exec)
    void RevokeAllGrantedKeys();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void ReviveFromDowned(float ReviverMultiplier);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ResetProfile();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void ResetAllTraps();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void RerollSessionMissionSeed();
    
    UFUNCTION(BlueprintCallable, Exec)
    void RemoveUpgrade(const FString& UpgradeName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void RemoveThread(const FString& ThreadName);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void RemoveTagFromSelf(const FString& TagName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void RemoveGameplayCue(const FGameplayTag& CueTag);
    
    UFUNCTION(BlueprintCallable, Exec)
    void RemoveDistortion(const FString& DistortionName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void RefreshMilestones();
    
    UFUNCTION(BlueprintCallable, Exec)
    void RefreshConnectLogin();
    
    UFUNCTION(BlueprintCallable, Exec)
    void PrintValidThreads(int32 threadIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PrintValidMissions(int32 missionIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PrintValidDistortions(int32 missionIndex, int32 ChoiceIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PrintTeamThreads();
    
    UFUNCTION(BlueprintCallable, Exec)
    void PrintStat(FGameplayTag Tag, FGameplayTag Subtag);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PrintProfileStats();
    
    UFUNCTION(BlueprintCallable, Exec)
    void PrintPlayerArray();
    
    UFUNCTION(BlueprintCallable, Exec)
    void PrintMilestoneProgress();
    
    UFUNCTION(BlueprintCallable, Exec)
    void PrintGrantedKeys();
    
    UFUNCTION(BlueprintCallable, Exec)
    void PrintCrystalRiftHealth();
    
    UFUNCTION(BlueprintCallable, Exec)
    void PreviewLighting(const FString& LightingName);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void NextWave();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void LoseGame();
    
    UFUNCTION(BlueprintCallable, Exec)
    void LogAnalyticsEvent(const FString& Event, float Value);
    
    UFUNCTION(BlueprintCallable, Exec)
    void LaunchMission(const FString& MissionName, const FString& DistortionName);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void KillAllMobs();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void InstantRestartPlayer();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void InfiniteRift();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ImportQuicksave(const FString& Filename);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ForceGarbageCollection();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void FinishWave();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ExportQuicksave(const FString& Filename);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ExpireTeamThreads(bool bApplyImmediately);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ExecuteGameplayCue(const FGameplayTag& CueTag);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DumpAllPlayerGameplayTags();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DisplayUpgrades();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DisplayMissionHistory();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void DisableAllTraps(float Time);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSelectThread();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPlayTransition(const FGameplayTag& TransitionTag);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void DamageSelf(float DamageAmount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void CrashTest();
    
    UFUNCTION(BlueprintCallable, Exec)
    void CompleteMilestoneProgress(FGameplayTag MilestoneTag);
    
    UFUNCTION(BlueprintCallable, Exec)
    void CompleteAllMilestones();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ClearPotion();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ApplyUpgrade(const FString& UpgradeName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ApplyThread(const FString& ThreadName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ApplyTeamThread(const FString& ThreadName, bool bApplyImmediately);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ApplyPotion(const FString& PotionName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ApplyDistortion(const FString& DistortionName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AllowApplyModifiers(bool bAllowModifiers);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void AddTagToSelf(const FString& TagName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddRiftPoints(int32 RiftPoints);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddProfileStat(FGameplayTag Tag, int32 Value, ERSTStatType StatType, FGameplayTag Subtag);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void AddItemToHotbar(const FString& ItemName, int32 Slot);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddGameplayCue(const FGameplayTag& CueTag);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddCharges(const FString& ChargeName, float Count);
    
};


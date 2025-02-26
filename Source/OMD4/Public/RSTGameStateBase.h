#pragma once
#include "CoreMinimal.h"
#include "LoadingProcessInterface.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "ModularGameState.h"
#include "ModularGameStateBase.h"
#include "ERSTGameModeType.h"
#include "ERSTGamePhase.h"
#include "ERSTRiftPointLossReason.h"
#include "OMDEndGameParameters.h"
#include "OnGoBreakChangedDelegate.h"
#include "OnPlayerStateChangedDelegate.h"
#include "RSTAppliedAccoladeData.h"
#include "RSTCharacterHitParams.h"
#include "RSTGameplayScoreData.h"
#include "RSTPlayerSelectionParameters.h"
#include "RSTReplicatedDifficultyData.h"
#include "RSTTeamThreadData.h"
#include "RSTTrapPlacementLimitRepl.h"
#include "Templates/SubclassOf.h"
#include "RSTGameStateBase.generated.h"

class AActor;
class ARSTAICharacter;
class ARSTCharacter;
class ARSTGameStateBase;
class ARSTOnslaughtCoordinator;
class ARSTPlayerState;
class UGameplayEffect;
class URSTExperienceManagerComponent;
class URSTGameStatePRSComponent;
class URSTMetaDistortionDefinition;
class URSTMissionDefinition;
class URSTTransitionManagerComponent;

UCLASS(Blueprintable)
class OMD4_API ARSTGameStateBase : public AModularGameStateBase/*, public ILoadingProcessInterface*/ {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRSTWaveChangedDelegate, ARSTGameStateBase*, GameState);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FRSTTeamCompositionDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FRSTOnslaughtInitializedDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRSTOnRiftPointsChangedDelegate, int32, OldValue, int32, NewValue);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRSTOnInitialRiftPointsSetDelegate, int32, Value);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FRSTOnGambledSkullsChangedDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FRSTMissionChoiceHostDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRSTMissionChoiceDelegate, ARSTGameStateBase*, GameState);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FRSTDifficultyChangedDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRSTBossDelegate, ARSTCharacter*, BossCharacter);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FRSTBonusTrapPlacementLimitChanged);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FRSTAccoladesUpdated);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerStateChanged OnPlayerStateAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerStateChanged OnPlayerStateRemoved;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTExperienceManagerComponent* ExperienceManagerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTGameStatePRSComponent* PRSComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTTransitionManagerComponent* TransitionManagerComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARSTOnslaughtCoordinator* OnslaughtCoordinator;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ERSTGameModeType CachedGameModeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsHUB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bDidWin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 GrantedSkulls;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GrantedGoldSkulls;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_GrantedSkullsCarriedOver, meta=(AllowPrivateAccess=true))
    int32 GrantedSkullsCarriedOver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GrantedGoldSkullsCarriedOver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_GambledSkullsCarriedOver, meta=(AllowPrivateAccess=true))
    int32 GambledSkullsCarriedOver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_GambledSkulls, meta=(AllowPrivateAccess=true))
    int32 GambledSkulls;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 EnemiesSpawned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RiftPoints, meta=(AllowPrivateAccess=true))
    int32 RiftPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 InitialRiftPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RiftProtectedCounts, meta=(AllowPrivateAccess=true))
    TArray<int32> RiftProtectionCounts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsTimedBreakActive, meta=(AllowPrivateAccess=true))
    bool bIsTimedBreakActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float OnslaughtTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentWave, meta=(AllowPrivateAccess=true))
    int32 CurrentWave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 MaxWave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float FirstWaveStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float CompletionTime;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTBossDelegate OnBossSpawned;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTBossDelegate OnBossDied;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTWaveChangedDelegate OnCurrentWaveChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer FirstSpawnNotifyTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SpawnedBoss, meta=(AllowPrivateAccess=true))
    ARSTCharacter* SpawnedBoss;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_GamePhase, meta=(AllowPrivateAccess=true))
    ERSTGamePhase GamePhase;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTOnGambledSkullsChangedDelegate OnGambledSkullsChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTOnRiftPointsChangedDelegate OnRiftPointsChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTOnInitialRiftPointsSetDelegate OnInitialRiftPointsSet;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTOnslaughtInitializedDelegate OnOnslaughtInitialized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float PlayerRespawnDelay;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTAccoladesUpdated OnAccoladesUpdated;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AccoladeData, meta=(AllowPrivateAccess=true))
    TArray<FRSTAppliedAccoladeData> AccoladeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AccoladeDisplayCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bAccoladesLoaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FRSTGameplayScoreData> TagScoreList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOMDEndGameParameters EndGameParams;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTMissionChoiceHostDelegate OnMissionChoiceHostChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MissionChoices, meta=(AllowPrivateAccess=true))
    TArray<FRSTPlayerSelectionParameters> MissionChoices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FName PreviousLostMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 StartingMissionIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentMissionIndex, meta=(AllowPrivateAccess=true))
    int32 CurrentMissionIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SessionMissionSeed, meta=(AllowPrivateAccess=true))
    int32 SessionMissionSeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_NPEMissionIndex, meta=(AllowPrivateAccess=true))
    int32 NPEMissionIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_GrantedKeys, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer GrantedKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SelectedMissions, meta=(AllowPrivateAccess=true))
    TArray<URSTMissionDefinition*> SelectedMissions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SelectedDistortions, meta=(AllowPrivateAccess=true))
    TArray<URSTMetaDistortionDefinition*> SelectedDistortions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SelectedTeamThreads, meta=(AllowPrivateAccess=true))
    TArray<FRSTTeamThreadData> SelectedTeamThreads;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTMissionChoiceDelegate OnMissionChoiceChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    URSTMissionDefinition* CurrentMission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag GoBreakTagParent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag GoBreakTag_GameBegin;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGoBreakChanged OnGoBreakChanged;
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTBonusTrapPlacementLimitChanged OnBonusTrapPlacementLimitsChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, int32> BonusTrapPlacementLimits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BonusTrapPlacementLimitArr, meta=(AllowPrivateAccess=true))
    TArray<FRSTTrapPlacementLimitRepl> BonusTrapPlacementLimitArr;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PickupDropChanceMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PickupDropChanceAddition;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RiftPointDepleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RiftPointGained;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RiftPointProtection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RiftPointDepletedFirstTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RiftPointDepletedAdditionalEntries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RiftPointHalfPointsRemaining;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RiftPointLossRiftFailing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RiftPointLossRiftFailingPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RiftPointLossAdditionalEntriesPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnnouncerSilenceTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastAnnouncerTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bIsHotbarRandomized: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> DraftOrder;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTTeamCompositionDelegate OnTeamCompositionChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> CinematicInvulnEffect;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DifficultyData, meta=(AllowPrivateAccess=true))
    FRSTReplicatedDifficultyData ReplicatedDifficulty;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTDifficultyChangedDelegate OnDifficultyChanged;
    
public:
    ARSTGameStateBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TimedBreak(bool isTimedBreakActive);
    
    UFUNCTION(BlueprintCallable)
    void SubtractRiftPoints(ERSTRiftPointLossReason LossReason, int32 riftPointsSubtracted);
    
    UFUNCTION(BlueprintCallable)
    void SpawnPickupAtLocation(FVector LocationToSpawnAt, FGameplayTag PickupTableTag);
    
    UFUNCTION(BlueprintCallable)
    void SetTimedBreakActive(bool IsActive);
    
    UFUNCTION(BlueprintCallable)
    void SetPickupDropChanceMultiplier(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetPickupDropChanceAddition(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetGoBreakActive(bool IsActive, FGameplayTag BreakTag);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetGamePhase(ERSTGamePhase NewPhase);
    
    UFUNCTION(BlueprintCallable)
    void SetCinematicMode(bool bInCinematicMode);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SpawnPickupAtLocation(FVector LocationToSpawnAt, FGameplayTag PickupTableTag);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetPickupDropChanceMultiplier(float NewValue);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetPickupDropChanceAddition(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseSpecialTarget(AActor* Target);
    
    UFUNCTION(BlueprintCallable)
    void RegisterSpecialTarget(AActor* NewTarget);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ProcessBossDied(ARSTCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SpawnedBoss(ARSTCharacter* PreviousBoss);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SessionMissionSeed();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SelectedTeamThreads();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SelectedMissions();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SelectedDistortions();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RiftProtectedCounts(TArray<int32> OldCounts);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RiftPoints(int32 PreviousRiftPoints);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_NPEMissionIndex();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MissionChoices();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsTimedBreakActive();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_GrantedSkullsCarriedOver();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_GrantedKeys();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_GamePhase(ERSTGamePhase PreviousPhase);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_GambledSkullsCarriedOver();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_GambledSkulls();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DifficultyData();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentWave();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentMissionIndex();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BonusTrapPlacementLimitArr();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AccoladeData();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnPRSInterruptedAndFinished_GoBreak(FGameplayTag PRSTag);
    
    UFUNCTION(BlueprintCallable)
    void OnPRSBegin(FGameplayTag PRSTag);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPostGameTransitionFinished(const FGameplayTag& TransitionTag, bool bCancelled, const FGameplayTagContainer& AdditionalTags);
    
    UFUNCTION(BlueprintCallable)
    void OnPawnDefinitionChanged(ARSTPlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable)
    void OnOnslaughtCoordinatorSpawnEntity(ARSTAICharacter* AiCharacter);
    
    UFUNCTION(BlueprintCallable)
    void OnOnslaughtCoordinatorSpawnBoss(ARSTAICharacter* AiCharacter);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnLoadingScreenRemoved();
    
    UFUNCTION(BlueprintCallable)
    void OnLoadingScreenAdded();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnIntroTransitionFinished(const FGameplayTag& TransitionTag, bool bCancelled, const FGameplayTagContainer& AdditionalTags);
    
    UFUNCTION(BlueprintCallable)
    void OnAccoladeDataLoaded();
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_SetSelectedHeroes(const TArray<FGameplayTag>& SelectedHeroes);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_SetDraftOrder(const TArray<int32>& InDraftOrder);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_SetDesiredHeroes(const TArray<FGameplayTag>& DesiredHeroes);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void NetMulticast_BatchedCharacterHitGameplayCues(const TArray<FRSTCharacterHitParams>& HitParams);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_GoBreakIsActiveChanged(bool isGoBreakActive);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingSolo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGameStarted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGamePostGame() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGameEnded() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnyBreakActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitialRiftPointsSet(int32 initialRiftPointCount);
    
    UFUNCTION(BlueprintCallable)
    bool IncrementRiftProtection(TArray<ERSTRiftPointLossReason> Reasons);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasCommittedGamble() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTagContainer GetUnlockedSessionHeroes() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URSTTransitionManagerComponent* GetTransitionManagerComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalScore() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ARSTCharacter* GetSpawnedBoss() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSharedTrapPlacementLimit(FGameplayTag PlacementLimitGroup, int32& OutPlacementLimit, int32& OutExtraForHost) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetScoreIndex(FGameplayTag ScoreTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRiftPoints();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetRiftIsProtectedForReason(ERSTRiftPointLossReason Reason);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetRiftIsProtected();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPossibleTargetsInRange(const FVector& Location, float Radius, TArray<AActor*>& OutActors) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ARSTPlayerState*> GetPlayersWithHighestStatValue(const FGameplayTagContainer& InStatTags, FGameplayTag InSubStatTag, bool bRunStats) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ARSTPlayerState* GetPlayerStateByPlayerIndex(int32 PlayerIndex) const;
    
    UFUNCTION(BlueprintCallable)
    float GetPickupDropChanceMultiplier();
    
    UFUNCTION(BlueprintCallable)
    float GetPickupDropChanceAddition();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsGoBreakTag(FGameplayTag tagToCheck) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsGoBreakActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetInitialRiftPoints();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URSTGameStatePRSComponent* GetGameStatePRSComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERSTGamePhase GetGamePhase() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCostToGamble() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FRSTAppliedAccoladeData> GetAccolades() const;
    
    UFUNCTION(BlueprintCallable)
    bool DecrementRiftProtection(TArray<ERSTRiftPointLossReason> Reasons);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanSelectHero(const FGameplayTag& PotentialTag, const TArray<FGameplayTag>& SelectedHeroes, bool bIgnoreCurrentlyPending);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool CanEditHotbar() const;
    
    UFUNCTION(BlueprintCallable)
    void CalcInitialRiftPoints(int32 riftPointsInitial);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnGamePhaseChanged(ERSTGamePhase InGamePhase);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddScore(FGameplayTag ScoreTag, int32 Count, int32 Instances);
    
    UFUNCTION(BlueprintCallable)
    void AddRiftPoints(int32 riftPointsAdded);
    

    // Fix for true pure virtual functions not being implemented
};


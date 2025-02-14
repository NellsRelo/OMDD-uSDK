#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EOnslaughtSpawnLocationType.h"
#include "RSTInheritableGameplayTagPropertyMap.h"
#include "RSTPropertyModifiable.h"
#include "SpawnerInfo.h"
#include "Templates/SubclassOf.h"
#include "RSTOnslaughtCoordinator.generated.h"

class APawn;
class ARSTAICharacter;
class ARSTGameStateBase;
class UDataTable;
class URSTModifierBase;
class URSTModifierComponent;
class URSTPawnDefinition;

UCLASS(Blueprintable)
class OMD4_API ARSTOnslaughtCoordinator : public AActor, public IRSTPropertyModifiable {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSpawnEntityDelegate, ARSTAICharacter*, AiCharacter);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FRSTOnslaughtProcessInitialGameStateDelegate, ARSTGameStateBase*, GameState);
    DECLARE_DYNAMIC_DELEGATE(FRSTOnslaughtInitializeRifts);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxAICharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultWaveTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultGroupTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultEntityTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultEntitySideSpacing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultPostGoBreakTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultStartingCoin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayBetweenWisps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WispGroupSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GlobalWispCap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PerformanceWispCap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, URSTPawnDefinition*> BossUnlockMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FSpawnerInfo> SpawnerInfoMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> OnslaughtActionsActivated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnEntityDelegate OnOnslaughtCoordinatorSpawnEntity;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnEntityDelegate OnOnslaughtCoordinatorSpawnBoss;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMinionCapped;
    
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<ARSTAICharacter>> SpawnedWisps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APawn> WispClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APawn> LargeWispClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTInheritableGameplayTagPropertyMap PropertyMappings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTModifierComponent* ModifierComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOnePlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTwoPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsThreePlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFourPlusPlayers;
    
    ARSTOnslaughtCoordinator(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool SpawnEntityFromEntity(ARSTAICharacter* fromEntity, const URSTPawnDefinition* PawnDefinition, int32 numToSpawn, const FGameplayTagContainer& AdditionalGrantedTags, TArray<APawn*>& outSpawned);
    
    UFUNCTION(BlueprintCallable)
    bool SpawnEntityForEntity(ARSTAICharacter* ControllingCharacter, FVector positionToSpawn, FRotator rotationToSpawn, const URSTPawnDefinition* PawnDefinition, int32 numToSpawn, bool bMarkAsResurrected, const FGameplayTagContainer& AdditionalGrantedTags, TArray<APawn*>& outSpawned);
    
    UFUNCTION(BlueprintCallable)
    bool SpawnEntityAtTransform(FVector SpawnLoc, FRotator SpawnRot, const URSTPawnDefinition* PawnDefinition, int32 numToSpawn, const FGameplayTagContainer& AdditionalGrantedTags, TArray<APawn*>& outSpawned);
    
    UFUNCTION(BlueprintCallable)
    void SetAllAICharactersClass(const URSTPawnDefinition* PawnDefinition);
    
    UFUNCTION(BlueprintCallable)
    void SetAllAICharactersAmount(int32 amountPerSpawn);
    
    UFUNCTION(BlueprintCallable)
    void ResetOnslaught();
    
    UFUNCTION(BlueprintCallable)
    void RemoveWisp(ARSTAICharacter* Wisp, bool bAlsoDestroy);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PreWave(int32 WaveNumber, int32 SpawnerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PostWave(int32 WaveNumber, int32 SpawnerIndex);
    
    UFUNCTION(BlueprintCallable)
    void PawnHasDied(APawn* deadPawn);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnWispSpawnTimer();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnslaughtWaveBreak(float waveBreakTimer, bool onePlayer, bool twoPlayer, bool threePlayer, bool fourPlusPlayers);
    
    UFUNCTION(BlueprintCallable)
    void OnslaughtStartGroup(float waitUntilPreviousGroupDeadPercent);
    
    UFUNCTION(BlueprintCallable)
    void OnslaughtSpawnEntitiesBiome(UDataTable* BiomeDefinition, bool SpawnWithShield, EOnslaughtSpawnLocationType SpawnLocationType, bool onePlayer, bool twoPlayer, bool threePlayer, bool fourPlusPlayers);
    
    UFUNCTION(BlueprintCallable)
    void OnslaughtSpawnEntities(const URSTPawnDefinition* PawnDefinition, int32 Count, bool SpawnWithShield, EOnslaughtSpawnLocationType SpawnLocationType, bool onePlayer, bool twoPlayer, bool threePlayer, bool fourPlusPlayers);
    
    UFUNCTION(BlueprintCallable)
    void OnslaughtSpawnBoss(const URSTPawnDefinition* PawnDefinition, EOnslaughtSpawnLocationType SpawnLocationType);
    
    UFUNCTION(BlueprintCallable)
    void OnslaughtGoBreak(FGameplayTag BreakTag, bool onePlayer, bool twoPlayer, bool threePlayer, bool fourPlusPlayers);
    
    UFUNCTION(BlueprintCallable)
    void OnslaughtGiveCoin(int32 amount, bool bInitialGrant, bool onePlayer, bool twoPlayer, bool threePlayer, bool fourPlusPlayers);
    
    UFUNCTION(BlueprintCallable)
    void OnslaughtEnd();
    
    UFUNCTION(BlueprintCallable)
    void OnslaughtDelayUntilAction(const FString& delayActionName, bool onePlayer, bool twoPlayers, bool threePlayers, bool fourPlusPlayers);
    
    UFUNCTION(BlueprintCallable)
    void OnslaughtDelay(float Delay, bool onePlayer, bool twoPlayer, bool threePlayer, bool fourPlusPlayers);
    
    UFUNCTION(BlueprintCallable)
    void OnslaughtAction(const FString& ActionName, bool onePlayer, bool twoPlayer, bool threePlayer, bool fourPlusPlayers);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Onslaught_Start(int32 WaveNumber, int32 SpawnerIndex);
    
    UFUNCTION(BlueprintCallable)
    bool IsOnslaughtActive();
    
    UFUNCTION(BlueprintCallable)
    bool IsLastPawnStanding(AActor* TestPawn, const FGameplayTagContainer& ExcludeOtherTags);
    
    UFUNCTION(BlueprintCallable)
    bool GetShowAIHud();
    
    UFUNCTION(BlueprintCallable)
    int32 GetNumPawnsWaitingForSpawn();
    
    UFUNCTION(BlueprintCallable)
    int32 GetNumPawnsApprovedForSpawn();
    
    UFUNCTION(BlueprintCallable)
    int32 GetNumPawnsAlive();
    
    UFUNCTION(BlueprintCallable)
    int32 GetMaxAICharacters();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<APawn*> GetAllPawnsWithTags(const FGameplayTagContainer& TargetIncludeFilterTags, bool bTargetIncludeAnyFilterTags, const FGameplayTagContainer& TargetIgnoreFilterTags);
    
    UFUNCTION(BlueprintCallable)
    TArray<APawn*> GetAllPawns();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DoOnslaughtAction(const FString& ActionName);
    
    UFUNCTION(BlueprintCallable)
    void ClearOnslaught();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CheckOnslaughtModifiersCompleted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CheckOnslaughtModifier(const URSTModifierBase* modifier);
    
    UFUNCTION(BlueprintCallable)
    void BroadcastEntitySpawn(ARSTAICharacter* spawnedEntity);
    
    UFUNCTION(BlueprintCallable)
    void BroadcastBossSpawn(ARSTAICharacter* spawnedEntity);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ShowBreakableObjectsChanged(bool bShowBreakableObjects);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddDistortionEnemies(const URSTPawnDefinition* PawnDefinition, int32 numToAdd, EOnslaughtSpawnLocationType SpawnLocationType, float chanceToSpawn);
    

    // Fix for true pure virtual functions not being implemented
};


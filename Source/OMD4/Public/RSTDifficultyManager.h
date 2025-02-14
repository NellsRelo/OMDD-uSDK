#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "RSTDifficultyManager.generated.h"

UCLASS(Blueprintable)
class OMD4_API URSTDifficultyManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RiftPointsCarryover;
    
public:
    URSTDifficultyManager();

    UFUNCTION(BlueprintCallable)
    static void ShowDifficulty();
    
    UFUNCTION(BlueprintCallable)
    void SetRiftPointsCarryover(int32 NewRiftPointsCarryover);
    
    UFUNCTION(BlueprintCallable)
    void SetNumPlayersDifficulty(int32 numPlayersDifficulty);
    
    UFUNCTION(BlueprintCallable)
    void SetInitialDifficulty(int32 InitialDifficulty);
    
    UFUNCTION(BlueprintCallable)
    static void SetGameDifficulty(int32 GameDifficulty);
    
    UFUNCTION(BlueprintCallable)
    static void SetDebugNumPlayersDifficulty(int32 numPlayersDifficulty);
    
    UFUNCTION(BlueprintCallable)
    static void SetDebugGameDifficulty(int32 GameDifficulty);
    
    UFUNCTION(BlueprintCallable)
    static bool IsNumPlayersDifficultySet(bool onePlayer, bool twoPlayers, bool threePlayers, bool fourPlusPlayers);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRiftPointsCarryover();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetNumPlayersDifficulty();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetInitialDifficulty();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetGameDifficulty();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetDifficulty();
    
    UFUNCTION(BlueprintCallable)
    void CalcGameDifficulty();
    
};


#pragma once
#include "CoreMinimal.h"
#include "GauntletTestController.h"
#include "RSTGauntletController.generated.h"

class URSTMetaDistortionDefinition;

UCLASS(Blueprintable, Config=Game)
class OMD4_API URSTGauntletController : public UGauntletTestController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> missionsToTest;
    
public:
    // URSTGauntletController();

private:
    UFUNCTION(BlueprintCallable)
    void StopTesting();
    
    UFUNCTION(BlueprintCallable)
    void StopProfiling();
    
    UFUNCTION(BlueprintCallable)
    void StartTesting();
    
    UFUNCTION(BlueprintCallable)
    void StartProfiling();
    
    UFUNCTION(BlueprintCallable)
    void PlayerActionsOncePerLevel();
    
    UFUNCTION(BlueprintCallable)
    void PlayerActions(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void OnCurrentWaveChanged();
    
    UFUNCTION(BlueprintCallable)
    void NextWave();
    
    UFUNCTION(BlueprintCallable)
    void LaunchMissionFromCmdLine();
    
    UFUNCTION(BlueprintCallable)
    void LaunchMission();
    
    UFUNCTION(BlueprintCallable)
    void GoToWave(int32 waveNum);
    
    UFUNCTION(BlueprintCallable)
    void ApplyDistortion(URSTMetaDistortionDefinition* Distortion);
    
    UFUNCTION(BlueprintCallable)
    void AddRandomDistortions();
    
};


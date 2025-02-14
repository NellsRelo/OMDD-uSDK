#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "GameplayTagContainer.h"
#include "RSTTrackMovePointsDelegateDelegate.h"
#include "RSTVectorArray.h"
#include "RSTAbilityTask_TrackMovePoints.generated.h"

class UGameplayAbility;
class URSTAbilityTask_TrackMovePoints;

UCLASS(Blueprintable)
class OMD4_API URSTAbilityTask_TrackMovePoints : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTTrackMovePointsDelegate OnRecordingStopped;
    
    URSTAbilityTask_TrackMovePoints();

    UFUNCTION(BlueprintCallable)
    static URSTAbilityTask_TrackMovePoints* TrackMovePoints(UGameplayAbility* OwningAbility, float Frequency, float MoveThreshold, FVector RelativeLocationOffset, FGameplayTag CueDataTag);
    
    UFUNCTION(BlueprintCallable)
    void StopRecording(bool bLogCurrent);
    
    UFUNCTION(BlueprintCallable)
    void ResumeRecording();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRecording() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FRSTVectorArray> GetMoveLocations() const;
    
};


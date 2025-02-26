#pragma once
#include "CoreMinimal.h"
#include "AIController.h"
#include "UObject/NoExportTypes.h"
#include "Engine/LatentActionManager.h"
#include "AI/Navigation/PathFollowingAgentInterface.h"
#include "ENavMoveResult.h"
#include "NavPowerAIController.generated.h"

class AActor;
class UObject;

UCLASS(Blueprintable)
class NAVPOWER_API ANavPowerAIController : public AAIController, public IPathFollowingAgentInterface {
    GENERATED_BODY()
public:
    ANavPowerAIController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetUses3DMovement(bool b3DMovement);
    
    UFUNCTION(BlueprintCallable)
    bool SetTurnInPlaceSpeed(float NewRotSpeed);
    
    UFUNCTION()
    bool SetRepulsorID(uint32 repulsorID);
    
    UFUNCTION(BlueprintCallable)
    bool SetRepulsorBulk(float newBulk);
    
    UFUNCTION()
    bool SetRepulsorBlockageFlags(uint32 repulsorFlags);
    
    UFUNCTION(BlueprintCallable)
    bool SetRepulsorAllowedPushDistance(float allowedDistance);
    
    UFUNCTION(BlueprintCallable)
    bool SetRepulsorAccelerationParams(float InitialAccel, float outerAccel, float innerAccel);
    
    UFUNCTION(BlueprintCallable)
    void SetNoMover(bool bSetNoMover);
    
    UFUNCTION()
    void SetNavPowerObstructionFlags(uint32 NewFlags);
    
    UFUNCTION(BlueprintCallable)
    void SetNavMoverFlockID(int32 flockID);
    
    UFUNCTION(BlueprintCallable)
    bool SetMaxSpeedFraction(float speedFraction);
    
    UFUNCTION(BlueprintCallable)
    bool SetIdleParms(float tetherDist, float returnHomeDist, float returnDelay, bool bIgnoreInitialOverlaps);
    
    UFUNCTION(BlueprintCallable)
    bool ResetTurnInPlaceSpeed();
    
    UFUNCTION(BlueprintCallable)
    void PauseNavMover(bool DisableRepulsor, bool bAllowOrient);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    void NavPowerMoveTo(UObject* WorldContextObject, FLatentActionInfo LatentInfo, AActor* GoalActor, FVector GoalLocation, float desiredStopDistance, bool bStopAtGoal, bool bPushThroughCrowdAtGoal, float allowedToStopDistance, bool bOrientAtGoal, FVector OrientAtGoalDirection, ENavMoveResult& moveResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUses3DMovement() const;
    
    UFUNCTION()
    uint32 GetRepulsorID();
    
    UFUNCTION(BlueprintCallable)
    float GetRepulsorBulk();
    
    UFUNCTION(BlueprintCallable)
    bool GetNoMover() const;
    
    UFUNCTION()
    uint32 GetNavPowerObstructionFlags() const;
    
    UFUNCTION(BlueprintCallable)
    FVector GetMoverVelocity();
    
    UFUNCTION(BlueprintCallable)
    float GetMoverSpeed();
    
    UFUNCTION(BlueprintCallable)
    float GetMoverRadius(bool bIncludeInnerCushion, bool bIncludeOuterCushion);
    
    UFUNCTION(BlueprintCallable)
    FVector GetMoverLoc();
    
    UFUNCTION(BlueprintCallable)
    bool AdjustRepulsor(float innerScalar, float outerScalar);
    

    // Fix for true pure virtual functions not being implemented
};


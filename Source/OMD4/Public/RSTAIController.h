#pragma once
#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "NavPowerAIController.h"
#include "ERSTEnemyState.h"
#include "ERSTEnemyTimer.h"
#include "ERSTThreatGroup.h"
#include "OnRSTTeamIndexChangedDelegateDelegate.h"
#include "RSTRange.h"
#include "RSTTeamAgentInterface.h"
#include "Templates/SubclassOf.h"
#include "RSTAIController.generated.h"

class AActor;
class UBehaviorTree;
class UGameplayEffect;

UCLASS(Blueprintable)
class OMD4_API ARSTAIController : public ANavPowerAIController, public IRSTTeamAgentInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGenericTeamId MyTeamID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRSTTeamIndexChangedDelegate OnTeamChangedDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERSTEnemyState CurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERSTEnemyState PreviousState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UBehaviorTree> AIBehavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> RunMoveEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SightRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERSTThreatGroup MyThreatGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GuardianRoamRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlackboardEnemyStateKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlackboardSightRadiusKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlackboardSpawnDurationKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlackboardCurrentTargetKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlackboardMinAbilityRangeKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlackboardMaxAbilityRangeKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlackboardAttackAbilityChangedKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlackboardWaitingOnAttackLocKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlackboardInCombatKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlackboardLastKnownTargetLocKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlackboardHaveLOSKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlackboardDefaultMoveRadiusKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlackboardOrientToTargetKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlackboardRiftPointKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlackboardCurrentPathPointKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlackboardCurrentPathPointRadiusKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlackboardIsLeashingKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlackboardGuardLocKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlackboardGuardRotKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlackboardGuardianRoamRadiusKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlackboardGuardianMasterKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlackboardFollowRadiusKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlackboardStuckTimeoutKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlackboardIsStuckKey;
    
public:
    ARSTAIController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void UpdatePathNodeCosts();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void UpdateNodeNetwork();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool UpdateCurrentNode();
    
    UFUNCTION(BlueprintCallable)
    void SuspendAI(bool bResetThreatList);
    
    UFUNCTION(BlueprintCallable)
    void StartAITimer(ERSTEnemyTimer TimerUse);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetRunning(bool bRunning);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetIsResting(bool bNewResting);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetIsLeashing(bool bNewLeashing);
    
    UFUNCTION(BlueprintCallable)
    void SetInteractingTag(bool bIsInteracting);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetInCombat(bool NewCombat);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentState(ERSTEnemyState NewState, AActor* InstigatorActor);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    FTransform SelectRandomLocation();
    
    UFUNCTION(BlueprintCallable)
    void ResumeAI(bool bResetPathNode);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ReachedCurrentNode();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSenseActors(const TArray<AActor*>& UpdatedActors);
    
    UFUNCTION(BlueprintCallable)
    void OnRevived(AActor* OwningActor, const AActor* InInstigator);
    
    UFUNCTION(BlueprintCallable)
    void OnObstructionsUpdated(AActor* OwningActor, bool bAdded);
    
    UFUNCTION(BlueprintCallable)
    void OnGoBreakChanged(bool bIsGoBreakActive);
    
    UFUNCTION(BlueprintCallable)
    void OnDowned(AActor* OwningActor, const AActor* InInstigator);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void OnAIDeath();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool IsCurrentTargetInAbilityRange();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool IsCurrentAbilityRanged() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool IsBlockedToNode();
    
protected:
    UFUNCTION(BlueprintCallable)
    bool InitAIParms();
    
    UFUNCTION(BlueprintCallable)
    void HandleThreatEvaluation();
    
    UFUNCTION(BlueprintCallable)
    void HandleStuckTimer();
    
    UFUNCTION(BlueprintCallable)
    void HandleAITimer();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    ERSTThreatGroup GetThreatGroup();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSightRadius();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    FVector GetLastKnownTargetLoc() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool GetIsRunning() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool GetIsResting();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool GetIsLeashing() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool GetIsInteracting();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool GetInCombat() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool GetHasBeenAssignedMaster();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    FRotator GetGuardRot();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    FVector GetGuardLoc();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    AActor* GetGuardianMaster();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    float GetFollowRadius();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    AActor* GetCurrentTarget() const;
    
    UFUNCTION(BlueprintCallable)
    ERSTEnemyState GetCurrentState();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    FRSTRange GetCurrentAbilityRange() const;
    
    UFUNCTION(BlueprintCallable)
    float GetAITimerRemaining();
    
    UFUNCTION(BlueprintCallable)
    float GetAITimerDuration(ERSTEnemyTimer TimerUse);
    
protected:
    UFUNCTION(BlueprintCallable)
    void EvaluateThreatList();
    
    UFUNCTION(BlueprintCallable)
    bool EvaluateTargetlessAbilities();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool DidLastTargetDie() const;
    
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ConfigureSenses();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool CheckRoamingDistance();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool CheckFollowDistance();
    
    UFUNCTION(BlueprintCallable)
    void CancelAITimer();
    
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool ActivateSpawnAbility();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool ActivateReviveAbility();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool ActivateInteractResponseAbility(bool bIsBeginningInteraction, AActor* InstigatorActor);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool ActivateCurrentAttackAbility(bool bEnforceRangeCheck);
    
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool ActivateAggroAbility();
    

    // Fix for true pure virtual functions not being implemented
};


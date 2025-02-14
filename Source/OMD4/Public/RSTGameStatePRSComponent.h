#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "GameplayTagContainer.h"
#include "RSTGameStateComponent.h"
#include "RSTGameStatePRSComponent.generated.h"

class APlayerState;
class URSTPlayerReadySync;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OMD4_API URSTGameStatePRSComponent : public URSTGameStateComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRSTGameStatePRSTag, FGameplayTag, PRSTag);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FRSTGameStatePRSPlayerReadyState, FGameplayTag, PRSTag, FUniqueNetIdRepl, PlayerNetID, bool, bIsReady);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PRSCollection, meta=(AllowPrivateAccess=true))
    TArray<URSTPlayerReadySync*> PRSCollection;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTGameStatePRSTag OnBegin;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTGameStatePRSTag OnDataRetrieved;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTGameStatePRSTag OnTimerStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTGameStatePRSTag OnTimerShortStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTGameStatePRSTag OnInterrupt;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTGameStatePRSTag OnComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTGameStatePRSTag OnInterruptOrComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTGameStatePRSPlayerReadyState OnPlayerReadyStateChanged;
    
    URSTGameStatePRSComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    bool StopPlayerReadySync(FGameplayTag PRSTag, int32 StopPriority);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PRSCollection();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerStateRemovedCallback(APlayerState* PlayerStateRemoved);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerStateAddedCallback(APlayerState* PlayerStateAdded);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_OnPRSTimerStart(FGameplayTag PRSTag);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_OnPRSTimerShortStart(FGameplayTag PRSTag);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_OnPRSTimerComplete(FGameplayTag PRSTag);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_OnPRSPlayerReadyStateChanged(FGameplayTag PRSTag, FUniqueNetIdRepl PlayerNetID, bool bIsReady);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_OnPRSInterruptOrComplete(FGameplayTag PRSTag);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_OnPRSInterrupt(FGameplayTag PRSTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeRemainingForTag(FGameplayTag ToCheck) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSyncCountForTag(FGameplayTag ToCheck);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumPlayersReadyForTag(FGameplayTag ToCheck);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsSyncActiveForTag(FGameplayTag ToCheck, bool bUseExactMatch);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsInShortTimerForTag(FGameplayTag ToCheck);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DidTimerBeginForTag(FGameplayTag ToCheck) const;
    
    UFUNCTION(BlueprintCallable)
    bool BeginNewPlayerReadySync(FGameplayTag PRSTag, int32 SyncPriority);
    
};


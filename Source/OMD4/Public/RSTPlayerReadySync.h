#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameFramework/OnlineReplStructs.h"
#include "GameplayTagContainer.h"
#include "RSTPlayerReadySync.generated.h"

class URSTGameStatePRSComponent;
class URSTPlayerReadySyncData;

UCLASS(Blueprintable)
class OMD4_API URSTPlayerReadySync : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PRSTag, meta=(AllowPrivateAccess=true))
    FGameplayTag PRSTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URSTPlayerReadySyncData* CurrentData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float ServerTime_Begin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float ServerTime_TimerStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float ServerTime_TimerEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bTimerHasBegun;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FUniqueNetIdRepl> ReadyPlayerCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Replicated, meta=(AllowPrivateAccess=true))
    URSTGameStatePRSComponent* GameStatePRSComponent;
    
    URSTPlayerReadySync();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void OnRep_PRSTag();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeRemaining();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumPlayersReady();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsInShortTimer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAreMajorityOfPlayersReady();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAreAllPlayersReady();
    
};


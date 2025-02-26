#pragma once
#include "CoreMinimal.h"
#include "GameplayCueNotifyTypes.h"
#include "GameplayCueNotifyTypes.h"
#include "RSTWeaponCueNotify_Looping.h"
#include "RSTFirePointCueNotify_Looping.generated.h"

UCLASS(Blueprintable)
class OMD4_API ARSTFirePointCueNotify_Looping : public ARSTWeaponCueNotify_Looping {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayCueNotify_ParticleInfo> ApplicationFirePointParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayCueNotify_ParticleInfo> LoopingFirePointParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayCueNotify_ParticleInfo> RecurringFirePointParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayCueNotify_ParticleInfo> RemovalFirePointParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayCueNotify_SpawnResult ApplicationFirePointSpawnResults;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayCueNotify_SpawnResult LoopingFirePointSpawnResults;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayCueNotify_SpawnResult RecurringFirePointSpawnResults;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayCueNotify_SpawnResult RemovalFirePointSpawnResults;
    
public:
    // ARSTFirePointCueNotify_Looping(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnRemovalFirePointProcessed(const FGameplayCueNotify_SpawnResult& SpawnResults);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnRecurringFirePointProcessed(const FGameplayCueNotify_SpawnResult& SpawnResults);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnLoopingFirePointProcessed(const FGameplayCueNotify_SpawnResult& SpawnResults);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnApplicationFirePointProcessed(const FGameplayCueNotify_SpawnResult& SpawnResults);
    
};


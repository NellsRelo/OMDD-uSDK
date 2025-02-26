#pragma once
#include "CoreMinimal.h"
#include "GameplayCueNotifyTypes.h"
#include "GameplayCueNotifyTypes.h"
#include "RSTWeaponCueNotify_Burst.h"
#include "RSTFirePointCueNotify_Burst.generated.h"

UCLASS(Blueprintable)
class OMD4_API URSTFirePointCueNotify_Burst : public URSTWeaponCueNotify_Burst {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayCueNotify_ParticleInfo> BurstFirePointParticles;
    
public:
    URSTFirePointCueNotify_Burst();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnBurstFirePointProcessed(const FGameplayCueNotify_SpawnResult& SpawnResults) const;
    
};


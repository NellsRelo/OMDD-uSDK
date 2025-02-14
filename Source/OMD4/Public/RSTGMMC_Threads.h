#pragma once
#include "CoreMinimal.h"
#include "GameplayEffect.h"
#include "GameplayModMagnitudeCalculation.h"
#include "RSTGMMC_Threads.generated.h"

class URSTSessionMissionSubsystem;

UCLASS(Blueprintable)
class OMD4_API URSTGMMC_Threads : public UGameplayModMagnitudeCalculation {
    GENERATED_BODY()
public:
    URSTGMMC_Threads();

private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URSTSessionMissionSubsystem* GetSessionMissionSubsystem(const FGameplayEffectSpec& Spec) const;
    
};


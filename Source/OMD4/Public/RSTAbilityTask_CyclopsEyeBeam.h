#pragma once
#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "CyclopsEyeBeamReadyToFireDelegateDelegate.h"
#include "RSTAbilityTask_CyclopsEyeBeam.generated.h"

class AActor;
class UGameplayAbility;
class URSTAbilityTask_CyclopsEyeBeam;

UCLASS(Blueprintable)
class OMD4_API URSTAbilityTask_CyclopsEyeBeam : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCyclopsEyeBeamReadyToFireDelegate OnReadyToFire;
    
    URSTAbilityTask_CyclopsEyeBeam();

    UFUNCTION(BlueprintCallable)
    static URSTAbilityTask_CyclopsEyeBeam* RSTCyclopsEyeBeam(UGameplayAbility* OwningAbility, FName TaskInstanceName, FName SourceSocketName, AActor* DestActor, float PeriodLength, float RotationRate, bool ShowDebug);
    
};


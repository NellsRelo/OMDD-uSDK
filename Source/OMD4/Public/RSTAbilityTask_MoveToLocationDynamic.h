#pragma once
#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "RSTDynamicLocationLocationReachedDelegate.h"
#include "RSTDynamicLocationTaskDelegateDelegate.h"
#include "RSTAbilityTask_MoveToLocationDynamic.generated.h"

class AActor;
class UGameplayAbility;
class URSTAbilityTask_MoveToLocationDynamic;

UCLASS(Blueprintable)
class OMD4_API URSTAbilityTask_MoveToLocationDynamic : public UAbilityTask {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTDynamicLocationLocationReached OnLocationReached;
    
public:
    URSTAbilityTask_MoveToLocationDynamic();

    UFUNCTION(BlueprintCallable)
    static URSTAbilityTask_MoveToLocationDynamic* MoveToLocationDynamic(UGameplayAbility* OwningAbility, AActor* MovingActor, const FRSTDynamicLocationTaskDelegate& LocationDelegate, float Speed, float MaxDistance, bool bRelativeLocation, bool bEndTaskOnReached, float CallbackTolerance);
    
};


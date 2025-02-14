#pragma once
#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "RSTAbilityTask_WaitActorAlive.generated.h"

class AActor;
class UGameplayAbility;
class URSTAbilityTask_WaitActorAlive;

UCLASS(Blueprintable)
class OMD4_API URSTAbilityTask_WaitActorAlive : public UAbilityTask {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnFinishedDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnActorDiedDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActorDiedDelegate OnActorDied;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFinishedDelegate OnFinished;
    
    URSTAbilityTask_WaitActorAlive();

    UFUNCTION(BlueprintCallable)
    static URSTAbilityTask_WaitActorAlive* RSTWaitActorAlive(UGameplayAbility* OwningAbility, FName TaskInstanceName, float Duration, bool bRequireLOS, AActor* TargetActor);
    
};


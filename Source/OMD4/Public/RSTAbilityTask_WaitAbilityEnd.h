#pragma once
#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "WaitAbilityEndDelegateDelegate.h"
#include "RSTAbilityTask_WaitAbilityEnd.generated.h"

class UGameplayAbility;
class URSTAbilityTask_WaitAbilityEnd;

UCLASS(Blueprintable)
class OMD4_API URSTAbilityTask_WaitAbilityEnd : public UAbilityTask {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaitAbilityEndDelegate OnEnded;
    
public:
    URSTAbilityTask_WaitAbilityEnd();

private:
    UFUNCTION(BlueprintCallable)
    static URSTAbilityTask_WaitAbilityEnd* WaitForAbilityEnd_Query(UGameplayAbility* OwningAbility, FGameplayTagQuery Query, bool TriggerOnce);
    
    UFUNCTION(BlueprintCallable)
    static URSTAbilityTask_WaitAbilityEnd* WaitForAbilityEnd(UGameplayAbility* OwningAbility, FGameplayTag WithTag, FGameplayTag WithoutTage, bool TriggerOnce);
    
    UFUNCTION(BlueprintCallable)
    void OnAbilityEnded(UGameplayAbility* EndedAbility);
    
};


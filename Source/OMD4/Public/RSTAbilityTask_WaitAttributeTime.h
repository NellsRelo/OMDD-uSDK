#pragma once
#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "AttributeSet.h"
#include "RSTAbilityTask_WaitAttributeTime.generated.h"

class UGameplayAbility;
class URSTAbilityTask_WaitAttributeTime;

UCLASS(Blueprintable)
class OMD4_API URSTAbilityTask_WaitAttributeTime : public UAbilityTask {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FRSTWaitAttributeTimeFinished);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTWaitAttributeTimeFinished OnFinished;
    
    URSTAbilityTask_WaitAttributeTime();

    UFUNCTION(BlueprintCallable)
    static URSTAbilityTask_WaitAttributeTime* WaitAttributeTime(UGameplayAbility* OwningAbility, FGameplayAttribute Attribute);
    
    UFUNCTION(BlueprintCallable)
    void DeductTime(float TimeToDeduct);
    
};


#pragma once
#include "CoreMinimal.h"
#include "RSTGameplayAbility.h"
#include "RSTGameplayAbility_TrapPlacement.generated.h"

class UAbilityTask_WaitInputPress;
class UAbilityTask_WaitInputRelease;

UCLASS(Blueprintable)
class OMD4_API URSTGameplayAbility_TrapPlacement : public URSTGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAbilityTask_WaitInputPress* InputWaitTaskHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAbilityTask_WaitInputRelease* InputReleaseWaitTaskHandle;
    
public:
    URSTGameplayAbility_TrapPlacement();

protected:
    UFUNCTION(BlueprintCallable)
    void OnInputReleased(float Duration);
    
    UFUNCTION(BlueprintCallable)
    void OnInputPressed(float Duration);
    
};


#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "GameplayAbilitySpecHandle.h"
#include "GameplayTagContainer.h"
#include "RSTGameplayAbility.h"
#include "RSTGameplayAbility_ManagedInput.generated.h"

class UAbilityTask_WaitInputPress;
class UAbilityTask_WaitInputRelease;

UCLASS(Blueprintable)
class OMD4_API URSTGameplayAbility_ManagedInput : public URSTGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ControlledAbilityTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNotifyAbilitiesOfCancellation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FGameplayAbilitySpecHandle> ControlledSpecHandles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAbilityTask_WaitInputPress* InputPressTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAbilityTask_WaitInputRelease* InputReleaseTask;
    
public:
    URSTGameplayAbility_ManagedInput();

protected:
    UFUNCTION(BlueprintCallable)
    void OnInputReleased(float Duration);
    
    UFUNCTION(BlueprintCallable)
    void OnInputPressed(float Duration);
    
    UFUNCTION(BlueprintCallable)
    void OnAbilityEndedCallback(const FAbilityEndedData& AbilityData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ProcessInputReleased();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ProcessInputPressed();
    
};


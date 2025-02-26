#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "RSTTrackCharacterInputDelegateDelegate.h"
#include "RSTAbilityTask_TrackCharacterInput.generated.h"

class UGameplayAbility;
class URSTAbilityTask_TrackCharacterInput;

UCLASS(Blueprintable)
class OMD4_API URSTAbilityTask_TrackCharacterInput : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTTrackCharacterInputDelegate OnInputDetected;
    
    URSTAbilityTask_TrackCharacterInput();

    UFUNCTION(BlueprintCallable)
    static URSTAbilityTask_TrackCharacterInput* TrackCharacterInput(UGameplayAbility* OwningAbility, bool bTerminateOnDetection, bool bGatherInputOnly, float Threshold);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasMovementInput();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetMovementInput();
    
};


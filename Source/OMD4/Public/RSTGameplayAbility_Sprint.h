#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RSTGameplayAbility.h"
#include "Templates/SubclassOf.h"
#include "RSTGameplayAbility_Sprint.generated.h"

class UAbilityTask_WaitInputPress;
class UAbilityTask_WaitInputRelease;
class UGameplayEffect;
class URSTAbilityTask_TrackMoveAngle;
class URSTAbilityTask_TrackMoveSpeed;

UCLASS(Blueprintable)
class OMD4_API URSTGameplayAbility_Sprint : public URSTGameplayAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> SprintEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SprintingForwardAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinRequiredSpeedThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ForwardTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SetByCallerSpeed;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsSprintToggle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URSTAbilityTask_TrackMoveAngle* MoveForwardTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URSTAbilityTask_TrackMoveSpeed* SpeedThresholdTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAbilityTask_WaitInputPress* PressTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAbilityTask_WaitInputRelease* ReleaseTask;
    
public:
    URSTGameplayAbility_Sprint();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldHoldToSprint() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnWithinForwardThreshold();
    
    UFUNCTION(BlueprintCallable)
    void OnOutsideForwardThreshold();
    
    UFUNCTION(BlueprintCallable)
    void OnInputReleased(float Duration);
    
    UFUNCTION(BlueprintCallable)
    void OnInputPressed(float Duration);
    
    UFUNCTION(BlueprintCallable)
    void OnBelowSpeedThreshold(float Speed);
    
};


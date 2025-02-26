#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Engine/HitResult.h"
#include "GameplayTagContainer.h"
#include "RSTGameplayAbility.h"
#include "RSTWheelOptionData.h"
#include "RSTGameplayAbility_WheelBase.generated.h"

class UAbilityTask_WaitAbilityCommit;
class UAbilityTask_WaitDelay;
class UAbilityTask_WaitInputRelease;
class UCommonActivatableWidget;
class UGameplayAbility;

UCLASS(Blueprintable)
class OMD4_API URSTGameplayAbility_WheelBase : public URSTGameplayAbility {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnWheelVisibilitySet);
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWheelVisibilitySet OnShowWheel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowTraceLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UCommonActivatableWidget> WidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WheelHoldTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> TraceChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CancelWithTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CancelWithoutTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAbilityTask_WaitInputRelease* InputReleaseTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAbilityTask_WaitAbilityCommit* AbilityCommitTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAbilityTask_WaitDelay* ShowWheelTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FHitResult CachedHitResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentIndex;
    
public:
    URSTGameplayAbility_WheelBase();

protected:
    UFUNCTION(BlueprintCallable)
    void OnShowWheelTask();
    
    UFUNCTION(BlueprintCallable)
    void OnInputReleased(float Duration);
    
    UFUNCTION(BlueprintCallable)
    void OnCancelAbilityCommit(UGameplayAbility* ActivatedAbility);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FRSTWheelOptionData> GetWheelOptions() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetShouldShowTraceLine();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnInputReleased(int32 ReleasedIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_InitializeWheelWidget(UCommonActivatableWidget* Widget);
    
};


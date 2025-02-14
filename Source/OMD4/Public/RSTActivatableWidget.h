#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "Engine/EngineBaseTypes.h"
#include "ERSTActivatableWidgetShowState.h"
#include "ERSTWidgetInputMode.h"
#include "OnWidgetRemovedDelegate.h"
#include "RSTActivatableWidget.generated.h"

class UInputAction;
class UWidget;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class OMD4_API URSTActivatableWidget : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE(FRSTWidgetInputActionDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWidgetRemoved OnWidgetRemoved;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisplayShowAnimationOnActivation;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERSTActivatableWidgetShowState ShowState;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPopOnUnpossess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAddIMCOnPossess;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAreInteractablesEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsNPEHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyNPEIMCOnNPEStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyNPEIMCOnPossess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNPEIsActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentNPEStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTabMenuHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanToggleTabWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanToggleUIMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFlushPressedKeysOnInputModeChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERSTWidgetInputMode InputConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMouseCaptureMode GameMouseCaptureMode;
    
public:
    URSTActivatableWidget();

    UFUNCTION(BlueprintCallable)
    void UnregisterInputAction(const UInputAction* Action);
    
protected:
    UFUNCTION(BlueprintCallable)
    void StartNPE();
    
    UFUNCTION(BlueprintCallable)
    bool ShouldStartNPE();
    
    UFUNCTION(BlueprintCallable)
    void SetNPEStep(int32 Step);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetInteractableInternals(bool Enabled);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ReregisterMappingContext();
    
public:
    UFUNCTION(BlueprintCallable)
    void RegisterInputAction(const UInputAction* Action, const URSTActivatableWidget::FRSTWidgetInputActionDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    void PopSelfFromLayer(bool bBypassAnimations);
    
    UFUNCTION(BlueprintCallable)
    void OnUnPossess();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSetInteractableInternals(bool Enabled);
    
    UFUNCTION(BlueprintCallable)
    void OnPossess();
    
protected:
    UFUNCTION(BlueprintCallable)
    void IncreaseNPEStep();
    
    UFUNCTION(BlueprintCallable)
    void HandleToggleTabWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UWidget* GetScrollRecipient();
    
    UFUNCTION(BlueprintCallable)
    void EndNPE();
    
    UFUNCTION(BlueprintCallable)
    void DecreaseNPEStep();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanToggleTabWidget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanToggleCursorMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SynchronizeProperties();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_StartNPE();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool BP_ShouldStartNPE();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnUnPossess();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnStartShow();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnStartHide();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnPossess();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnNPEStepExited(int32 Step);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnNPEStepEntered(int32 Step);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnNPEStepChanged(int32 OldStep, int32 NewStep);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnFinishShow();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnFinishHide();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_HandleTabForwardAction();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_HandleTabBackwardAction();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UWidgetAnimation* BP_GetOnShowAnimation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UWidgetAnimation* BP_GetOnHideAnimation() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 BP_GetNPEStepsNum();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_EndNPE();
    
};


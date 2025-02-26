#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "RSTUserWidget.generated.h"

class UInputAction;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class OMD4_API URSTUserWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE(FRSTWidgetInputActionDelegate);
    
    URSTUserWidget();

    UFUNCTION(BlueprintCallable)
    void RemoveFromParentPostAnimation();
    
    UFUNCTION(BlueprintCallable)
    void RegisterInputAction(const UInputAction* Action, const URSTUserWidget::FRSTWidgetInputActionDelegate& Delegate);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SynchronizeProperties();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UWidgetAnimation* BP_GetOnShowAnimation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UWidgetAnimation* BP_GetOnHideAnimation() const;
    
};


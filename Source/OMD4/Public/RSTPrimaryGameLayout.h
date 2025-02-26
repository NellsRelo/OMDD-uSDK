#pragma once
#include "CoreMinimal.h"
#include "PrimaryGameLayout.h"
#include "GameplayTagContainer.h"
#include "RSTLayoutChangeDelegateDelegate.h"
#include "RSTPrimaryGameLayout.generated.h"

class UCommonActivatableWidget;

UCLASS(Blueprintable, EditInlineNew)
class OMD4_API URSTPrimaryGameLayout : public UPrimaryGameLayout {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTLayoutChangeDelegate OnLayoutWidgetChanged;
    
    // URSTPrimaryGameLayout();

protected:
    UFUNCTION(BlueprintCallable)
    void OnDisplayedLayerWidgetChanged(UCommonActivatableWidget* ShownWidget, FGameplayTag LayerTag);
    
};


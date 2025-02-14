#pragma once
#include "CoreMinimal.h"
#include "ERSTTabMenuTab.h"
#include "RSTGenericTabWidget.h"
#include "RSTTabMenuWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class OMD4_API URSTTabMenuWidget : public URSTGenericTabWidget {
    GENERATED_BODY()
public:
    URSTTabMenuWidget();

    UFUNCTION(BlueprintCallable)
    void SetActiveTab(ERSTTabMenuTab Tab, bool bDisableAnimation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERSTTabMenuTab GetCurrentTabAsEnum();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetActiveTab(ERSTTabMenuTab Tab, bool bDisableAnimation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnTabInputPressed(ERSTTabMenuTab Tab);
    
};


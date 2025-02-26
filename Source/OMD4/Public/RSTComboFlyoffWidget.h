#pragma once
#include "CoreMinimal.h"
#include "RSTUserWidget.h"
#include "RSTComboFlyoffWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class OMD4_API URSTComboFlyoffWidget : public URSTUserWidget {
    GENERATED_BODY()
public:
    URSTComboFlyoffWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetData(int32 comboLength, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BeginAnimation();
    
};


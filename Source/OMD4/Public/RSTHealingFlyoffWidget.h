#pragma once
#include "CoreMinimal.h"
#include "RSTHealingFlyoffRequest.h"
#include "RSTUserWidget.h"
#include "RSTHealingFlyoffWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class OMD4_API URSTHealingFlyoffWidget : public URSTUserWidget {
    GENERATED_BODY()
public:
    URSTHealingFlyoffWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Update(const FRSTHealingFlyoffRequest& NewRequest);
    
};


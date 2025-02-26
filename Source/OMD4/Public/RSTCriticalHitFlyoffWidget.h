#pragma once
#include "CoreMinimal.h"
#include "RSTUserWidget.h"
#include "RSTCriticalHitFlyoffWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class OMD4_API URSTCriticalHitFlyoffWidget : public URSTUserWidget {
    GENERATED_BODY()
public:
    URSTCriticalHitFlyoffWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetData(float CriticalHitStrength);
    
};


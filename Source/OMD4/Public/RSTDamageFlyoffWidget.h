#pragma once
#include "CoreMinimal.h"
#include "RSTDamageFlyoffRequest.h"
#include "RSTUserWidget.h"
#include "RSTDamageFlyoffWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class OMD4_API URSTDamageFlyoffWidget : public URSTUserWidget {
    GENERATED_BODY()
public:
    URSTDamageFlyoffWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Update(const FRSTDamageFlyoffRequest& NewRequest);
    
};


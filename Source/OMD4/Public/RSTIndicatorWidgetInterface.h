#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "RSTIndicatorWidgetInterface.generated.h"

class URSTIndicatorDescriptor;
class UWidget;

UINTERFACE(Blueprintable, MinimalAPI)
class URSTIndicatorWidgetInterface : public UInterface {
    GENERATED_BODY()
};

class IRSTIndicatorWidgetInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UnbindIndicator(const URSTIndicatorDescriptor* Indicator);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UWidget* GetRelevantWidget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BindIndicator(URSTIndicatorDescriptor* Indicator);
    
};


#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Templates/SubclassOf.h"
#include "RSTWidgetFactory.generated.h"

class UUserWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class OMD4_API URSTWidgetFactory : public UObject {
    GENERATED_BODY()
public:
    URSTWidgetFactory();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TSubclassOf<UUserWidget> FindWidgetClassForData(const UObject* Data) const;
    
};


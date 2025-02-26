#pragma once
#include "CoreMinimal.h"
#include "CommonListView.h"
#include "RSTListView.generated.h"

class URSTWidgetFactory;

UCLASS(Blueprintable)
class OMD4_API URSTListView : public UCommonListView {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<URSTWidgetFactory*> FactoryRules;
    
public:
    // URSTListView();

};


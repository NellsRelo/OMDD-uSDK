#pragma once
#include "CoreMinimal.h"
#include "RSTWidgetFactory.h"
#include "Templates/SubclassOf.h"
#include "RSTWidgetFactory_Class.generated.h"

class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class OMD4_API URSTWidgetFactory_Class : public URSTWidgetFactory {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<UObject>, TSubclassOf<UUserWidget>> EntryWidgetForClass;
    
public:
    URSTWidgetFactory_Class();

};


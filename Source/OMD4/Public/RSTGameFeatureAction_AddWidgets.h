#pragma once
#include "CoreMinimal.h"
#include "RSTGameFeatureAction_WorldBase.h"
#include "RSTHUDElementEntry.h"
#include "RSTHUDLayoutRequest.h"
#include "RSTGameFeatureAction_AddWidgets.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class URSTGameFeatureAction_AddWidgets : public URSTGameFeatureAction_WorldBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRSTHUDLayoutRequest> Layout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRSTHUDElementEntry> Widgets;
    
public:
    URSTGameFeatureAction_AddWidgets();

};


#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "RSTInventoryItemFragment.h"
#include "RSTInventoryFragment_HotbarIcon.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class OMD4_API URSTInventoryFragment_HotbarIcon : public URSTInventoryItemFragment {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush Brush;
    
    URSTInventoryFragment_HotbarIcon();

};


#pragma once
#include "CoreMinimal.h"
#include "RSTInventoryItemFragment.h"
#include "Templates/SubclassOf.h"
#include "RSTInventoryFragment_TrapItem.generated.h"

class ARSTTrap;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class OMD4_API URSTInventoryFragment_TrapItem : public URSTInventoryItemFragment {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ARSTTrap> Class;
    
    URSTInventoryFragment_TrapItem();

};


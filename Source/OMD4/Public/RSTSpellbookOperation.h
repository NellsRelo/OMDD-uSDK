#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RSTSpellbookOperation.generated.h"

class ARSTInventoryItemInstance;

UCLASS(Blueprintable)
class OMD4_API URSTSpellbookOperation : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARSTInventoryItemInstance* InventoryItem;
    
    URSTSpellbookOperation();

};


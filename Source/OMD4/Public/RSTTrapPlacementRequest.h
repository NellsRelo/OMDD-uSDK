#pragma once
#include "CoreMinimal.h"
#include "RSTTrapPlacementRequest.generated.h"

class ARSTInventoryItemInstance_Trap;
class ARSTTrapGrid;
class URSTTrapGridBoxComponent;

USTRUCT(BlueprintType)
struct OMD4_API FRSTTrapPlacementRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTTrapGridBoxComponent* BoxComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARSTTrapGrid* TrapGrid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARSTInventoryItemInstance_Trap* InventoryItem;
    
    FRSTTrapPlacementRequest();
};


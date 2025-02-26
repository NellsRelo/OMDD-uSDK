#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "RSTCorruptedTrapGridDecoratorEntry.generated.h"

class ARSTCorruptedTrapGridDecorator;

USTRUCT(BlueprintType)
struct OMD4_API FRSTCorruptedTrapGridDecoratorEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ARSTCorruptedTrapGridDecorator> BlueprintClass;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 PlacementTypes;
    
    FRSTCorruptedTrapGridDecoratorEntry();
};


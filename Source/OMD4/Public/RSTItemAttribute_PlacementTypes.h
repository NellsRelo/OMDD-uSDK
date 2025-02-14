#pragma once
#include "CoreMinimal.h"
#include "ERSTTrapPlacementFlags.h"
#include "RSTItemAttribute.h"
#include "RSTItemAttribute_PlacementTypes.generated.h"

UCLASS(Blueprintable)
class OMD4_API URSTItemAttribute_PlacementTypes : public URSTItemAttribute {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERSTTrapPlacementFlags Value;
    
    URSTItemAttribute_PlacementTypes();

};


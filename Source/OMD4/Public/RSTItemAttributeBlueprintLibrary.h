#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RSTItemAttributeCollection.h"
#include "RSTItemAttributeBlueprintLibrary.generated.h"

class ARSTInventoryItemInstance;

UCLASS(Blueprintable)
class OMD4_API URSTItemAttributeBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URSTItemAttributeBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static FRSTItemAttributeCollection GetAttributesForItemInstance(ARSTInventoryItemInstance* ItemInstance);
    
};


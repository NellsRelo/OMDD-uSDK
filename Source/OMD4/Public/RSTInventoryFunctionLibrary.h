#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Templates/SubclassOf.h"
#include "RSTInventoryFunctionLibrary.generated.h"

class URSTInventoryItemDefinition;
class URSTInventoryItemFragment;

UCLASS(Blueprintable)
class URSTInventoryFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URSTInventoryFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static URSTInventoryItemFragment* FindItemDefinitionFragment(const URSTInventoryItemDefinition* ItemDef, TSubclassOf<URSTInventoryItemFragment> FragmentClass);
    
};


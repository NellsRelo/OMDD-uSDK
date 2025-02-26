#pragma once
#include "CoreMinimal.h"
#include "GetItemDefinitionOutputPinDelegate.generated.h"

class URSTInventoryItemDefinition;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGetItemDefinitionOutputPin, const URSTInventoryItemDefinition*, ItemDefinition, bool, DidFind);


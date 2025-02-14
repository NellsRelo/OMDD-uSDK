#pragma once
#include "CoreMinimal.h"
#include "GetPawnDefinitionOutputPinDelegate.generated.h"

class URSTPawnDefinition;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGetPawnDefinitionOutputPin, const URSTPawnDefinition*, PawnDefintion, bool, DidFind);


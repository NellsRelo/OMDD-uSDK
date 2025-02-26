#pragma once
#include "CoreMinimal.h"
#include "GetSkinDefinitionOutputPinDelegate.generated.h"

class URSTSkinDefinition;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGetSkinDefinitionOutputPin, const URSTSkinDefinition*, SkinDefinition, bool, DidFind);


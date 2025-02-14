#pragma once
#include "CoreMinimal.h"
#include "RSTInteractionOption.h"
#include "InteractableObjectsChangedEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInteractableObjectsChangedEvent, const TArray<FRSTInteractionOption>&, InteractableOptions);


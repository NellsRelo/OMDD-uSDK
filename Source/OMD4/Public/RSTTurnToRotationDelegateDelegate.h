#pragma once
#include "CoreMinimal.h"
#include "RSTTurnToRotationDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRSTTurnToRotationDelegate, float, Duration);


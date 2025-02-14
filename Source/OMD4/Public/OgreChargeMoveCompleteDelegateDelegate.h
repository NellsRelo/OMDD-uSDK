#pragma once
#include "CoreMinimal.h"
#include "OgreChargeMoveCompleteDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOgreChargeMoveCompleteDelegate, const bool, MoveSucceeded);


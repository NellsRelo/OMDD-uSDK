#pragma once
#include "CoreMinimal.h"
#include "GetPawnUserFacingDataOutputPinDelegate.generated.h"

class URSTPawnUserFacingData;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGetPawnUserFacingDataOutputPin, const URSTPawnUserFacingData*, UserFacingData, bool, DidFind);


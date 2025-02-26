#pragma once
#include "CoreMinimal.h"
#include "GetSkinUserFacingDataOutputPinDelegate.generated.h"

class URSTSkinUserFacingData;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGetSkinUserFacingDataOutputPin, const URSTSkinUserFacingData*, UserFacingData, bool, DidFind);


#pragma once
#include "CoreMinimal.h"
#include "GetUpgradeUserFacingDataOutputPinDelegate.generated.h"

class URSTUpgradeDefinition;
class URSTUpgradeUserFacingData;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGetUpgradeUserFacingDataOutputPin, const URSTUpgradeDefinition*, UpgradeDefinition, const URSTUpgradeUserFacingData*, UserFacingData);


#pragma once
#include "CoreMinimal.h"
#include "GrappleCharacterDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGrappleCharacterDelegate, int32, InGrappleID);


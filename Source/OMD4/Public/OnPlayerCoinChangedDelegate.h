#pragma once
#include "CoreMinimal.h"
#include "OnPlayerCoinChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerCoinChanged, int32, Delta);


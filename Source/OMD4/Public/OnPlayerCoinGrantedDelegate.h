#pragma once
#include "CoreMinimal.h"
#include "ERSTCoinGrantReason.h"
#include "OnPlayerCoinGrantedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPlayerCoinGranted, int32, Delta, ERSTCoinGrantReason, Reason);


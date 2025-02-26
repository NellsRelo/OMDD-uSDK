#pragma once
#include "CoreMinimal.h"
#include "OnPlayerStateChangedDelegate.generated.h"

class APlayerState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerStateChanged, APlayerState*, PlayerState);


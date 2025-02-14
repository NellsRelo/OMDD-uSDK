#pragma once
#include "CoreMinimal.h"
#include "OnClientInitializedDelegate.generated.h"

class APlayerState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnClientInitialized, APlayerState*, PlayerState);


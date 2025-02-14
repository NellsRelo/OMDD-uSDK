#pragma once
#include "CoreMinimal.h"
#include "OnOwnerChangedDelegate.generated.h"

class APlayerState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnOwnerChanged, APlayerState*, PlayerState);


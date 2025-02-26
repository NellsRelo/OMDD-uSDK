#pragma once
#include "CoreMinimal.h"
#include "OnPostInitializeComponentsDelegate.generated.h"

class APlayerState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPostInitializeComponents, APlayerState*, PlayerState);


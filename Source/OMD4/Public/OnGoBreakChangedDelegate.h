#pragma once
#include "CoreMinimal.h"
#include "OnGoBreakChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGoBreakChanged, bool, bIsGoBreakActive);


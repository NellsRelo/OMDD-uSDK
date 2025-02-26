#pragma once
#include "CoreMinimal.h"
#include "RSTHealth_OnDisplayChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRSTHealth_OnDisplayChanged, bool, IsDisplaying, float, Duration);


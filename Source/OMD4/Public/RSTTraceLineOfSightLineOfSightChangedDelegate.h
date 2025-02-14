#pragma once
#include "CoreMinimal.h"
#include "RSTTraceLineOfSightLineOfSightChangedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRSTTraceLineOfSightLineOfSightChanged, AActor*, Actor);


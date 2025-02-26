#pragma once
#include "CoreMinimal.h"
#include "RSTTraceLineOfSightActorsDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_RetVal(TArray<AActor*>, FRSTTraceLineOfSightActorsDelegate);


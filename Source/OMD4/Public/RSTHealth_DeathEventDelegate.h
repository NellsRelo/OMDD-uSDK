#pragma once
#include "CoreMinimal.h"
#include "RSTHealth_DeathEventDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRSTHealth_DeathEvent, AActor*, OwningActor, const AActor*, Instigator);


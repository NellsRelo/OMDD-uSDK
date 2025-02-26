#pragma once
#include "CoreMinimal.h"
#include "RSTCharacter_DeathEventDelegate.generated.h"

class ARSTCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRSTCharacter_DeathEvent, ARSTCharacter*, OwningActor);


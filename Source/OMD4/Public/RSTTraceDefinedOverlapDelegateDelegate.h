#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTargetTypes.h"
#include "RSTTraceDefinedOverlapDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRSTTraceDefinedOverlapDelegate, const FGameplayAbilityTargetDataHandle&, TargetData);


#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTargetTypes.h"
#include "FireHookshotClawDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFireHookshotClawDelegate, const FGameplayAbilityTargetDataHandle&, Target, bool, bDidGrapple);


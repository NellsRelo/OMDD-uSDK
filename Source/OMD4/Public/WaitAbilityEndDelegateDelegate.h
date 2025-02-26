#pragma once
#include "CoreMinimal.h"
#include "WaitAbilityEndDelegateDelegate.generated.h"

class UGameplayAbility;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FWaitAbilityEndDelegate, UGameplayAbility*, EndedAbility);


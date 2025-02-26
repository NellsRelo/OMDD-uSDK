#pragma once
#include "CoreMinimal.h"
#include "GameplayEffect.h"
#include "RSTHealth_OnHealthChangedAuthorityDelegate.generated.h"

class URSTHealthComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FRSTHealth_OnHealthChangedAuthority, URSTHealthComponent*, HealthComponent, float, OldValue, float, NewValue, const FGameplayEffectSpec&, Spec);


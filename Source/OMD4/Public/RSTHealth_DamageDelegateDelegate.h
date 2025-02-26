#pragma once
#include "CoreMinimal.h"
#include "Engine/HitResult.h"
#include "GameplayEffect.h"
#include "RSTHealth_DamageDelegateDelegate.generated.h"

class AActor;
class URSTHealthComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_SixParams(FRSTHealth_DamageDelegate, URSTHealthComponent*, HealthComponent, float, Damage, AActor*, Instigator, const FHitResult&, HitResult, bool, bHasSpec, const FGameplayEffectSpec&, Spec);


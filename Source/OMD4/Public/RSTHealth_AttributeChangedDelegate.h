#pragma once
#include "CoreMinimal.h"
#include "Engine/HitResult.h"
#include "GameplayEffect.h"
#include "RSTHealth_AttributeChangedDelegate.generated.h"

class AActor;
class URSTHealthComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_SevenParams(FRSTHealth_AttributeChanged, URSTHealthComponent*, HealthComponent, float, OldValue, float, NewValue, AActor*, Instigator, const FHitResult&, HitResult, bool, bHasSpec, const FGameplayEffectSpec&, Spec);


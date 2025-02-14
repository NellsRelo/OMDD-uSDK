#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "RSTTransitionDelegate_DynamicDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FRSTTransitionDelegate_Dynamic, const FGameplayTag&, TransitionTag, bool, bCancelled, const FGameplayTagContainer&, AdditionalTags);


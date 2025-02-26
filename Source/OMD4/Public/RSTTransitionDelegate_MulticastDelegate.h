#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "RSTTransitionDelegate_MulticastDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRSTTransitionDelegate_Multicast, const FGameplayTag&, TransitionTag, const FGameplayTagContainer&, AdditionalTags);


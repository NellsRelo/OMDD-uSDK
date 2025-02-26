#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RSTLayoutChangeDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRSTLayoutChangeDelegate, FGameplayTag, Tag);


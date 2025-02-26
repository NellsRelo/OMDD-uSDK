#pragma once
#include "CoreMinimal.h"
#include "GameplayEffectTypes.h"
#include "RSTBuffVolumeGameplayEffectDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_RetVal_OneParam(FGameplayEffectSpecHandle, FRSTBuffVolumeGameplayEffectDelegate, const FGameplayEffectSpecHandle&, InHandle);


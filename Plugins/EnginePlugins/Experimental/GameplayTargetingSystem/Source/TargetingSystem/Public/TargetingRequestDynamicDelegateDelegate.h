#pragma once
#include "CoreMinimal.h"
#include "TargetingRequestHandle.h"
#include "TargetingRequestDynamicDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FTargetingRequestDynamicDelegate, FTargetingRequestHandle, TargetingRequestHandle);


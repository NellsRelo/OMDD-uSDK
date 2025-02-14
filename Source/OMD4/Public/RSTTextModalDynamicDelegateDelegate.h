#pragma once
#include "CoreMinimal.h"
#include "RSTTextModalDynamicDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRSTTextModalDynamicDelegate, FText, Text);


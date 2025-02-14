#pragma once
#include "CoreMinimal.h"
#include "EUIExtensionAction.h"
#include "UIExtensionRequest.h"
#include "ExtendExtensionPointDynamicDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FExtendExtensionPointDynamicDelegate, EUIExtensionAction, Action, const FUIExtensionRequest&, ExtensionRequest);


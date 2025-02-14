#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "LoadingScreenWidgetChangedDelegateDelegate.generated.h"

class UUserWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLoadingScreenWidgetChangedDelegate, TSubclassOf<UUserWidget>, NewWidgetClass);


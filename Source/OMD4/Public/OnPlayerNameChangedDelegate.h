#pragma once
#include "CoreMinimal.h"
#include "OnPlayerNameChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerNameChanged, const FString&, newPlayerName);


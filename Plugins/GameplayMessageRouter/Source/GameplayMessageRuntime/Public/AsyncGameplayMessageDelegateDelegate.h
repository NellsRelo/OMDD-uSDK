#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AsyncGameplayMessageDelegateDelegate.generated.h"

class UAsyncAction_ListenForGameplayMessage;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAsyncGameplayMessageDelegate, UAsyncAction_ListenForGameplayMessage*, ProxyObject, FGameplayTag, ActualChannel);


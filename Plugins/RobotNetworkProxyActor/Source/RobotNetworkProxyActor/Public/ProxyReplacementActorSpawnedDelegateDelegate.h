#pragma once
#include "CoreMinimal.h"
#include "ProxyReplacementActorSpawnedDelegateDelegate.generated.h"

class ARNetworkProxyActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FProxyReplacementActorSpawnedDelegate, ARNetworkProxyActor*, OriginalActor, ARNetworkProxyActor*, NetworkedActor);


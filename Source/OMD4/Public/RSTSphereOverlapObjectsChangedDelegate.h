#pragma once
#include "CoreMinimal.h"
#include "RSTSphereOverlapObjectsChangedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRSTSphereOverlapObjectsChanged, const TArray<AActor*>&, ChangedActors);


#pragma once
#include "CoreMinimal.h"
#include "RSTEditorPlacementActorPostMovedDelegate.generated.h"

class ARSTEditorPlacementActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRSTEditorPlacementActorPostMoved, ARSTEditorPlacementActor*, MovedActor);


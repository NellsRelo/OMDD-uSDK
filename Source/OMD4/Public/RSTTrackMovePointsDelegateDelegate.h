#pragma once
#include "CoreMinimal.h"
#include "RSTVectorArray.h"
#include "RSTTrackMovePointsDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRSTTrackMovePointsDelegate, const TArray<FRSTVectorArray>&, Points);


#pragma once
#include "CoreMinimal.h"
#include "ERSTActorCanvasProjectionMode.generated.h"

UENUM(BlueprintType)
enum class ERSTActorCanvasProjectionMode : uint8 {
    ComponentPoint,
    ComponentBoundingBox,
    ComponentScreenBoundingBox,
    ActorBoundingBox,
    ActorScreenBoundingBox,
};


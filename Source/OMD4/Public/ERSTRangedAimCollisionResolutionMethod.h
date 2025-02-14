#pragma once
#include "CoreMinimal.h"
#include "ERSTRangedAimCollisionResolutionMethod.generated.h"

UENUM(BlueprintType)
enum class ERSTRangedAimCollisionResolutionMethod : uint8 {
    None,
    ReticleCast,
    IgnoreReticleCollision_NoCollision,
    IgnoreReticleCollision_FirePointTrace,
    ReticleCast_CheckObstruction,
};


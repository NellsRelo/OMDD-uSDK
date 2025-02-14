#pragma once
#include "CoreMinimal.h"
#include "ERSTProjectilePathCollisionMethod.generated.h"

UENUM(BlueprintType)
enum class ERSTProjectilePathCollisionMethod : uint8 {
    Profile,
    Channel,
    ObjectType,
};


#pragma once
#include "CoreMinimal.h"
#include "EDeathType.generated.h"

UENUM(BlueprintType)
enum class EDeathType : uint8 {
    Ragdoll,
    Gib,
    CustomAnimation,
    EnteredRift,
    Pulled,
    SelfDestruct,
};


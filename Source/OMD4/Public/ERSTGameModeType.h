#pragma once
#include "CoreMinimal.h"
#include "ERSTGameModeType.generated.h"

UENUM(BlueprintType)
enum class ERSTGameModeType : uint8 {
    NotSet,
    SingleRiftDefense,
    CrystalDefense,
    MultipleRift,
    TeleportingRift,
};


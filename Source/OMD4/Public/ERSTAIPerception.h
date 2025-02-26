#pragma once
#include "CoreMinimal.h"
#include "ERSTAIPerception.generated.h"

UENUM(BlueprintType)
enum class ERSTAIPerception : uint8 {
    NotSet,
    Sight,
    Damage,
    Manual = 4,
};


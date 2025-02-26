#pragma once
#include "CoreMinimal.h"
#include "EOnslaughtSpawnLocationType.generated.h"

UENUM(BlueprintType)
enum class EOnslaughtSpawnLocationType : uint8 {
    Legacy,
    RandomPointInBox,
};


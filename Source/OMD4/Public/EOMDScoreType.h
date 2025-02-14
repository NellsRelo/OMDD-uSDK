#pragma once
#include "CoreMinimal.h"
#include "EOMDScoreType.generated.h"

UENUM(BlueprintType)
enum class EOMDScoreType : uint8 {
    BaseScore,
    ComboBonus,
    HeadshotBonus,
    KillStreakBonus,
    RiftPointBonus,
    SkullBonus,
    TimeBonus,
};


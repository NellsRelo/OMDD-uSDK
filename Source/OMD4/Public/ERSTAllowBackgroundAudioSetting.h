#pragma once
#include "CoreMinimal.h"
#include "ERSTAllowBackgroundAudioSetting.generated.h"

UENUM(BlueprintType)
enum class ERSTAllowBackgroundAudioSetting : uint8 {
    Off,
    AllSounds,
    Num,
};


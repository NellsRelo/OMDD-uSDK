#pragma once
#include "CoreMinimal.h"
#include "ERSTAdditionalGameplayEffectSetByCallerType.generated.h"

UENUM()
enum class ERSTAdditionalGameplayEffectSetByCallerType : int32 {
    Add,
    Multiply,
};


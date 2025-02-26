#pragma once
#include "CoreMinimal.h"
#include "EGameplayMessageMatch.generated.h"

UENUM(BlueprintType)
enum class EGameplayMessageMatch : uint8 {
    ExactMatch,
    PartialMatch,
};


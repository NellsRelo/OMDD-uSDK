#pragma once
#include "CoreMinimal.h"
#include "EUIExtensionPointMatch.generated.h"

UENUM(BlueprintType)
enum class EUIExtensionPointMatch : uint8 {
    ExactMatch,
    PartialMatch,
};


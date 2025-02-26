#pragma once
#include "CoreMinimal.h"
#include "ERSTBitwiseEnumOp.generated.h"

UENUM(BlueprintType)
enum class ERSTBitwiseEnumOp : uint8 {
    ADD,
    OR,
    XOR,
};


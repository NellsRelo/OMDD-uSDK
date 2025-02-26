#pragma once
#include "CoreMinimal.h"
#include "ECommonSessionVisibility.generated.h"

UENUM(BlueprintType)
enum class ECommonSessionVisibility : uint8 {
    FriendsOnly,
    Private,
    Public,
    Count,
};


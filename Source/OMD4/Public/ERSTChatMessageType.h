#pragma once
#include "CoreMinimal.h"
#include "ERSTChatMessageType.generated.h"

UENUM(BlueprintType)
enum class ERSTChatMessageType : uint8 {
    Player,
    Game,
    System,
};


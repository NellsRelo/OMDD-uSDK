#pragma once
#include "CoreMinimal.h"
#include "RSTPlayerProfileMessage.h"
#include "RSTPlayerProfileMessage_SkinUnlocksChanged.generated.h"

USTRUCT(BlueprintType)
struct OMD4_API FRSTPlayerProfileMessage_SkinUnlocksChanged : public FRSTPlayerProfileMessage {
    GENERATED_BODY()
public:
    FRSTPlayerProfileMessage_SkinUnlocksChanged();
};


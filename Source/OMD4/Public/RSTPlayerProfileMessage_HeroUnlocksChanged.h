#pragma once
#include "CoreMinimal.h"
#include "RSTPlayerProfileMessage.h"
#include "RSTPlayerProfileMessage_HeroUnlocksChanged.generated.h"

USTRUCT(BlueprintType)
struct OMD4_API FRSTPlayerProfileMessage_HeroUnlocksChanged : public FRSTPlayerProfileMessage {
    GENERATED_BODY()
public:
    FRSTPlayerProfileMessage_HeroUnlocksChanged();
};


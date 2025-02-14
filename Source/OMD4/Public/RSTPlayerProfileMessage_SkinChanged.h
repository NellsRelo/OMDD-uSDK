#pragma once
#include "CoreMinimal.h"
#include "RSTPlayerProfileMessage.h"
#include "RSTPlayerProfileMessage_SkinChanged.generated.h"

USTRUCT(BlueprintType)
struct OMD4_API FRSTPlayerProfileMessage_SkinChanged : public FRSTPlayerProfileMessage {
    GENERATED_BODY()
public:
    FRSTPlayerProfileMessage_SkinChanged();
};


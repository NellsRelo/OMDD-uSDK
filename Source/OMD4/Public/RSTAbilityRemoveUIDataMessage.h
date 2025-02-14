#pragma once
#include "CoreMinimal.h"
#include "RSTAbilityUIDataMessage.h"
#include "RSTAbilityRemoveUIDataMessage.generated.h"

USTRUCT(BlueprintType)
struct FRSTAbilityRemoveUIDataMessage : public FRSTAbilityUIDataMessage {
    GENERATED_BODY()
public:
    OMD4_API FRSTAbilityRemoveUIDataMessage();
};


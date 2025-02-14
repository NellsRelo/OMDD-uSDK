#pragma once
#include "CoreMinimal.h"
#include "RSTAbilityUIDataMessage.h"
#include "RSTAbilityModifyUIDataMessage.generated.h"

USTRUCT(BlueprintType)
struct FRSTAbilityModifyUIDataMessage : public FRSTAbilityUIDataMessage {
    GENERATED_BODY()
public:
    OMD4_API FRSTAbilityModifyUIDataMessage();
};


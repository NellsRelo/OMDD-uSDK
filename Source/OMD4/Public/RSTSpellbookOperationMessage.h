#pragma once
#include "CoreMinimal.h"
#include "RSTSpellbookOperationMessage.generated.h"

class URSTSpellbookOperation;

USTRUCT(BlueprintType)
struct OMD4_API FRSTSpellbookOperationMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URSTSpellbookOperation* SpellbookOperation;
    
    FRSTSpellbookOperationMessage();
};


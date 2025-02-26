#pragma once
#include "CoreMinimal.h"
#include "RSTPlayerProfileMessage.h"
#include "RSTPlayerProfileMessage_SkullsChanged.generated.h"

USTRUCT(BlueprintType)
struct OMD4_API FRSTPlayerProfileMessage_SkullsChanged : public FRSTPlayerProfileMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Skulls;
    
    FRSTPlayerProfileMessage_SkullsChanged();
};


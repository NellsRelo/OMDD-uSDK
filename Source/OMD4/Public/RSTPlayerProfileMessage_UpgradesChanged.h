#pragma once
#include "CoreMinimal.h"
#include "RSTPlayerProfileMessage.h"
#include "RSTPlayerProfileMessage_UpgradesChanged.generated.h"

USTRUCT(BlueprintType)
struct OMD4_API FRSTPlayerProfileMessage_UpgradesChanged : public FRSTPlayerProfileMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumUpgrades;
    
    FRSTPlayerProfileMessage_UpgradesChanged();
};


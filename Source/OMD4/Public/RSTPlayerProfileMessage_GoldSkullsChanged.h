#pragma once
#include "CoreMinimal.h"
#include "RSTPlayerProfileMessage.h"
#include "RSTPlayerProfileMessage_GoldSkullsChanged.generated.h"

USTRUCT(BlueprintType)
struct OMD4_API FRSTPlayerProfileMessage_GoldSkullsChanged : public FRSTPlayerProfileMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GoldSkulls;
    
    FRSTPlayerProfileMessage_GoldSkullsChanged();
};


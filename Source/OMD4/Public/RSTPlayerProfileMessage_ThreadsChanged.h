#pragma once
#include "CoreMinimal.h"
#include "RSTPlayerProfileMessage.h"
#include "RSTPlayerProfileMessage_ThreadsChanged.generated.h"

USTRUCT(BlueprintType)
struct OMD4_API FRSTPlayerProfileMessage_ThreadsChanged : public FRSTPlayerProfileMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumThreads;
    
    FRSTPlayerProfileMessage_ThreadsChanged();
};


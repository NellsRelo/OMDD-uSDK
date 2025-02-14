#pragma once
#include "CoreMinimal.h"
#include "ERSTChatMessageType.h"
#include "RSTChatMessage.generated.h"

USTRUCT(BlueprintType)
struct FRSTChatMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERSTChatMessageType MessageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Message;
    
    OMD4_API FRSTChatMessage();
};


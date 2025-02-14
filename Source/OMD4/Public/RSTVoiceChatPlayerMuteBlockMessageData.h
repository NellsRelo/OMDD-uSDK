#pragma once
#include "CoreMinimal.h"
#include "RSTVoiceChatPlayerMuteBlockMessageData.generated.h"

class APlayerState;

USTRUCT(BlueprintType)
struct FRSTVoiceChatPlayerMuteBlockMessageData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerState* MutedPlayer;
    
    OMD4_API FRSTVoiceChatPlayerMuteBlockMessageData();
};


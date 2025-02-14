#pragma once
#include "CoreMinimal.h"
#include "RSTOnVoiceChatPlayerTalkingUpdatedDelegate.generated.h"

class ARSTPlayerState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRSTOnVoiceChatPlayerTalkingUpdated, ARSTPlayerState*, Player, bool, bIsTalking);


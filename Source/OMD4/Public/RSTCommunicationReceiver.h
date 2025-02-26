#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "RSTCommunicationReceiver.generated.h"

class ARSTPlayerState;
class URSTCommunicationDefinition;

UINTERFACE(Blueprintable, MinimalAPI)
class URSTCommunicationReceiver : public UInterface {
    GENERATED_BODY()
};

class IRSTCommunicationReceiver : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveCommunication(const ARSTPlayerState* Instigator, int32 LocalPingTrackerId, const URSTCommunicationDefinition* Communication);
    
};


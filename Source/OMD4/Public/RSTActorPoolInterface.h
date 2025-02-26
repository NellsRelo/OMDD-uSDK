#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "RSTActorPoolInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class URSTActorPoolInterface : public UInterface {
    GENERATED_BODY()
};

class IRSTActorPoolInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BP_PrepareActorForReuse();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BP_ActorRequestedFromPool();
    
};


#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "VANotifyInterface.generated.h"

class USceneComponent;

UINTERFACE(Blueprintable, MinimalAPI)
class UVANotifyInterface : public UInterface {
    GENERATED_BODY()
};

class IVANotifyInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Received_VertexAnimationNotify(USceneComponent* MeshComp) const;
    
};


#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "VANotifyStateInterface.generated.h"

class USceneComponent;

UINTERFACE(Blueprintable, MinimalAPI)
class UVANotifyStateInterface : public UInterface {
    GENERATED_BODY()
};

class IVANotifyStateInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Received_VertexAnimationNotifyTick(USceneComponent* MeshComp, float FrameDeltaTime) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Received_VertexAnimationNotifyEnd(USceneComponent* MeshComp) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Received_VertexAnimationNotifyBegin(USceneComponent* MeshComp, float TotalDuration) const;
    
};


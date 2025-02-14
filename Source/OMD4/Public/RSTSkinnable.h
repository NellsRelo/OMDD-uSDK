#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "RSTSkinnable.generated.h"

class UMeshComponent;

UINTERFACE(Blueprintable, MinimalAPI)
class URSTSkinnable : public UInterface {
    GENERATED_BODY()
};

class IRSTSkinnable : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UMeshComponent* GetSkinnableMeshComponent() const;
    
};


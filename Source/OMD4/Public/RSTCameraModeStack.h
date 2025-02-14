#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RSTCameraModeStack.generated.h"

class URSTCameraMode;

UCLASS(Blueprintable)
class URSTCameraModeStack : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<URSTCameraMode*> CameraModeInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<URSTCameraMode*> CameraModeStack;
    
public:
    URSTCameraModeStack();

};


#pragma once
#include "CoreMinimal.h"
#include "Engine/DebugCameraController.h"
#include "RSTDebugCameraController.generated.h"

UCLASS(Blueprintable)
class OMD4_API ARSTDebugCameraController : public ADebugCameraController {
    GENERATED_BODY()
public:
    ARSTDebugCameraController(const FObjectInitializer& ObjectInitializer);

};


#include "RSTDebugCameraController.h"
#include "RSTCheatManager.h"

ARSTDebugCameraController::ARSTDebugCameraController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CheatClass = URSTCheatManager::StaticClass();
    this->ClickEventKeys.AddDefaulted(1);
}



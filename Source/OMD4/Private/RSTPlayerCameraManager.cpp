#include "RSTPlayerCameraManager.h"
#include "RSTUICameraManagerComponent.h"

ARSTPlayerCameraManager::ARSTPlayerCameraManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultModifiers.AddDefaulted(1);
    this->UICamera = CreateDefaultSubobject<URSTUICameraManagerComponent>(TEXT("UICamera"));
}



#include "RSTTrapGrid.h"
#include "Components/SceneComponent.h"

ARSTTrapGrid::ARSTTrapGrid(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->GridScale = 150.00f;
}

void ARSTTrapGrid::ToggleDrawTrapGrid(UWorld* World) {
}



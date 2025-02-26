#include "RSTPlacementPreview.h"
#include "Components/SceneComponent.h"

ARSTPlacementPreview::ARSTPlacementPreview(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
}




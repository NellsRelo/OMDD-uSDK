#include "RSTAIPath.h"
#include "Components/SceneComponent.h"

ARSTAIPath::ARSTAIPath(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComp"));
}



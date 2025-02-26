#include "RSTCinematicProxyActor.h"
#include "Components/SceneComponent.h"

ARSTCinematicProxyActor::ARSTCinematicProxyActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->bInvertGlobalTimeDilation = true;
    this->OverrideTimeDilation = 1.00f;
}



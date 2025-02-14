#include "RSTBlunderbussPetUltimate.h"
#include "Components/CapsuleComponent.h"

ARSTBlunderbussPetUltimate::ARSTBlunderbussPetUltimate(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CollisionComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CollisionComponent"));
    this->CollisionComponent->SetupAttachment(RootComponent);
}



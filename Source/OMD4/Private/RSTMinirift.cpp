#include "RSTMinirift.h"
#include "Components/SphereComponent.h"

ARSTMinirift::ARSTMinirift(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RiftInnerRadius = 100.00f;
    this->CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionComponent"));
    this->CollisionComponent->SetupAttachment(RootComponent);
}



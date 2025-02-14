#include "RSTFlyoff.h"
#include "Components/SceneComponent.h"
#include "Components/WidgetComponent.h"

ARSTFlyoff::ARSTFlyoff(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
    this->SceneComponent = (USceneComponent*)RootComponent;
    this->WidgetComponent = CreateDefaultSubobject<UWidgetComponent>(TEXT("Widget"));
    this->bIsAvailable = false;
    this->flyoffLifeSpan = 0.50f;
    this->WidgetComponent->SetupAttachment(RootComponent);
}

void ARSTFlyoff::SetIsAvailable(bool isAvailable) {
}


bool ARSTFlyoff::GetIsAvailable() {
    return false;
}

float ARSTFlyoff::GetFlyoffLifeSpan() {
    return 0.0f;
}



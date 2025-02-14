#include "RSTGibStatic.h"
#include "Components/StaticMeshComponent.h"

ARSTGibStatic::ARSTGibStatic(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    this->Mesh = (UStaticMeshComponent*)RootComponent;
    this->FXMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FX Mesh"));
    this->FXMesh->SetupAttachment(RootComponent);
}



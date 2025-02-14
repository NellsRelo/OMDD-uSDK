#include "RSTAIAttachmentStatic.h"
#include "Components/StaticMeshComponent.h"

ARSTAIAttachmentStatic::ARSTAIAttachmentStatic(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    this->Mesh = (UStaticMeshComponent*)RootComponent;
    this->FXMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FX Mesh"));
    this->FXMesh->SetupAttachment(RootComponent);
}


